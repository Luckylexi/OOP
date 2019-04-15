#pragma once

#include <string.h>
#include "Cell.h"

using namespace std;

namespace prokaryote{
    class prokaryote : public virtual cell::cell{
        private:
            bool const flagellum;
            pili const _pili;
            string const name;
            
        public: 
            prokaryote(bool flag, pili p, std::string n);
            bool swimming();
            bool DNAtransfer();
            bool twitchingMotility();
            ~prokaryote();
    };
}