#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=SpeakerReference -FallbackName=SpeakerReference
#include "Templates/SubclassOf.h"
#include "OEISpeakerGestureIdlesAssignments.generated.h"

class UOEICineIdleSettings;

UCLASS(Blueprintable)
class OEICINEMATICS_API UOEISpeakerGestureIdlesAssignments : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSpeakerReference, TSubclassOf<UOEICineIdleSettings>> SpeakerGestureIdles;
    
    UOEISpeakerGestureIdlesAssignments();

};

