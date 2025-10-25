#pragma once
#include "CoreMinimal.h"
#include "BaseMinimapEntryWidget.h"
#include "MinimapPOIWidget.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMinimapPOIWidget : public UBaseMinimapEntryWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* POITypeImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CyclesPerTick;
    
public:
    UMinimapPOIWidget();

};

