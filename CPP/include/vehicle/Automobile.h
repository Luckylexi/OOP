#pragma once

#include "Color.h"
#include "engine.h"
#include "medium.h"
#include "Vehicle.h"

#include <string>

namespace vehicle{
    class autoMobile : public virtual vehicle {
        public:
            autoMobile(engineType e, int s, int w, int cyl, std::string mk, std::string mod, Color col);

            int getSeats() const;
            int getWheels() const;
            int getCylinders() const;
            std::string getMake() const;
            std::string getModel() const;
            int move(int speed, int time) override;

            ~autoMobile();

        private:
            int const seats;
            int const wheels;
            int const cylinders;
            std::string const make;
            std::string const model;
    };
}