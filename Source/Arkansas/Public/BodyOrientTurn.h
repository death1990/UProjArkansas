#pragma once
#include "CoreMinimal.h"
#include "BodyOrientTurn.generated.h"

USTRUCT(BlueprintType)
struct ARKANSAS_API FBodyOrientTurn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Angle;
    
    FBodyOrientTurn();
};

