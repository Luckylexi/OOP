#include "vehicle/Automobile.h"

#include <iostream>
#include <string.h>

using namespace std;

namespace vehicle
{
    autoMobile::autoMobile(engineType e, int s, int w, int cyl, std::string mk, std::string mod, Color col)
    : vehicle(e, col, ground), seats(s), wheels(w), cylinders(cyl), make(mk), model(mod)
    {
        cout << "A " << make << " " << model << " was built (automobile)" << endl;
    }

    int autoMobile::getSeats() const { return seats; }

    int autoMobile::getWheels() const { return wheels; }

    int autoMobile::getCylinders() const { return cylinders; }

    string autoMobile::getMake() const { return make; }

    string autoMobile::getModel() const { return model; }

    double autoMobile::move(double speed, double time){
        cout << "The " << make << " " << model << " moved " << (speed * time)/1609 << " mi in " << time << " s when traveling at " << speed / (1.94) << " mph (automobile)" << endl;
        return speed * time;
    }

    autoMobile::~autoMobile()
    {
        cout << make << " " << model << " was crushed. (automobile)" << endl;
    }
} // namespace vehicle