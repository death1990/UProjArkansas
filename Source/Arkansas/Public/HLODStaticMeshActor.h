#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshActor -FallbackName=StaticMeshActor
#include "HLODStaticMeshActor.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API AHLODStaticMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    AHLODStaticMeshActor(const FObjectInitializer& ObjectInitializer);

};

