#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "RadioEntryWidget.generated.h"

class UBroadcastStationAsset;
class UButtonBase;
class UImage;
class UPanelWidget;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API URadioEntryWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeTextOpacityByAvailability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvailableOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnavailableOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* MainButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* SelectedStationPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* StationNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* FactionImage;
    
public:
    URadioEntryWidget();

    UFUNCTION(BlueprintCallable)
    void SetStationSelected(bool bIsSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetStationAvailable(bool bIsAvailable);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOnStationChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOnSelectChanged(bool bIsSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOnFocusChanged(bool bIsHoveredFocused);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOnAvailabilityChanged(bool bIsAvailable);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBroadcastStationAsset* GetStation() const;
    
};

