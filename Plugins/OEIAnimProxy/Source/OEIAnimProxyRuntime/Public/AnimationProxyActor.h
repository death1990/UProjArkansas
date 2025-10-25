#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AnimationProxyResponderInterface.h"
#include "AnimationProxyActor.generated.h"

class UAnimationProxyComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class OEIANIMPROXYRUNTIME_API AAnimationProxyActor : public AActor, public IAnimationProxyResponderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnimationProxyComponent* AnimationProxyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> ComponentsInTheActorToNotIgnore;
    
public:
    AAnimationProxyActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

