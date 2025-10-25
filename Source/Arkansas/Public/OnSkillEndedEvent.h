#pragma once
#include "CoreMinimal.h"
#include "ESkill.h"
#include "EventListener.h"
#include "OnSkillEndedEvent.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UOnSkillEndedEvent : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkill Skill;
    
public:
    UOnSkillEndedEvent();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSkillEnded(AActor* Caster, ESkill SkillUsed, AActor* Target) const;
    
};

