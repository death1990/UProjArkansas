#pragma once
#include "CoreMinimal.h"
#include "EHUDAdjustmentType.generated.h"

UENUM(BlueprintType)
enum class EHUDAdjustmentType : uint8 {
    Invalid,
    EHUDWidth,
    EHUDHeight,
    EHUDGlobalScale,
    EHealthScale,
    ECompanionsScale,
    ECompassScale,
    EQuestTrackerScale,
    ENotificationsScale,
    EAmmoReadoutScale,
    EAudioLogScale,
    ERadioNotificationScale,
    ELevelUpScale,
    ENewAreaScale,
    EEnemyScannerScale,
    EObservationScale,
    EReputationScale,
    EBountyScale,
};

