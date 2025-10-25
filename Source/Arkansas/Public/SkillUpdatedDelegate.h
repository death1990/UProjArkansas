#pragma once
#include "CoreMinimal.h"
#include "ESkill.h"
#include "SkillUpdatedDelegate.generated.h"

class UCharacterInfoComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSkillUpdated, UCharacterInfoComponent*, CharacterInfoComponent, ESkill, Skill, int32, NewValue);

