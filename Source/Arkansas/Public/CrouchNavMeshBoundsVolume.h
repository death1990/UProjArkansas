#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "CrouchNavMeshBoundsVolume.generated.h"

class UOwNavModifierComponent;

UCLASS(Blueprintable)
class ACrouchNavMeshBoundsVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOwNavModifierComponent* NavModifierComponent;
    
public:
    ACrouchNavMeshBoundsVolume(const FObjectInitializer& ObjectInitializer);

};

