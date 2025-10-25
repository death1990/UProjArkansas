#pragma once
#include "CoreMinimal.h"
#include "InteractableMapEntry.h"
#include "MapPointOfInterestWidget.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMapPointOfInterestWidget : public UInteractableMapEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* IconImage;
    
public:
    UMapPointOfInterestWidget();

};

