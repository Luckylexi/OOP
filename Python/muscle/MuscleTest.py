import Muscle 

def leafConstrucTest(m, _name, cont, exten, elast):
    print(f"Constructor test for {m.name}")
    try:
        if (type(m) == Muscle.antagonistMuscle):
            newMus = Muscle.antagonistMuscle(_name, cont, exten, elast)
            assert newMus.name == m.name
            print(f"{m.name} is a viable antagonist muscle\n")
        elif(type(m) == Muscle.agonistMuscle):
            newMus = Muscle.agonistMuscle(_name, cont, exten, elast)
            assert newMus.name == m.name
            print(f"{m.name} is a viable agonist muscle\n")
    except:
        print("Constructor test failed\n")

def compAddTest(mC, m):
    print(f"Composite addition test for {mC.groupName}")
    prevCount = len(mC._muscles)
    try:
        mC.addMuscle(m)
        assert len(mC._muscles) == prevCount+1
        print(f"{m.name} was added to {mC.groupName}")
        print('\n')
    except:
        print(f"{m.name} was not added to {mC.groupName}")
        print('\n')

def moveWellTest(mC, w):
    print(f"Composite move well test for {mC.groupName}")
    try:
        mC.move(w)
        for m in mC._muscles:
            if type(m) == Muscle.agonistMuscle:
                assert m.contracted <= m.contractility
            elif type(m) == Muscle.antagonistMuscle:
                assert m.extended <= m.extensibility
        mC.move(-w)
        print('\n')
    except:
        print("Not all muscles moved well\n")

def moveDecentTest(mC, w):
    print(f"Composite move decently test for {mC.groupName}")
    limitM = []
    try:
        for m in mC._muscles:
            if type(m) == Muscle.agonistMuscle:
                if m.elasticity > (m.contractility - (m.contracted+w)):
                    limitM.append(m)
            elif type(m) == Muscle.antagonistMuscle:
                if m.elasticity > (m.extensibility - (m.extended+w)):
                    limitM.append(m)
        if len(limitM) == 0:
            raise Exception("There was not a muscle that was at it's limit\n")
        else:
            mC.move(w)
            for m in limitM:
                if type(m) == Muscle.agonistMuscle:
                    assert m.contracted == m.contractility
                elif type(m) == Muscle.antagonistMuscle:
                    assert m.extended == m.extensibility
        mC.move(-w)
        print('\n')
    except:
        print("The maxed out muscles did not have the correct extended/contracted equality\n")

def strainTest(mC, w):
    print(f"Composite strain test for {mC.groupName}")
    strainM = []
    try:
        for m in mC._muscles:
            if type(m) == Muscle.agonistMuscle:
                if m.contractility < (m.contracted+w):
                    strainM.append(m)
            elif type(m) == Muscle.antagonistMuscle:
                if m.extensibility < (m.extended+w):
                    strainM.append(m)
        if(len(strainM) == 0):
            raise Exception("No mucles are strained\n")
        else:
            mC.move(w)
            for m in strainM:
                if type(m) == Muscle.agonistMuscle:
                    assert m.contracted > m.contractility
                elif type(m) == Muscle.antagonistMuscle:
                    assert m.extended > m.extensibility
        mC.move(-w)
        print('\n')
    except:
        print("The strained muscles did not reflect muscle strain (contracted/extend !> contractility/extensibility\n")