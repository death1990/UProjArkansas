#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "LogicalExpressionModifier.h"
#include "SkillModifierDataAsset.generated.h"

class USkillModifierDataAsset;

UCLASS(Blueprintable)
class ARKANSAS_API USkillModifierDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLogicalExpressionModifier> LogicalExpressionModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkillModifierDataAsset*> SkillModifierDataAssets;
    
    USkillModifierDataAsset();

};

