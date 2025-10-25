#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerCameraManager -FallbackName=PlayerCameraManager
#include "TrackedCameraModifier.h"
#include "OwPlayerCameraManager.generated.h"

class UOwCinematicCameraModifier;

UCLASS(Blueprintable, NonTransient)
class AOwPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOwCinematicCameraModifier* OwCinematicCameraModifier;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTrackedCameraModifier> TrackedCameraModifiers;
    
public:
    AOwPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

};

