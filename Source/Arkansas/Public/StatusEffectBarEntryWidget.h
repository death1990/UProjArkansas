#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "StatusEffectBarEntryWidget.generated.h"

class UImage;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UStatusEffectBarEntryWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* StatusEffectImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BulbImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* DisplayParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimInProgress;
    
public:
    UStatusEffectBarEntryWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnFadeOutComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnAnimsComplete();
    
};

