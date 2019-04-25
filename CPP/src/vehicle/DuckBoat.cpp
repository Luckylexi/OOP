#include "vehicle/DuckBoat.h"

#include <iostream>
#include <string>

using namespace std;

namespace vehicle
{
    duckboat::duckboat(Color c, string n) : vehicle(diesel, c, ground), autoMobile(diesel, 96, 6, 8, NULL, NULL, c), boat(2, 1, 40, diesel, c, n) {
            cout << "an amphibious vehicle " << n << " was built." << endl; }

    void duckboat::changeMedium(mediumType m){ setMedium(m); }

    int duckboat::move(int speed, int time){
        mediumType m = getMedium();
        std::string n = getName();
        if(m == water){
             cout << n <<" moved " << (speed * time) << " m in " << time << " s when traveling at " << speed / (1.94) << " knots (duckboat)" << endl;
        }
        else if (m == ground) {
             cout <<  n <<" moved " << " moved " << (speed * time)/1609 << " mi in " << time << " s when traveling at " << speed / (1.94) << " mph (duckboat)" << endl;
        }
        else
        {
            cout << n << " moved " << (speed * time)/1000 << " km in " << time << " s when traveling at " << speed << " m/s. (duckboat)" << endl;
        }
        return speed * time;
    }
    duckboat::~duckboat(){
        cout << getName() << " was destroyed (duckboat)" << endl;
    }
} // namespace vehicle