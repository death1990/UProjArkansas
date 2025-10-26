#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=EGameplayContainerMatchType -FallbackName=EGameplayContainerMatchType
#include <GameplayTagContainer.h>
#include "AnimAppearanceCompatibility.generated.h"

USTRUCT(BlueprintType)
struct FAnimAppearanceCompatibility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameplayContainerMatchType AllowedAppearanceTagsMatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AllowedAppearanceTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameplayContainerMatchType DisallowedAppearanceTagsMatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DisallowedAppearanceTags;
    
    OEIANIMPROXYRUNTIME_API FAnimAppearanceCompatibility();
};

