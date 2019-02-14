class building_error_state{
    constructor(_problem){
        this.problem = _problem;
    }
}
class building{
    constructor(_name, _floors, _roomspfloor){
        console.log(_name + " is being built");
        this.name = _name;
        this.floors = _floors;
        this.roomspfloor = _roomspfloor;
        this.windowsproom = 4;
        this.doorslocked = true;
    }
    
    //more of a understood idea
    unlockDoors(){ doorslocked = false;}
    lockDoors(){ doorslocked = true;}

    getinbuilding(){
        if(!this.doorslocked){
            console.log("You can enter " + name);
        }
        else{
            throw building.Locked_Building_State;
        }
     } 

    totalRooms() { return roomspfloor * floors;}
    totalWindows(){ return totalRooms() * windowsproom;}

    get name(){ return this.name;}
    get floors(){ return this.floors;}
}

building.Locked_Building_State = new building_error_state("The building is locked, try again later");

exports.building = Building;
exports.building_error_state = BuildingErrorState;
