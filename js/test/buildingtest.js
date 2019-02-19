

var assert = require('assert');
var chai = require('chai');
var Building = require('../src/building');


var expect = chai.expect;

describe('building', function() {
    describe('#constructor()', function() {
        it('should have the name provided when constructed', function(){
            
            let wbs = new Building.building("Wubben Science Center", 3, 50);
            assert.equal("Wubben Science Center", wbs._name);
        });
        it('should have locked doors when constructed', function(){
             let wbs = new Building.building("Wubben Science Center", 3, 50);
            
            assert.equal(true, wbs._doorslocked);
        });
        it('should not be enterable when doors are locked',function(){
            let wbs = new Building.building("Wubben Science Center", 3, 50);
            debugger
            expect(wbs.enterbuilding.bind(wbs)).to.throw(Building.building.Locked_Building_State);
        });
        it('should have the corrct number of total rooms', function(){
            let wbs = new Building.building("Wubben Science Center", 3, 50);
            debugger
            assert.equal((3*50), wbs.totalrooms());
        });
        it('should have the corrct number of total windows', function(){
            let wbs = new Building.building("Wubben Science Center", 3, 50);
            debugger       
             assert.equal((3*50*4), wbs.totalwindows());
        });
    });
});