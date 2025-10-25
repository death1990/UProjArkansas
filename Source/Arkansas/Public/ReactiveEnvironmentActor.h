#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ReactiveEnvironmentActor.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AReactiveEnvironmentActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerProximityDistanceThreshold;
    
public:
    AReactiveEnvironmentActor(const FObjectInitializer& ObjectInitializer);

};

