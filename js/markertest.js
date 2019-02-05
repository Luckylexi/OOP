var marker = require('marker');
var assert = require('assert');

describe('Marker', function() {
  describe('#constructor()', function() {
    it('should be black when started as black', function() {
        let blackmarker = marker.marker("black");
        assert.equal("black", blackmarker.color);
    });
    it('should be initially capped', function() {
        let blackmarker = marker.marker("black");
        assert.equal(true, blackmarker.capped);
    });
    it('should fail to draw when capped', function(){
        let blackmarker = marker.marker("black");
        expect(blackmarker.draw().to.throw(marker.Bad_Marker_Capped_Dra));
    });
  });
});

