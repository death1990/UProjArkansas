#pragma once
#include "CoreMinimal.h"
#include "EIndianaUIColorType.h"
#include "IndianaInterfaceUserWidget.h"
#include "Templates/SubclassOf.h"
#include "MultifloorElevatorWidget.generated.h"

class UIndianaUserWidget;
class UInputLabelGroupWidget;
class UPanelWidget;
class UTextBlockBase;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UMultifloorElevatorWidget : public UIndianaInterfaceUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* ElevatorNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* EntryPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputLabelGroupWidget* InputLabelGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowFloorsDescending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CurrentFloorTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AvailableFloorTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* UnavailableFloorTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIndianaUserWidget> FloorButtonChildClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIndianaUIColorType CurrentFloorTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIndianaUIColorType AvailableFloorTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIndianaUIColorType LockedFloorTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutPlaybackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceCloseOnRepeatedInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeOut;
    
public:
    UMultifloorElevatorWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnResponse9InputAction();
    
    UFUNCTION(BlueprintCallable)
    void OnResponse8InputAction();
    
    UFUNCTION(BlueprintCallable)
    void OnResponse7InputAction();
    
    UFUNCTION(BlueprintCallable)
    void OnResponse6InputAction();
    
    UFUNCTION(BlueprintCallable)
    void OnResponse5InputAction();
    
    UFUNCTION(BlueprintCallable)
    void OnResponse4InputAction();
    
    UFUNCTION(BlueprintCallable)
    void OnResponse3InputAction();
    
    UFUNCTION(BlueprintCallable)
    void OnResponse2InputAction();
    
    UFUNCTION(BlueprintCallable)
    void OnResponse1InputAction();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeOutFinished();
    
};

