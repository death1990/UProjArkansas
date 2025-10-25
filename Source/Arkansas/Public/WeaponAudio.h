#pragma once
#include "CoreMinimal.h"
#include "WeaponVisuals.h"
#include "WeaponAudio.generated.h"

class UAkStateValue;

UCLASS(Blueprintable)
class UWeaponAudio : public UWeaponVisuals {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* WeaponAudioState;
    
public:
    UWeaponAudio();

};

