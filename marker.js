
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

class markertest{
    blackMarker() {return new marker("black");}
    redMarker() {return new marker("red");}

    testDrawCappedBad(){
        var ok = false;
        try{
            var black = this.blackMarker();
            black.draw();
        }
        catch(err){
            ok = true;
        }
        if (!ok){ throw "bad";}
    }

    testdrawuncappedok(){
        var red = this.redMarker();
        red.capped = false;
        red.draw();
    }

    testblackmarkerisblack(){
         var black = this.blackMarker();
         if (black.color !== "black")
         {
             throw "bad";
         }
    }
    testall() {
        this.testblackmarkerisblack();
        this.testDrawCappedBad();
        this.testdrawuncappedok();
    }
}

var testMarker = new markertest();
testMarker.testall();

//var blackMarker = new marker("black");
//var redMarker = new marker("red");

//blackMarker.draw();
//blackMarker.capped(false);
//blackMarker.draw();
//redMarker.draw();

//console.log("I have a " + blackMarker.color + " marker");