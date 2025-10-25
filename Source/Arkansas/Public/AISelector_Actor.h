#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISelector_Actor.generated.h"

class UAIActor;

USTRUCT(BlueprintType)
struct FAISelector_Actor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIActor> AIActor;
    
    ARKANSAS_API FAISelector_Actor();
};

