#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "OwSpeaker.h"
#include "OwMainMenuPawn.generated.h"

class UObsidianIDComponent;
class UOwPlayerSpeakerInfoComponent;

UCLASS(Blueprintable)
class ARKANSAS_API AOwMainMenuPawn : public APawn, public IOwSpeaker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOwPlayerSpeakerInfoComponent* SpeakerInfoComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* IDComponent;
    
public:
    AOwMainMenuPawn(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

