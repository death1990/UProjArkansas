#include "EnvQueryTest_Projectile.h"

UEnvQueryTest_Projectile::UEnvQueryTest_Projectile() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->DestinationContext = NULL;
    this->TargetAimLocationOverrideContext = NULL;
}


