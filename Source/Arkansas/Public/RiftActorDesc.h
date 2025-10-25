#pragma once
#include "CoreMinimal.h"
#include "ERiftActorNavModifierMode.h"
#include "RiftActorDesc.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRiftActorDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERiftActorNavModifierMode NavModifierMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    ARKANSAS_API FRiftActorDesc();
};

