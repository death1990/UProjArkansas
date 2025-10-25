#pragma once
#include "CoreMinimal.h"
#include "BaseMinimapEntryWidget.h"
#include "MinimapQuestBeaconWidget.generated.h"

class UImage;
class UPanelWidget;
class UQuestIconImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMinimapQuestBeaconWidget : public UBaseMinimapEntryWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlowPadding;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AreaBeaconActiveParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* AreaImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestIconImage* BeaconIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* BeaconOverlay;
    
public:
    UMinimapQuestBeaconWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDeactivateAnimFinished();
    
};

