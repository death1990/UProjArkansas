#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ButtonGroup.generated.h"

class UButtonBase;

UCLASS(Blueprintable)
class UButtonGroup : public UObject {
    GENERATED_BODY()
public:
    UButtonGroup();

private:
    UFUNCTION(BlueprintCallable)
    void OnButtonUnFocused(UButtonBase* Button);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonFocused(UButtonBase* Button);
    
    UFUNCTION(BlueprintCallable)
    void CyclePreviousButton();
    
    UFUNCTION(BlueprintCallable)
    void CycleNextButton();
    
};

