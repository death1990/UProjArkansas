#pragma once
#include "CoreMinimal.h"
#include "EWeaponEvent.h"
#include "WeaponModMatchData.h"
#include "WeaponModEventData.generated.h"

class UEventEffect;

USTRUCT(BlueprintType)
struct FWeaponModEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponModMatchData ModMatchData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EWeaponEvent, UEventEffect*> Events;
    
    ARKANSAS_API FWeaponModEventData();
};

