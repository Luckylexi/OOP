#pragma once
#include <string>

enum pili {none, conjugative, type4};

namespace cell{
    class cell{
        public:
            cell(bool infect, bool nucl, bool organs);

            virtual void infect();
            virtual void disinfect();
            virtual bool get_infected();

            virtual ~cell();

            private:
                bool infected;
                bool const nucleous;
                bool const organelles;
                bool const membrane = true; 
    };
}