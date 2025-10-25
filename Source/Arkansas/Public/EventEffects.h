#pragma once
#include "CoreMinimal.h"
#include "EventEffect.h"
#include "EventEffects.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UEventEffects : public UEventEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEventEffect*> Effects;
    
public:
    UEventEffects();

};

