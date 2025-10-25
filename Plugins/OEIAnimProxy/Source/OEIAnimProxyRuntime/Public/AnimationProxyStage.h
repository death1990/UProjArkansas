#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AnimationDataStagInfo.h"
#include "AnimationProxyStage.generated.h"

class AAnimationProxyActor;

UCLASS(Blueprintable)
class OEIANIMPROXYRUNTIME_API AAnimationProxyStage : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimationDataStagInfo> StageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAnimationProxyActor*> AnimationProxyActors;
    
public:
    AAnimationProxyStage(const FObjectInitializer& ObjectInitializer);

};

