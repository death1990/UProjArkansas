#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "SpawnStatusEffectSubObject.generated.h"

class UStatusEffectSubObject;

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API USpawnStatusEffectSubObject : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffectSubObject> SpawnObjectClass;
    
public:
    USpawnStatusEffectSubObject();

};

