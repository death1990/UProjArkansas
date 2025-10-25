#pragma once
#include "CoreMinimal.h"
#include "DamageDescription.h"
#include "IndianaDamageEvent.h"
#include "IndianaDamageTarget.h"
#include "IndianaRadialDamageEvent.h"
#include "RadialExplosion.generated.h"

USTRUCT(BlueprintType)
struct FRadialExplosion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageDescription DamageDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndianaDamageEvent IndianaDamageEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndianaRadialDamageEvent IndianaRadialDamageEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndianaDamageTarget DamageTarget;
    
    ARKANSAS_API FRadialExplosion();
};

