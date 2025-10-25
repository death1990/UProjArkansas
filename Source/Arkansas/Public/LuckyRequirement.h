#pragma once
#include "CoreMinimal.h"
#include "InteractableRequirement.h"
#include "LuckyRequirement.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULuckyRequirement : public UInteractableRequirement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverrideLuckyChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideLuckyChance;
    
public:
    ULuckyRequirement();

};

