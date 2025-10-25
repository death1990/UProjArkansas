#pragma once
#include "CoreMinimal.h"
#include "BaseHUDWidget.h"
#include "ReticleIndicatorParentBaseWidget.generated.h"

class UOverlay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARKANSAS_API UReticleIndicatorParentBaseWidget : public UBaseHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* EntryOverlay;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NumEntries;
    
public:
    UReticleIndicatorParentBaseWidget();

};

