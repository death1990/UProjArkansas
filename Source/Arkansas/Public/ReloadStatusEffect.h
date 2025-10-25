#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "ReloadStatusEffect.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UReloadStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefillPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ReloadIcon;
    
public:
    UReloadStatusEffect();

};

