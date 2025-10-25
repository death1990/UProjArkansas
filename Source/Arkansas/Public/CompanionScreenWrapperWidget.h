#pragma once
#include "CoreMinimal.h"
#include "IndianaInterfaceUserWidget.h"
#include "ItemStack.h"
#include "PageDimensions.h"
#include "CompanionScreenWrapperWidget.generated.h"

class UActorRenderWidget;
class UCompanionsWidget;
class UInventoryComponent;
class UItemViewerWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCompanionScreenWrapperWidget : public UIndianaInterfaceUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCompanionsWidget* Companions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorRenderWidget* ActorRender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemViewerWidget* CompanionItemViewer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPageDimensions> PageDimensions;
    
public:
    UCompanionScreenWrapperWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInSharedItemViewer();
    
    UFUNCTION(BlueprintCallable)
    void AddItemToItemViewer(UInventoryComponent* InventoryComponent, const FItemStack& ItemStack);
    
};

