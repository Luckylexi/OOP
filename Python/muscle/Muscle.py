import abc

class muscle(metaclass= abc.ABCMeta):  
    @abc.abstractmethod
    def move(self, wght): pass

class agonistMuscle(muscle):
    def __init__(self, _name, _contractility, _extensibility, _elasticity):
        self.name = _name
        self.contractility = _contractility
        self.extensibility = _extensibility
        self.elasticity = _elasticity
        self.contracted = 0
        self.extended = self.extensibility
    
    ''' def __eq__(self, other):
        if self is other:
            return True
        elif type(other) != type(self):
            return False
        else:
             n = str.lower(self.name) == str.lower(other.name)
             c = self.contractility == other.contractility
             ex = self.extensibility == other.extensibility
             el = self.elasticity == other.elasticity
             currentState = (self.contracted == other.contracted) and (self.extended == other.extended)
             return n and c and ex and el and currentState'''

    def move(self, wght):
        if(wght > 0): 
            movetype = "lifted"
            m = abs(self.contractility - (self.contracted+wght))
        else: 
            movetype = "lowered"
            m = (self.contractility - (self.contracted+wght))

        if(self.elasticity > (m)):
            self.contracted = self.contractility
            self.extended = 0
            print(f"{self.name} {movetype} the weight ({wght} lbs) maxed")
        else:
            self.contracted += wght
            self.extended -= wght
            print(f"{self.name} {movetype} the weight ({wght} lbs)")
            if(self.contracted > self.contractility):
                print(f"muscle strain to {self.name} likely occured, please use a smaller weight")

class antagonistMuscle(muscle):
    def __init__(self, _name, _contractility, _extensibility, _elasticity):
        self.name = _name
        self.contractility = _contractility
        self.extensibility = _extensibility
        self.elasticity = _elasticity
        self.contracted = self.contractility
        self.extended = 0
    
    '''def __eq__(self, other):
        if self is other:
            return True
        elif type(other) != type(self):
            return False
        else:
            n = str.lower(self.name) == str.lower(other.name)
            c = self.contractility == other.contractility
            ex = self.extensibility == other.extensibility
            el = self.elasticity == other.elasticity
            currentState = (self.contracted == other.contracted) and (self.extended == other.extended)
            return n and c and ex and el and currentState'''

    def move(self, wght):
        if(wght > 0): 
            movetype = "lifted"
            m = abs(self.extensibility - (self.extended + wght))
        else: 
            movetype = "lowered"
            m = (self.extensibility - (self.extended + wght))

        
        if(self.elasticity > (m)):
            self.extended = self.extensibility
            self.contracted = 0
            print(f"{self.name} {movetype} the weight ({wght} lbs) maxed")
        else:
            self.extended += wght
            self.contracted -= wght
            print(f"{self.name} {movetype} the weight ({wght} lbs)")
            if(self.extended > self.extensibility):
                print(f"muscle strain to {self.name} likely occured")

class muscleGroup(muscle):
    def __init__(self, _groupName):
        self.groupName = _groupName
        self._muscles = set()
        
    def __iter__(self):
       return self._muscles.__iter__()

    def move(self, wght):
        for m in self._muscles:
            m.move(wght)
    
    def getMuscleNames(self):
        string = ""
        for m in self._muscles:
            string += m.name + "\n"
        return string

    def addMuscle(self, mus):
        try:
            self._muscles.add(mus)
        except:
            print(f"{mus.name} not added to {self.groupName}")
    
    def removeMuscle(self, mus):
        self._muscles.remove(mus)
    
def reps(mG, rp, wght):
    repStep = rp * .1 * wght
    print(f"Doing {rp} reps with {wght} lbs")
    for m in mG:
            m.contractility += repStep
            m.extensibility += repStep
