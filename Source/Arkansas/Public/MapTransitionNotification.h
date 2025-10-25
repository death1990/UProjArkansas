#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "MapTransitionNotification.generated.h"

class UOverlay;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, Deprecated, EditInlineNew, NotPlaceable)
class UDEPRECATED_MapTransitionNotification : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* MainOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* AreaNameTextBlock;
    
public:
    UDEPRECATED_MapTransitionNotification();

protected:
    UFUNCTION(BlueprintCallable)
    void OnHUDVisibilityChanged(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimComplete();
    
};

