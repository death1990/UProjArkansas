#pragma once
#include "CoreMinimal.h"
#include "InteractableMapEntry.h"
#include "CustomWaypointWidget.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCustomWaypointWidget : public UInteractableMapEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* WaypointIcon;
    
public:
    UCustomWaypointWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOnWaypointInitialized();
    
};

