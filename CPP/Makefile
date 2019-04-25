CXX=g++
CXXFLAGS=-std=c++14 -Iinclude -fPIC

tmp/Cell.o : src/cell/Cell.cpp include/cell/Cell.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/Prokaryote.o : src/cell/Prokaryote.cpp include/cell/Prokaryote.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

lib/libCell.so : tmp/Cell.o tmp/Prokaryote.o
	$(CXX) $(CXXFLAGS) -shared -o $@ $^

tmp/main.o : src/cell/cellmain.cpp include/cell/Cell.h include/cell/Prokaryote.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

bin/Cell: tmp/main.o lib/libCell.so
	$(CXX) $(CXXFLAGS) -o $@ $^


