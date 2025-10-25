#pragma once
#include "CoreMinimal.h"
#include "EWeaponEvent.h"
#include "WeaponModMatchData.h"
#include "WeaponVisualModOverrideData.generated.h"

class UEventEffect;
class UWeaponMod;

USTRUCT(BlueprintType)
struct FWeaponVisualModOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseModMatchData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWeaponMod> WeaponMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponModMatchData ModMatchData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EWeaponEvent, UEventEffect*> Events;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UEventEffect*> CustomEvents;
    
    ARKANSAS_API FWeaponVisualModOverrideData();
};

