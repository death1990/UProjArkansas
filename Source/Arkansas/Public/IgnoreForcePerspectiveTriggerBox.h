#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TriggerBox -FallbackName=TriggerBox
#include "EForcedFirstPersonFlag.h"
#include "IgnoreForcePerspectiveTriggerBox.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API AIgnoreForcePerspectiveTriggerBox : public ATriggerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EForcedFirstPersonFlag FlagToIgnore;
    
public:
    AIgnoreForcePerspectiveTriggerBox(const FObjectInitializer& ObjectInitializer);

};

