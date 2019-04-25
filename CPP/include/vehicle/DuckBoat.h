#pragma once

#include "Color.h"
#include "engine.h"
#include "medium.h"
#include "Automobile.h"
#include "Boat.h"

#include <string>

namespace vehicle{

    class duckboat: public autoMobile, public boat {
        public:
            duckboat(Color c, std::string n);
            void changeMedium(mediumType m);
            double move(double speed, double time) override;
            ~duckboat();
    };
}