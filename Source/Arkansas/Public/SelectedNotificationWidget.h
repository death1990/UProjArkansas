#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "SelectedNotificationWidget.generated.h"

class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USelectedNotificationWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* TextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotificationVisibleTimePerClick;
    
public:
    USelectedNotificationWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopFadeOutAnimation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayNotificationAnimation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFadeOutAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeRightAnimationEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeOutAnimationEnd();
    
};

