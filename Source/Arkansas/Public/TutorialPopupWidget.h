#pragma once
#include "CoreMinimal.h"
#include "IndianaInterfaceUserWidget.h"
#include "TutorialPopupWidget.generated.h"

class UIndianaUserWidget;
class UInputLabelWidget;
class UOverlay;
class UTextBlockBase;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UTutorialPopupWidget : public UIndianaInterfaceUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* BGAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* StyleContainerOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* TutorialPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelWidget* TutorialInputLabel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIndianaUserWidget* CachedCurrentTutorialWidget;
    
public:
    UTutorialPopupWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlawTutorial() const;
    
};

