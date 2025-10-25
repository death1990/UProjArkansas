#include "EnvQueryTest_CanSeeCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UEnvQueryTest_CanSeeCharacter::UEnvQueryTest_CanSeeCharacter() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->EnemyContext = NULL;
    this->ObserverContext = UEnvQueryContext_Querier::StaticClass();
}


