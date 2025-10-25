#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "RPGInteractableBaseEntryWidget.generated.h"

class UImage;
class UOverlay;
class UTextBlockBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API URPGInteractableBaseEntryWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockBase* DescTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ItemOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ItemImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ItemImageBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ItemImageBackground_Disabled;
    
public:
    URPGInteractableBaseEntryWidget();

};

