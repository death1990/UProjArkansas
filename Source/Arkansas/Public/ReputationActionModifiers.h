#pragma once
#include "CoreMinimal.h"
#include "ReputationActionModifiers.generated.h"

USTRUCT(BlueprintType)
struct FReputationActionModifiers {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BribeModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TalkModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FightModifier;
    
public:
    ARKANSAS_API FReputationActionModifiers();
};

