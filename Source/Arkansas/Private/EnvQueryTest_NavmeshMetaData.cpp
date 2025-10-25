#include "EnvQueryTest_NavmeshMetaData.h"

UDEPRECATED_EnvQueryTest_NavmeshMetaData::UDEPRECATED_EnvQueryTest_NavmeshMetaData() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->MetaDataAND = 0;
    this->MetaDataOR = 0;
    this->MetaDataNOT = 0;
}


