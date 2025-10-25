#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "TPVCrouchTunnelComponent.generated.h"

class AIndianaPlayerCharacter;
class UTPVCrouchTunnelData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARKANSAS_API UTPVCrouchTunnelComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIndianaPlayerCharacter* OwningPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTPVCrouchTunnelData* TraceSettings;
    
public:
    UTPVCrouchTunnelComponent(const FObjectInitializer& ObjectInitializer);

};

