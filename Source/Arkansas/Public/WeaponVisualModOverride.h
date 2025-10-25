#pragma once
#include "CoreMinimal.h"
#include "EWeaponEvent.h"
#include "WeaponVisualModOverrideData.h"
#include "WeaponVisualModOverride.generated.h"

class UEventEffect;

USTRUCT(BlueprintType)
struct FWeaponVisualModOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EWeaponEvent, UEventEffect*> BaseWeaponEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UEventEffect*> BaseWeaponCustomEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponVisualModOverrideData> OverrideWeaponEvents;
    
    ARKANSAS_API FWeaponVisualModOverride();
};

