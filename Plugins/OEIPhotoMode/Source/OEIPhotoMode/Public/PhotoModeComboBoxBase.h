#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ComboBoxString -FallbackName=ComboBoxString
#include "Components/ComboBoxString.h"

#include "PhotoModeComboBoxBase.generated.h"

UCLASS(Blueprintable)
class OEIPHOTOMODE_API UPhotoModeComboBoxBase : public UComboBoxString {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush NormalStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush HoveredFocusedStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush PressedStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Focused;
    
public:
    UPhotoModeComboBoxBase();

protected:
    UFUNCTION(BlueprintCallable)
    void SetBrushes(FSlateBrush InNormalImage, FSlateBrush InHoveredFocusedImage, FSlateBrush InPressedStyle);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusChanged(bool HasFocus);
    
};

