#pragma once
#include "CoreMinimal.h"
#include "WeaponMod.h"
#include "MeleeMod.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMeleeMod : public UWeaponMod {
    GENERATED_BODY()
public:
    UMeleeMod();

};

