var assert = require('assert');
var chai = require('chai');
var Cell = require('../src/cell');

var expect = chai.expect;

describe('cell', function(){
    describe('#constructor()',function(){
        it('should not be infected at first',function(){
            let cell1 = new Cell.cell(10);
            assert.equal(cell1.infected == false);
        });
        it('should have the specified life span',function(){
            let cell2 = new Cell.cell(4);
            assert.equal(cell2.lifeLength == 4);
        });
        it('should start at an age of 0 days',function(){
            let cell1 = new Cell.cell(10);
            assert.equal(cell1.cellAge == 0);
        });
        it('should not die when not infected or younger than max age, outputs cell life phase',function(){
            let cell1 = new Cell.cell(10);
            expect(cell1.cellDeath.bind(cell1)).to;
        });
    });
});