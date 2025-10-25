#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=EComparisonOperator -FallbackName=EComparisonOperator
#include "SpellConditional.h"
#include "SpellConditional_DistanceBetweenCasterAndTarget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USpellConditional_DistanceBetweenCasterAndTarget : public USpellConditional {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComparisonOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
public:
    USpellConditional_DistanceBetweenCasterAndTarget();

};

