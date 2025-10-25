#pragma once
#include "CoreMinimal.h"
#include "InteractableMapEntry.h"
#include "InteractableBeaconEntryWidget.generated.h"

class UQuestIconImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UInteractableBeaconEntryWidget : public UInteractableMapEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestIconImage* ObjectiveIcon;
    
public:
    UInteractableBeaconEntryWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOnQuestSelected(bool bIsSelected);
    
};

