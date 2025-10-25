#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "LadderAnimationSet.h"
#include "LadderAnimations.generated.h"

UCLASS(Blueprintable)
class ULadderAnimations : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLadderAnimationSet ClimbUpAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLadderAnimationSet ClimbDownAnimations;
    
    ULadderAnimations();

};

