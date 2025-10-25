#pragma once
#include "CoreMinimal.h"
#include "ScaledActorEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FScaledActorEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinPlayerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorClass;
    
    ARKANSAS_API FScaledActorEntry();
};

