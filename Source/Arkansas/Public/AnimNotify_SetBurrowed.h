#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_SetBurrowed.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_SetBurrowed : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBurrowed;
    
    UAnimNotify_SetBurrowed();

};

