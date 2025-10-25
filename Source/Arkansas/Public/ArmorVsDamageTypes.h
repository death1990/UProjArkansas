#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "DamageTypeScalar.h"
#include "ArmorVsDamageTypes.generated.h"

USTRUCT(BlueprintType)
struct FArmorVsDamageTypes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ArmorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDamageTypeScalar> DamageTypeScalars;
    
    ARKANSAS_API FArmorVsDamageTypes();
};

