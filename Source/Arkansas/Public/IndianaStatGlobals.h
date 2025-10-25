#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ESkillDifficultyTier.h"
#include "SkillCheck.h"
#include "IndianaStatGlobals.generated.h"

UCLASS(Blueprintable)
class UIndianaStatGlobals : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESkillDifficultyTier, FSkillCheck> SkillChecksByTier;
    
public:
    UIndianaStatGlobals();

};

