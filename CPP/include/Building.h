#pragma once
#include <string>
#include "BuildingErrorState.h"

namespace building
{

class Building
{
  private:
    std::string _buildingName;
    const int _floors;
    const int _roomspfloor;
    const int _windowsproom = 4;
    bool _doorslocked;

  public:
    Building(std::string name, int floors, int roomspfloor);
    void enterbuilding();
    int totalrooms();
    int totalWindows();
    void lockDoors();
    void unlockDoors();
    bool getDoorState();
    std::string get_name();
    static const BuildingErrorState Locked_Building_State;
    ~Building();
};
} // namespace building