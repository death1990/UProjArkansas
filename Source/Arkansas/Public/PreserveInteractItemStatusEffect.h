#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "PreserveInteractItemStatusEffect.generated.h"

class UItem;

UCLASS(Blueprintable, EditInlineNew)
class ARKANSAS_API UPreserveInteractItemStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItem> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
public:
    UPreserveInteractItemStatusEffect();

};

