#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "SkillAdjustment.generated.h"

class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USkillAdjustment : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* AdjustmentDescription;
    
public:
    USkillAdjustment();

};

