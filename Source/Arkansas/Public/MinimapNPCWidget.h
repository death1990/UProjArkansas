#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "BaseMinimapEntryWidget.h"
#include "ItemStack.h"
#include "MinimapNPCWidget.generated.h"

class UImage;
class UInventoryComponent;
class UTexture2D;
class UWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMinimapNPCWidget : public UBaseMinimapEntryWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DownedColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InterrogateCheckGateCycleCount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* NPCTypeImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* EntryBacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* NPCFacingIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OnSpotted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* DefaultIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* BountyIcon;
    
public:
    UMinimapNPCWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnLootAnimFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnDeathAnimFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnActorLooted(UInventoryComponent* InInventoryComponent, const FItemStack& ItemStack);
    
};

