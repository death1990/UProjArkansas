#pragma once
#include "CoreMinimal.h"
#include "WeaponModMatchData.h"
#include "ModMatchSoundEffectsData.generated.h"

class UAkStateValue;
class UWeaponAudio;

USTRUCT(BlueprintType)
struct FModMatchSoundEffectsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponModMatchData ModMatchData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWeaponAudio> FPSoundEffectsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWeaponAudio> TPSoundEffectsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWeaponAudio> CompanionSoundEffectsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* AudioState;
    
    ARKANSAS_API FModMatchSoundEffectsData();
};

