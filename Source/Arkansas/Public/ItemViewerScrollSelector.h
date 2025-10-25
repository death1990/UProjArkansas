#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "Templates/SubclassOf.h"
#include "ItemViewerScrollSelector.generated.h"

class UItemViewerScrollSelectorEntry;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UItemViewerScrollSelector : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* PageButtonVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* ParentVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemViewerScrollSelectorEntry> PageSelectorClass;
    
public:
    UItemViewerScrollSelector();

};

