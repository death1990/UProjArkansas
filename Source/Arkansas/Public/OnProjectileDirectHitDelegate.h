#pragma once
#include "CoreMinimal.h"
#include "ESkill.h"
#include "OnProjectileDirectHitDelegate.generated.h"

class AIndianaCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnProjectileDirectHit, AIndianaCharacter*, Source, AIndianaCharacter*, Target, ESkill, Skill);

