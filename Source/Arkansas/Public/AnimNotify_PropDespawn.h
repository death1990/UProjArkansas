#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_PropDespawn.generated.h"

class UNewPropData;

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_PropDespawn : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNewPropData* PropDataToDespawn;
    
    UAnimNotify_PropDespawn();

};

