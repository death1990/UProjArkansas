#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PlayerLadderAnimations.generated.h"

class UPlayerLadderAnimationSet;

UCLASS(Blueprintable)
class ARKANSAS_API UPlayerLadderAnimations : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerLadderAnimationSet* Set1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerLadderAnimationSet* Set3P;
    
    UPlayerLadderAnimations();

};

