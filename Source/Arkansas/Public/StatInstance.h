#pragma once
#include "CoreMinimal.h"
#include "StatModifierInstance.h"
#include "StatInstance.generated.h"

USTRUCT(BlueprintType)
struct FStatInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InherentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InherentMultiplier;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FStatModifierInstance> Modifiers;
    
public:
    ARKANSAS_API FStatInstance();
};

