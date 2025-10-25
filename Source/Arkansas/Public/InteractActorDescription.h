#pragma once
#include "CoreMinimal.h"
#include "InteractActorDescription.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FInteractActorDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    ARKANSAS_API FInteractActorDescription();
};

