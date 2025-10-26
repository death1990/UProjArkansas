#include "OEICrowdSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Arkansas -ObjectName=OwCrowdManager -FallbackName=OwCrowdManager
#include "OwCrowdManager.h"

UOEICrowdSettings::UOEICrowdSettings() {
    this->MaxStationaryCharacters = 50;
    this->MaxAnimProxyFillerCharacters = 50;
    this->AnimProxyNotVisibleToSpawn = 1.00f;
    this->AnimProxyNotVisibleToDespawn = 10.00f;
    this->AnimProxyScreenSizeToMerge = 0.05f;
    this->AnimProxyScreenSizeToUnmerge = 0.10f;
    this->AnimProxyDistanceToPlayerToBeRelevant = 100.00f;
    this->AnimProxyPeopleWatchingDuration = 10.00f;
    this->AnimProxyPeopleWatchingAngle = 55.00f;
    this->AnimProxyPeopleWatchingDistance = 500.00f;
    this->MoverDistanceToTurnOffSweeping = 40.00f;
    this->MoverStuckDistance = 10.00f;
    this->MoverPathStartTeleportDistance = 10.00f;
    this->MoverZonePathDistanceSearch = 10000.00f;
    this->CrowdManagerClass = AOwCrowdManager::StaticClass();
    this->CrowdScalabilitySettings.AddDefaulted(4);
    this->CrowdStreamingPriorityLow = 1;
    this->CrowdStreamingPriorityHigh = 7;
}


