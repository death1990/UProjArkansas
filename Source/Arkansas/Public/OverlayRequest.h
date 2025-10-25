#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OverlayRequest.generated.h"

class UMaterialInstanceDynamic;
class USpell;
class UStatusEffect;

USTRUCT(BlueprintType)
struct FOverlayRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* OverlayDynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USpell> ParentSpell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> StatusEffect;
    
    ARKANSAS_API FOverlayRequest();
};

