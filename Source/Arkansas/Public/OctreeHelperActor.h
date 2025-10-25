#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OctreeHelperActor.generated.h"

class UOctreeRenderingComponent;

UCLASS(Blueprintable)
class AOctreeHelperActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOctreeRenderingComponent* RenderComp;
    
public:
    AOctreeHelperActor(const FObjectInitializer& ObjectInitializer);

};

