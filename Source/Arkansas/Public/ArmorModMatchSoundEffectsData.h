#pragma once
#include "CoreMinimal.h"
#include "ArmorModMatchData.h"
#include "ArmorModMatchSoundEffectsData.generated.h"

class UAkStateValue;
class UArmorAudio;
class UWeaponAudio;

USTRUCT(BlueprintType)
struct FArmorModMatchSoundEffectsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmorModMatchData ModMatchData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UArmorAudio> FPSoundEffectsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UArmorAudio> TPSoundEffectsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWeaponAudio> CompanionSoundEffectsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* AudioState;
    
    ARKANSAS_API FArmorModMatchSoundEffectsData();
};

