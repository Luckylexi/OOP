import Cell, CellTest

Ecoli = Cell.prokaryote(False, Cell.Pili.conjugative ,"Ecoli")

print(f"\n{Ecoli.cellName} is lonely, {Ecoli.cellName} tries to swim")
CellTest.SwimTest(Ecoli)

print(f"{Ecoli.cellName} wants to share.")
CellTest.dnaTranTest(Ecoli)

print(f"{Ecoli.cellName} thinks the twitch dance is so cool, wants to try")
CellTest.twitchingTest(Ecoli)

print(f"{Ecoli.cellName} feels sick")
CellTest.infectTest(Ecoli)

print(f"{Ecoli.cellName} feels better")
CellTest.disinfectTest(Ecoli)