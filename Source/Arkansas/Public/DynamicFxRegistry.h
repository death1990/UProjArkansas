#pragma once
#include "CoreMinimal.h"
#include "DynamicFxRegistry.generated.h"

class UAkAuxBus;
class UAkComponent;

USTRUCT(BlueprintType)
struct FDynamicFxRegistry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* InputAkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAkComponent*> OutputAkComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAuxBus* DynamicFxAuxBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAuxBus* RouterAuxBus;
    
    ARKANSAS_API FDynamicFxRegistry();
};

