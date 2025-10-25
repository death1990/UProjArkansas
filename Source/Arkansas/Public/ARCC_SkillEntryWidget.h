#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "ARCC_SkillEntryWidget.generated.h"

class UButtonBase;
class UImage;
class UOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UARCC_SkillEntryWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* SelectedOverlayDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SkillImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SelectedVisualEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DumbSkillVisualEffect;
    
public:
    UARCC_SkillEntryWidget();

};

