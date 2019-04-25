#include <iostream>
#include <assert.h>

#include "vehicle/Automobile.h"
#include "vehicle/Boat.h"
#include "vehicle/DuckBoat.h"

using namespace std;

namespace vehicle
{
    int main(){
        boat *titanic = new boat(892, 9, 882.75, steam, White, "RMS Titanic");
        autoMobile *fTaurus = new autoMobile(gasoline, 5, 4, 6, "Ford", "Taurus", Silver);
        duckboat *amphVehicle = new duckboat(Blue, "Duck Boat");

        cout << "Moving tests" << endl;
        assert(("The titanic didn't move", titanic->move(12.5, 3600)==45000));
        assert(("The ford taurus didn't move", fTaurus->move(12.5,3600)==45000));
        assert(("The duck boat didn't move", amphVehicle->move(12.5,3600)==45000));

        cout << "Amphibous vehicle medium change test" << endl;
        if(amphVehicle->getMedium() == ground)
          { amphVehicle->changeMedium(water);
            assert(("The duck boat didn't go to water", amphVehicle->getMedium() == water)); } 
        else{
            amphVehicle->changeMedium(ground);
            assert(("The duck boat didn't go to land", amphVehicle->getMedium() == ground));}

        cout << "All tests passed" << endl;
        return 0;
    }
} // vehicle
