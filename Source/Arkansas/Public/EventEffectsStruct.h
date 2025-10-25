#pragma once
#include "CoreMinimal.h"
#include "EventEffectsStruct.generated.h"

class UEventEffect;

USTRUCT(BlueprintType)
struct FEventEffectsStruct {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEventEffect*> Effects;
    
public:
    ARKANSAS_API FEventEffectsStruct();
};

