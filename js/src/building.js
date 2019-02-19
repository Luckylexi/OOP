
class building{
    
    constructor(name, floors, roomspfloor){
        console.log(name + " is being built");
        this._name = name;
        this._floors = floors;
        this._roomspfloor = roomspfloor;
        this._windowsproom = 4;
        this._doorslocked = true;
    }

    enterbuilding(){
        if(!this._doorslocked){
            console.log("Entering " + this._name);
        }
        else
            throw building.Locked_Building_State;
    }

    totalrooms(){
        return this._floors * this._roomspfloor;
    }

    totalwindows(){
        return (this.totalrooms() * this._windowsproom);
    }

    lockDoors(){
        this._doorslocked = true;
    }
    unlockDoors(){
        this._doorslocked = false;
    }
    get Name(){
        return this._name;
    }
}

class errorstate{
    constructor(problem){
        this._problem = problem;
    }
}


building.Locked_Building_State = new errorstate("The building is locked, try again later");

module.exports.building = building ;
module.exports.errorstate = errorstate;
