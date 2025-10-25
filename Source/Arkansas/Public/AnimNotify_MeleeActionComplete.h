#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EMeleeAction.h"
#include "AnimNotify_MeleeActionComplete.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ARKANSAS_API UAnimNotify_MeleeActionComplete : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EMeleeAction> ValidMeleeActions;
    
    UAnimNotify_MeleeActionComplete();

};

