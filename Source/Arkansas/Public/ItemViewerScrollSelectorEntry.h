#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "ItemViewerScrollSelectorEntry.generated.h"

class UButtonBase;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UItemViewerScrollSelectorEntry : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* PageSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SelectedImage;
    
public:
    UItemViewerScrollSelectorEntry();

};

