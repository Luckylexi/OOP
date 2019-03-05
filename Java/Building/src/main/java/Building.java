
public class Building {
    private String _name;
    private int _floors;
    private int _roomspfloor;
    private final int _windowsproom = 4;
    private boolean _doorslocked;

    public Building(String name, int floors, int roomspfloor){
        this._name = name;
        this._floors = floors;
        this._roomspfloor = roomspfloor;
        this._doorslocked = true;
    }

    public void enterbuilding() throws BuildingErrorState{
        if(!this._doorslocked){
            System.out.println("Entering " + this._name);
        }
        else{
            throw Locked_Building_State;
        }
    }

    public int totalrooms(){return  this._floors * this._roomspfloor; }

    public int totalwindows(){ return totalrooms() * this._windowsproom;}

    public void lockDoors(){ this._doorslocked = true;}
    public void unlockDoors(){ this._doorslocked = false;}
    public boolean getDoorState() {return this._doorslocked;}

    public String get_name(){ return  this._name; }

    static public BuildingErrorState Locked_Building_State = new BuildingErrorState("You are trying to enter a locked building.");
}
