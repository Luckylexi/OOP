#pragma once
#include <Color.h>

namespace marker{
    class Marker {
        private: Color color;
        private: bool capped;

        public: 
        Marker(Color _color){
            color = _color;
            capped = true;
        }
         void setColor(Color _color){
             color = _color
         }
         Color getColor(){
            return color;
         }
         

    };
}