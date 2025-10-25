#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "BTDecorator_HasOOCSettingBase.h"
#include "BTDecorator_HasOutOfCombatStartDelay.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_HasOutOfCombatStartDelay : public UBTDecorator_HasOOCSettingBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector OutStartDelayKey;
    
public:
    UBTDecorator_HasOutOfCombatStartDelay();

};

