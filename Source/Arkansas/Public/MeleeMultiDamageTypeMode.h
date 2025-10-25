#pragma once
#include "CoreMinimal.h"
#include "DamageTypeRequirement.h"
#include "ESkill.h"
#include "MeleeMode.h"
#include "MeleeMultiDamageTypeMode.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMeleeMultiDamageTypeMode : public UMeleeMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkill Skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDamageTypeRequirement> DamageTypes;
    
public:
    UMeleeMultiDamageTypeMode();

};

