#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EDisablePriority.h"
#include "DisablePriorityMapElement.generated.h"

USTRUCT(BlueprintType)
struct FDisablePriorityMapElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DisableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDisablePriority Priority;
    
    ARKANSAS_API FDisablePriorityMapElement();
};

