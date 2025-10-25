#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SimplygonMaterialCaster.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonMaterialCaster : public UObject {
    GENERATED_BODY()
public:
    USimplygonMaterialCaster();

};

