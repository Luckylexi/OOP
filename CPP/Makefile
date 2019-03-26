CXXFLAGS=-std=c++14 -Iinclude -fPIC

tmp/Building.o : src/Building.cpp include/Building.h include/BuildingErrorState.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/BuildingErrorState.o : src/BuildingErrorState.cpp include/BuildingErrorState.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

lib/libBuilding.so : tmp/Building.o tmp/BuildingErrorState.o
	$(CXX) $(CXXFLAGS) -shared -o $@ $^

tmp/main.o : src/main.cpp include/Building.h include/BuildingErrorState.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

bin/building: tmp/main.o lib/libBuilding.so
	$(CXX) $(CXXFLAGS) -o $@ $^


