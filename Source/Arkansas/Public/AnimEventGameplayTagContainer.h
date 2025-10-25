#pragma once
#include "CoreMinimal.h"
#include "AnimEventGameplayTagData.h"
#include "AnimEventGameplayTagContainer.generated.h"

USTRUCT(BlueprintType)
struct FAnimEventGameplayTagContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimEventGameplayTagData> AnimationData;
    
public:
    ARKANSAS_API FAnimEventGameplayTagContainer();
};

