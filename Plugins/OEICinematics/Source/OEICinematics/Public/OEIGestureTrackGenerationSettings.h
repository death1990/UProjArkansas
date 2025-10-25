#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OEIGestureTrackActorGenerationSettings.h"
#include "OEIGestureTrackGenerationSettings.generated.h"

UCLASS(Blueprintable)
class OEICINEMATICS_API UOEIGestureTrackGenerationSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GestureAnimationSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOEIGestureTrackActorGenerationSettings SpeakerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOEIGestureTrackActorGenerationSettings ListenerSettings;
    
    UOEIGestureTrackGenerationSettings();

};

