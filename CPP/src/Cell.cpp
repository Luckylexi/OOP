#include <iostream>

#include "Cell.h"

using namespace std;

namespace cell{
    cell::cell(bool infect, bool nucl, bool organs): infected(infect), nucleous(nucl), organelles(organs){
        cout << "A new cell was made" << endl;
    }

    void cell::infect(){
        infected = true;
    }
    void cell::disinfect(){
        infected = false;
    }
    bool cell::get_infected(){
        return infected;
    }
    
    cell::~cell(){
        cout << "The cell is dead" << endl;
    }
}