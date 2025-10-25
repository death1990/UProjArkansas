#pragma once
#include "CoreMinimal.h"
#include "EChatterEventType.h"
#include "EventEffect.h"
#include "ChatterEventEffect.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UChatterEventEffect : public UEventEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChatterEventType ChatterEvent;
    
public:
    UChatterEventEffect();

};

