#pragma once
#include "CoreMinimal.h"
#include "ESkill.h"
#include "EventListener.h"
#include "OnSkillUsedEvent.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UOnSkillUsedEvent : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkill Skill;
    
public:
    UOnSkillUsedEvent();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSkillUsed(AActor* Caster, ESkill SkillUsed, AActor* Target) const;
    
};

