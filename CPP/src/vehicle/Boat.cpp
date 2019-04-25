#include "vehicle/Boat.h"

#include <iostream>
#include <string.h>

using namespace std;

namespace vehicle
{
    boat::boat(int cS, int lev, int len, engineType e, Color c, string n) : vehicle(e, c, water), levels(lev), length(len)
    {
        crewSize = cS;
        name = n;
        cout << name << " was built (boat)" << endl;
    }

    int boat::getCrewSize() { return crewSize; }

    void boat::setCrewSize(int cS) { crewSize = cS; }

    int boat::getLevels() const { return levels; }

    int boat::getLength() const { return length; }

    std::string boat::getName() { return name; }

    int boat::move(int speed, int time)
    {
        cout << name <<" moved " << (speed * time) << " m in " << time << " s when traveling at " << speed / (1.94) << " knots (boat)" << endl;
        return speed * time;
    }

    boat::~boat(){
        cout << name << " was destroyed (boat)" << endl;
    }
} // namespace vehicle