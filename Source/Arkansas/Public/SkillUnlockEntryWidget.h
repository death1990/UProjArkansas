#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "SkillUnlockEntryWidget.generated.h"

class UImage;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USkillUnlockEntryWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SkillUnlockedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SkillFadedLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SkillUnlockAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* SkillUnlockTextBlock;
    
public:
    USkillUnlockEntryWidget();

};

