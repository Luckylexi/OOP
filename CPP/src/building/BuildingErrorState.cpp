#include "BuildingErrorState.h"

namespace building{
        BuildingErrorState::BuildingErrorState(const std::string &_problem) : problem(_problem){} 

        std::string BuildingErrorState::getProblem() const {
            return problem;
        }
    
        void BuildingErrorState::setProblem(const std::string &_problem) {
            problem = _problem;
        }
}