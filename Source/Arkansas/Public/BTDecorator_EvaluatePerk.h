#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_OwConditionalBase.h"
#include "BTDecorator_EvaluatePerk.generated.h"

class UPerkBehaviorData;

UCLASS(Blueprintable)
class UBTDecorator_EvaluatePerk : public UBTDecorator_OwConditionalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPerkBehaviorData* PerkData;
    
public:
    UBTDecorator_EvaluatePerk();

};

