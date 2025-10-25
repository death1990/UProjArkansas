#pragma once
#include "CoreMinimal.h"
#include "ConnectedWire.generated.h"

class AActor;
class AWire;

USTRUCT(BlueprintType)
struct FConnectedWire {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AWire> Wire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> ConnectedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWireEnabled;
    
    ARKANSAS_API FConnectedWire();
};

