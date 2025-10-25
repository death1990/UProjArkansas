#pragma once
#include "CoreMinimal.h"
#include "BunkerMechNavBlocker.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FBunkerMechNavBlocker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    ARKANSAS_API FBunkerMechNavBlocker();
};

