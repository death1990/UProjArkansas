#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "GenericListButtonWidget.generated.h"

class UButtonBase;
class USizeBox;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UGenericListButtonWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* ChildButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* ButtonTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* OuterSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* ButtonSizeBox;
    
public:
    UGenericListButtonWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextBlockBase* GetTextBlock() const;
    
};

