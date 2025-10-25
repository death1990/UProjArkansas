#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RadialExplosion.h"
#include "AsyncRadialExplosion.generated.h"

UCLASS(Blueprintable)
class UAsyncRadialExplosion : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadialExplosion ExplosionData;
    
    UAsyncRadialExplosion();

};

