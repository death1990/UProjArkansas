#pragma once
#include "CoreMinimal.h"
#include "FogOfWarActorInformation.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FFogOfWarActorInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* FogOfWarActorRevealMaterialInstance;
    
    ARKANSAS_API FFogOfWarActorInformation();
};

