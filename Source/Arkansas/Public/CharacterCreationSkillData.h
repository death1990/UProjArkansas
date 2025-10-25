#pragma once
#include "CoreMinimal.h"
#include "ESkillCategory.h"
#include "CharacterCreationSkillData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterCreationSkillData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESkillCategory> StartingSkillCategories;
    
public:
    ARKANSAS_API FCharacterCreationSkillData();
};

