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
            throw new badmarkerstate("drawing with capped marker is bad");
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
            throw new badmarkerstate("capped must be true or false");
        }
    }

  //  set color(value){
   //     this._color = value;
  //  }
}

var blackMarker = new marker("black");
var redMarker = new marker("red");

blackMarker.draw();
redMarker.draw();

console.log("I have a " + blackMarker.color + " marker");