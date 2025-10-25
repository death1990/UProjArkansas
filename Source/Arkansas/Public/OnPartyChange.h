#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=EComparisonOperator -FallbackName=EComparisonOperator
#include "EventListener.h"
#include "OnPartyChange.generated.h"

class AIndianaAiCharacter;

UCLASS(Blueprintable, EditInlineNew)
class UOnPartyChange : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCompanions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComparisonOperator Operator;
    
public:
    UOnPartyChange();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPartyChanged(AIndianaAiCharacter* Companion, bool bAdded) const;
    
};

