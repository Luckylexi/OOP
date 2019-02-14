var building = require('building');
var assert = require('assert');

describe ('building', function(){
    describe ('#constructor', function(){
        it('should have the name provided when constructed', function(){
            let wubbenScienceCenter = building("Wubben Science Center", 3, 50);
            assert.equal("Wubben Science Center", wubbenScienceCenter.name);
        })
        it('should have locked doors when constructed', function(){
            let wubbenScienceCenter = building("Wubben Science Center", 3, 50);
            assert.equal(true, wubbenScienceCenter.doorslocked);
        })
        it('should not be enterable when doors are locked',function(){
            let wubbenScienceCenter = building("Wubben Science Center", 3, 50);
            expect(wubbenScienceCenter.getinbuilding().to.throw(building.Locked_Building_State));
        })
        it('should have the corrct number of total rooms', function(){
            let wubbenScienceCenter = building("Wubben Science Center", 3, 50);
            assert.equal((3*50), wubbenScienceCenter.totalRooms());
        })
        it('should have the corrct number of total windows', function(){
            let wubbenScienceCenter = building("Wubben Science Center", 3, 50);
            assert.equal((3*50*4), wubbenScienceCenter.totalWindows());
        })
    })
})