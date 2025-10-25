#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "SystemMapSelectionEntryWidget.generated.h"

class UButtonBase;
class UImage;
class UTextBlockBase;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USystemMapSelectionEntryWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InactiveBeaconOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* EntryButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* EntryTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ObjectiveIcon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* DestinationImage;
    
public:
    USystemMapSelectionEntryWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnEntryUnhoveredUnfocused();
    
    UFUNCTION(BlueprintCallable)
    void OnEntryHoveredFocused();
    
};

