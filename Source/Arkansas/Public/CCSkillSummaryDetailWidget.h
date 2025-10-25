#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "CCSkillSummaryDetailWidget.generated.h"

class UButtonBase;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCCSkillSummaryDetailWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* SkillNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* SkillValueTextBlock;
    
public:
    UCCSkillSummaryDetailWidget();

};

