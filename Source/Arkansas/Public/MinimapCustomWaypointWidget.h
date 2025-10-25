#pragma once
#include "CoreMinimal.h"
#include "BaseMinimapEntryWidget.h"
#include "MinimapCustomWaypointWidget.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMinimapCustomWaypointWidget : public UBaseMinimapEntryWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CustomWaypointImage;
    
public:
    UMinimapCustomWaypointWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOnWaypointInitialized();
    
};

