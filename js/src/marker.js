class badmarkerstate {
    constructor(problem){
        this._problem = problem;
    }
}
class marker{
    constructor(color){
        console.log("constructed marker");
        this._color = color;
        this._capped = true;
    }

    draw(){
        if (!this._capped){
           console.log("drawing in " + this._color);
        }
        else{
            throw marker.Bad_Marker_Capped_Draw;
        }
    }

    get color(){
        return this._color;
    }

    get capped(){
        return this._capped;
    }

    set capped(value){
        if (typeof value == "boolean"){
            this._capped = value;
        }
        else{
            throw marker.Bad_Marker_Capped_Invalid;
        }
    }

  //  set color(value){
   //     this._color = value;
  //  }
}

marker.Bad_Marker_Capped_Draw = new badmarkerstate("drawing with capped marker is bad");
marker.Bad_Marker_Capped_Invalid = new badmarkerstate("capped must be true or false");

exports.marker = Marker;
exports.badmarkerstate = BadMarkerState;