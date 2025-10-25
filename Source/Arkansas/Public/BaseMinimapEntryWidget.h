#pragma once
#include "CoreMinimal.h"
#include "IndianaUserWidget.h"
#include "BaseMinimapEntryWidget.generated.h"

class UImage;
class UOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBaseMinimapEntryWidget : public UIndianaUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ContentOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* NPCHeightIndicator;
    
public:
    UBaseMinimapEntryWidget();

};

