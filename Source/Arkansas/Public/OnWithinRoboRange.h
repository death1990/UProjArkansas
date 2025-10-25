#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=EComparisonOperator -FallbackName=EComparisonOperator
#include "FactionListener.h"
#include "OnWithinRoboRange.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnWithinRoboRange : public UFactionListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumDetectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComparisonOperator Operator;
    
public:
    UOnWithinRoboRange();

protected:
    UFUNCTION(BlueprintCallable)
    void OnRoboWithinRangeStateChanged(int32 PrevRoboCount, int32 CurrRoboCount);
    
};

