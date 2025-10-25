#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=EComparisonOperator -FallbackName=EComparisonOperator
#include "FactionListener.h"
#include "OnPlayerDetectedBy.generated.h"

class AActor;
class AIndianaAiCharacter;

UCLASS(Blueprintable, EditInlineNew)
class UOnPlayerDetectedBy : public UFactionListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumDetectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComparisonOperator Operator;
    
public:
    UOnPlayerDetectedBy();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUndetectedBy(AActor* Detectee, AIndianaAiCharacter* Detector, int32 DetectorCount);
    
    UFUNCTION(BlueprintCallable)
    void OnDetectedBy(AActor* Detectee, AIndianaAiCharacter* Detector, int32 DetectorCount);
    
};

