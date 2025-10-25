#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_MeleeAllowInput.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_MeleeAllowInput : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableInput;
    
    UAnimNotify_MeleeAllowInput();

};

