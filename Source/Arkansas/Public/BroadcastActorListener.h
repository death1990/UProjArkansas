#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BroadcastActorListener.generated.h"

class UAkComponent;

UCLASS(Blueprintable)
class ARKANSAS_API ABroadcastActorListener : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
public:
    ABroadcastActorListener(const FObjectInitializer& ObjectInitializer);

};

