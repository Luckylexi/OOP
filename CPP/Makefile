CXX=g++
CXXFLAGS=-std=c++14 -Iinclude -fPIC

tmp/Cell.o : src/Cell.cpp include/Cell.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/Prokaryote.o : src/Prokaryote.cpp include/Prokaryote.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

lib/libCell.so : tmp/Cell.o tmp/Prokaryote.o
	$(CXX) $(CXXFLAGS) -shared -o $@ $^

tmp/main.o : src/cellmain.cpp include/Cell.h include/Prokaryote.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

bin/Cell: tmp/main.o lib/libCell.so
	$(CXX) $(CXXFLAGS) -o $@ $^


