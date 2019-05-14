 cellLife = Object.freeze({"G0":0, "G1":1, "S":2, "G2":3, "M":{"Prophase":1, "Metaphase":2, "Anaphase":3, "Telophase":4, "Cytokinesis":5}, "Apoptosis": 6}), 
    lifePhase = 1, 
    key = Object.keys(cellLife).find(k => cellLife[k] === lifePhase);

class cell{
    constructor(cellLifeLength,){
        console.log(key);
        this.infected = false;
        this.nucleous = false;
        this.lifeLength = cellLifeLength;
        this.cellAge = 0;
    }

    nextcellPhase(){
        if(this.lifePhase < 5)
            this.lifePhase += 1;
        else
            this.lifePhase = 1;
        console.log(key);
    }

    get Infected(){
        return infected;
    }
    set Infected(disease){
        this.infected = disease;
    }

    cellDeath(){
        if(this.infected == true || this.cellAge == this.cellLifeLength){
            console.log("This cell is dying.");
            this.lifePhase = 6;
            console.log(key);
        }
        else{
            console.log(key);
        }
    }
}

class animalCell extends cell{
    constructor(){
        this.nucleous = true;
        this.cancerous = false;
    }

    get Cancerous(){return this.cancerous};
    set Cancerous(disease){this.cancerous = disease};

    cellDeath(){
        if(this.cancerous == true)
        {
            console.log("This cell is dying.");
            this.lifePhase = 6;
            console.log(key);
        }
    }
}

class plantCell extends cell{
    constructor(){
        this.nucleous = true;
        this.cancerous = false;
        this.cellWall = true;
    }

    get Cancerous(){return this.cancerous};
    set Cancerous(disease){this.cancerous = disease};

    cellDeath(){
        if(this.cancerous == true)
        {
            console.log("This cell is dying.");
            this.lifePhase = 6;
            console.log(key);
        }
    }
}

class prokaryoticCell extends cell{

}

module.exports.cell = cell;
module.exports.animalCell = animalCell;
module.exports.plantCell = plantCell;
module.exports.prokaryoticCell = prokaryoticCell;