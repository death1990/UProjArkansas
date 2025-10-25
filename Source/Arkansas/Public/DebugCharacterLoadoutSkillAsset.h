#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DCLSkillData.h"
#include "ESkill.h"
#include "DebugCharacterLoadoutSkillAsset.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UDebugCharacterLoadoutSkillAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDCLSkillData SkillData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESkill> TaggedSkills;
    
public:
    UDebugCharacterLoadoutSkillAsset();

};

