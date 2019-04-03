import Cell

def SwimTest(c):
    print(f"Swimming test for {c.cellName}")
    try:
        if (c.flagellum):
            assert c.swimming() == True
            print(f"{c.cellName} can swim\n")
        else:
            assert c.swimming() != True
            print(f"{c.cellName} can't swim\n")
    except:
        print("Swimming test failed\n")

def dnaTranTest(c):
    print(f"DNA Transfer test for {c.cellName}")
    try:
        if (c.pili == Cell.Pili.conjugative):
            assert c.DNAtransfer() == True
            print(f"{c.cellName} transfers DNA\n")
        else:
            assert c.DNAtransfer() != True
            print(f"{c.cellName} can't transfer DNA\n")
    except:
        print("DNA Transfer Test failed\n")

def twitchingTest(c):
    print(f"Twitching motality test for {c.cellName}")
    try:
        if (c.pili == Cell.Pili.type4):
            assert c.twitchingMotility() == True
            print(f"{c.cellName} can twitch\n")
        else:
            assert c.twitchingMotility() != True
            print(f"{c.cellName} does not twitch\n")
    except:
        print("Twitching test failed\n")

def infectTest(c):
    print(f"Infect Test for {c.cellName}")
    c.infect()
    try:
        assert c.get_infected() == True
        print(f"{c.cellName} is infected\n")
    except:
        print("infect test failed\n")
    

def disinfectTest(c):
    print(f"Disinfect test for {c.cellName}")
    c.disinfect()
    try:
        assert c.get_infected() == False
        print(f"{c.cellName} is not infected\n")
    except:
        print("disinfect test failed\n")



