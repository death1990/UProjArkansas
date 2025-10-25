#pragma once
#include "CoreMinimal.h"
#include "ESkill.h"
#include "EXPGainReason.h"
#include "InteractionScriptEvent.h"
#include "GiveInteractionXP.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UGiveInteractionXP : public UInteractionScriptEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EXPGainReason XPGainReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkill Skill;
    
    UGiveInteractionXP();

};

