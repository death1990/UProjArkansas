#pragma once
#include "CoreMinimal.h"
#include "EventEffect.h"
#include "Templates/SubclassOf.h"
#include "CameraModifierEventEffect.generated.h"

class UCameraModifier;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UCameraModifierEventEffect : public UEventEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraModifier> CameraModifierClass;
    
public:
    UCameraModifierEventEffect();

};

