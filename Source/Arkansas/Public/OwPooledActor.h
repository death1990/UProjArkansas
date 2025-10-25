#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OwActorPoolInterface.h"
#include "OwPooledActor.generated.h"

class UOwActorPool;

UCLASS(Blueprintable)
class AOwPooledActor : public AActor, public IOwActorPoolInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOwActorPool* OwningPool;
    
public:
    AOwPooledActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

