#include "Prokaryote.h"

#include <string.h>
#include <iostream>

using namespace std;

namespace prokaryote
{
    prokaryote::prokaryote(bool f, pili p, string n): cell(false, false, false), flagellum(f), _pili(p), name(n){
        cout  << name << " was made" << endl;
    }

    bool prokaryote::swimming(){
        if(flagellum == true) return true;
        else return false;
        }
    bool prokaryote::DNAtransfer(){
        if(_pili == conjugative) return true;
        else false;
    }
    bool prokaryote::twitchingMotility(){
        if(_pili == type4) return true;
        else false;}
    prokaryote::~prokaryote(){
        cout << name << " is dead" << endl;
    }
}





 

    