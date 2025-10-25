#include "EnvQueryTest_IsActorOfClass.h"

UEnvQueryTest_IsActorOfClass::UEnvQueryTest_IsActorOfClass() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->ActorClass = NULL;
}


