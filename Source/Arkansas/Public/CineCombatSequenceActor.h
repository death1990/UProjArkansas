#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=LevelSequenceActor -FallbackName=LevelSequenceActor
#include "CineCombatSequenceActor.generated.h"

class UCineCombatCameraParams;

UCLASS(Blueprintable)
class ACineCombatSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCineCombatCameraParams* CameraParams;
    
public:
    ACineCombatSequenceActor(const FObjectInitializer& ObjectInitializer);

};

