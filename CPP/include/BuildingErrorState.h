#pragma once

#include <string>

namespace building
{
    class BuildingErrorState
        {
            private:
                std::string problem;

            public:
                BuildingErrorState(const std::string &_problem);

                std::string getProblem() const;

                void setProblem(const std::string &_problem);
        };
} // namespace building