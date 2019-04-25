#pragma once

#include "Color.h"
#include "engine.h"
#include "medium.h"
#include "Vehicle.h"

#include <string>

namespace vehicle{
    class boat : public virtual vehicle {
        public:
            boat(int crewSize, int lev, int len, engineType e, Color c, std::string n);
            
            int getCrewSize();
            void setCrewSize(int cS);
            int getLevels() const;
            int getLength() const;
            std::string getName();
            double move(double speed, double time) override;

            ~boat();

        private:
            std::string name;
            int crewSize;
            int const levels ;
            int const length ;
    };
}