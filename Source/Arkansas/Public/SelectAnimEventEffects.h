#pragma once
#include "CoreMinimal.h"
#include "EventEffect.h"
#include "SelectAnimEventEffects.generated.h"

class UBasePlayAnimEventEffect;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USelectAnimEventEffects : public UEventEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBasePlayAnimEventEffect*> Effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBasePlayAnimEventEffect* ActiveEffect;
    
public:
    USelectAnimEventEffects();

};

