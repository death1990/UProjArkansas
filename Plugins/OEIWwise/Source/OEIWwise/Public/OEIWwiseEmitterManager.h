#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OEIWwiseEmitter.h"
#include "OEIWwiseEmitterManager.generated.h"

UCLASS(Blueprintable)
class OEIWWISE_API UOEIWwiseEmitterManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOEIWwiseEmitter> ManagedOneShotEmitters;
    
public:
    UOEIWwiseEmitterManager();

};

