#pragma once
#include "CoreMinimal.h"
#include "DamageDescription.h"
#include "IndianaDamageEvent.h"
#include "ShotInfo.generated.h"

USTRUCT(BlueprintType)
struct FShotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageDescription DamageDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndianaDamageEvent DamageEvent;
    
    ARKANSAS_API FShotInfo();
};

