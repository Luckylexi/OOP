#pragma once

#include "engine.h"
#include "Color.h"
#include "medium.h"

namespace vehicle
{
    class vehicle{
        public:
            vehicle(engineType e, Color c, mediumType m);

            virtual engineType getEngine() const;
            virtual Color getColor();
            virtual void setColor(Color c);
            virtual mediumType getMedium();
            virtual void setMedium(mediumType m);
            virtual int move(int speed, int time);

            virtual ~vehicle();

        private:
            engineType const engine;
            Color color;
            mediumType medium;  
    };
} // vehicle


