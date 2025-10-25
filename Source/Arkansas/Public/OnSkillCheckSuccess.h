#pragma once
#include "CoreMinimal.h"
#include "ESkill.h"
#include "EXPGainReason.h"
#include "EventListener.h"
#include "OnSkillCheckSuccess.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnSkillCheckSuccess : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkill Skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EXPGainReason XPReason;
    
public:
    UOnSkillCheckSuccess();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSkillCheckSuccess(EXPGainReason Reason, int32 XPEarned, ESkill SkillUsed) const;
    
};

