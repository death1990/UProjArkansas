#pragma once
#include "CoreMinimal.h"
#include "ESkill.h"
#include "FactionListener.h"
#include "OnProjectileDirectHit.generated.h"

class AIndianaCharacter;

UCLASS(Blueprintable, EditInlineNew)
class UOnProjectileDirectHit : public UFactionListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkill Skill;
    
public:
    UOnProjectileDirectHit();

protected:
    UFUNCTION(BlueprintCallable)
    void OnProjectileDirectHit(AIndianaCharacter* Source, AIndianaCharacter* Target, ESkill TargetSkill);
    
};

