#include "Prokaryote.h"
#include <iostream>
#include <assert.h>

using namespace std;

int main(){
    prokaryote::prokaryote *eColi = new prokaryote::prokaryote(false, conjugative, "Ecoli");

    assert(("Ecoli can't swim as they don't have flagellum",eColi->swimming()==false));
    assert(("The Ecoli bacterium is healthy", eColi->get_infected()==false));
    assert(("Ecoli can transfer DNA", eColi->DNAtransfer()==true));
    assert(("Ecoli doesn't have a twitch motality", eColi->twitchingMotility()==false));

    cout << "This is Ecoli (all tests passed)" << endl;

    eColi->~prokaryote();

    return 0;
}
