#pragma once
#include "CoreMinimal.h"
#include "EventEffect.h"
#include "WeaponActionEventEffect.generated.h"

class UCameraModifier_WeaponActionData;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UWeaponActionEventEffect : public UEventEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraModifier_WeaponActionData* WeaponActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancellable;
    
public:
    UWeaponActionEventEffect();

};

