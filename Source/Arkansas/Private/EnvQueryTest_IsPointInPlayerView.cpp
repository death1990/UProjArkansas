#include "EnvQueryTest_IsPointInPlayerView.h"

UEnvQueryTest_IsPointInPlayerView::UEnvQueryTest_IsPointInPlayerView() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
}


