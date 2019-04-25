#include "vehicle/Vehicle.h"

#include <iostream>
#include <string.h>


using namespace std;

namespace vehicle
{
    vehicle::vehicle(engineType e, Color c, mediumType m) : engine(e){
        color = c;
        medium = m;
        cout << "A vehicle was made." << endl;
    }

    engineType vehicle::getEngine() const { return engine; }

    Color vehicle::getColor() { return color; }

    void vehicle::setColor(Color c) { color = c; }

    mediumType vehicle::getMedium() { return medium; }

    void vehicle::setMedium(mediumType m) {medium = m;}

    int vehicle::move(int speed, int time)
    {
        cout << "The vehicle moved " << (speed * time)/1000 << " km in " << time << " s when traveling at " << speed << " m/s. (vehicle)" << endl;
        return speed * time;
    }

    vehicle::~vehicle() {}

} // namespace vehicle