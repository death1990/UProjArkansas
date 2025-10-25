#pragma once
#include "CoreMinimal.h"
#include "RandomPlayerSequenceEntryNamed.h"
#include "WeaponVisuals.h"
#include "PreviewWeaponAnimations.generated.h"

UCLASS(Abstract, Blueprintable)
class UPreviewWeaponAnimations : public UWeaponVisuals {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandomPlayerSequenceEntryNamed> Fidgets;
    
public:
    UPreviewWeaponAnimations();

};

