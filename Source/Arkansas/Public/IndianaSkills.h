#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Templates/SubclassOf.h"
#include "IndianaSkills.generated.h"

class UIndianaSkill;

UCLASS(Abstract, Blueprintable)
class UIndianaSkills : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIndianaSkill> SkillImplementations[24];
    
public:
    UIndianaSkills();

};

