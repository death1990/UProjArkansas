#pragma once
#include "CoreMinimal.h"
#include "EAttribute.h"
#include "ECharacterAttributeRange.h"
#include "CharacterCreationAttributeData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterCreationAttributeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAttribute, ECharacterAttributeRange> AttributeValues;
    
    ARKANSAS_API FCharacterCreationAttributeData();
};

