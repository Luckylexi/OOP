#include <iostream>
#include "Building.h"

namespace building{
    Building::Building(std::string name, int floors, int roomspfloor) : _floors(floors), _roomspfloor(roomspfloor) {
        _buildingName = name;
    }
    int Building::totalrooms() {
        return _floors * _roomspfloor;
    }
    int Building::totalWindows() {
        return (totalrooms() * _windowsproom);
    }
    void Building::lockDoors(){
        _doorslocked = true;
    }
    void Building::unlockDoors(){
        _doorslocked = false;
    }
    bool Building::getDoorState(){
        return _doorslocked;
    }
    void Building::enterbuilding(){
        if(getDoorState() == false){
            std::cout << "Entering " << get_name() << std::endl;
        }
        else {throw Locked_Building_State;}
    }
    std::string Building::get_name(){
        return _buildingName;
    }

    Building::~Building() {
            std::cout << "destructing building@" 
                        << ((void*) this) << std::endl; 
        }

    const BuildingErrorState Building::Locked_Building_State("The building is locked.");
}

