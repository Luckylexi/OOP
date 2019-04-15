#include "Building.h"

using namespace building;

#include <iostream>
#include <memory>


int main(){
    std::shared_ptr < Building > wubbenSCSP(new Building("Wubben Science Center", 3, 20));
    wubbenSCSP->unlockDoors();
    wubbenSCSP->enterbuilding();

    std::cin.get();
    return 0;
}