#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ItemStack.h"
#include "ItemViewerItemWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UItemViewerItemWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemStack ItemStack;
    
    UItemViewerItemWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonUnhovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonHovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonFocusLost();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonFocused();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonClicked();
    
};

