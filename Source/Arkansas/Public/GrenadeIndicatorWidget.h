#pragma once
#include "CoreMinimal.h"
#include "ReticleIndicatorParentBaseWidget.h"
#include "Templates/SubclassOf.h"
#include "GrenadeIndicatorWidget.generated.h"

class UGrenadeIndicatorEntryWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UGrenadeIndicatorWidget : public UReticleIndicatorParentBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGrenadeIndicatorEntryWidget> EntryClass;
    
public:
    UGrenadeIndicatorWidget();

};

