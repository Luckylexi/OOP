import enum

class cell:
    def __init__(self, infect, nuc, organs):
        self.infected = infect
        self.nucleous = nuc
        self.organelles = organs
        self.membrane = True
    def infect(self): #set infected true
        self.infected = True
    def disinfect(self): #set infected false (easier terms to understand)
        self.infected = False
    def get_infected(self):
        return self.infected

class Pili(enum.Enum):
    conjugative = 1
    type4 = 2

class prokaryote(cell):
    def __init__(self,flag,pili, name):
        cell.__init__(self, False, False, True)
        self.cellName = name
        self.flagellum = flag
        self.pili = pili
    def swimming(self):
        if(self.flagellum): return True
        else: return False
    def DNAtransfer(self):
        if(self.pili == Pili.conjugative): return True
        else: False
    def twitchingMotility(self):
        if(self.pili == Pili.type4): return True
        else: False
    def death(self):
        print("{0} is dead", self.cellName)
        del self
