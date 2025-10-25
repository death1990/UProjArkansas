#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "SpawnActorAtTargetStatusEffect.generated.h"

class UWeaponActorSpawnData;

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API USpawnActorAtTargetStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponActorSpawnData* SpawnData;
    
public:
    USpawnActorAtTargetStatusEffect();

};

