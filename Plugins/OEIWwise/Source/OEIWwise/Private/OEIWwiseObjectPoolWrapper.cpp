#include "OEIWwiseObjectPoolWrapper.h"

UOEIWwiseObjectPoolWrapper::UOEIWwiseObjectPoolWrapper() {
    this->PoolName = TEXT("Default__OEIWwiseObjectPoolWrapper");
    this->MaxResources = 0;
    this->MaxProxies = 0;
    this->PoolDistanceCheck = 2000.00f;
    this->bEnableAcoustics = true;
    this->bEnableDynamicOpenings = true;
    this->bEnableAcousticsVolumes = true;
    this->bSeekToMasterEvent = false;
    this->MasterEvent = NULL;
    this->EventID = 0;
}


