#pragma once
#include "CoreMinimal.h"
#include "ModVisual.h"
#include "WeaponVisualStateModVisual.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UWeaponVisualStateModVisual : public UModVisual {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Event;
    
public:
    UWeaponVisualStateModVisual();

};

