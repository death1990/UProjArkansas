#pragma once
#include "CoreMinimal.h"
#include "ReticleIndicatorParentBaseWidget.h"
#include "Templates/SubclassOf.h"
#include "AwarenessIndicatorWidget.generated.h"

class UAwarenessIndicatorDataAsset;
class UAwarenessIndicatorEntryWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UAwarenessIndicatorWidget : public UReticleIndicatorParentBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAwarenessIndicatorEntryWidget> EntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAwarenessIndicatorDataAsset* AwarenessIndicatorData;
    
public:
    UAwarenessIndicatorWidget();

};

