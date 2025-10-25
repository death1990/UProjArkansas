#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "BTDecorator_OwConditionalBase.h"
#include "BTDecorator_HasValidTarget.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UBTDecorator_HasValidTarget : public UBTDecorator_OwConditionalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActorKey;
    
public:
    UBTDecorator_HasValidTarget();

};

