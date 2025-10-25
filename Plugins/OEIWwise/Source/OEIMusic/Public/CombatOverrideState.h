#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "CombatOverrideState.generated.h"

class UAkStateValue;

USTRUCT(BlueprintType)
struct OEIMUSIC_API FCombatOverrideState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* OverrideState;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval MinMaxThreatValue;
    
    FCombatOverrideState();
};

