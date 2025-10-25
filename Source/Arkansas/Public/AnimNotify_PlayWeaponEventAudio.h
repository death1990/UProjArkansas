#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EWeaponEvent.h"
#include "AnimNotify_PlayWeaponEventAudio.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_PlayWeaponEventAudio : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponEvent WeaponEvent;
    
    UAnimNotify_PlayWeaponEventAudio();

};

