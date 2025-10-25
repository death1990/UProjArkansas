#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EAmmoReloadType.h"
#include "AnimNotify_ActionComplete.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ARKANSAS_API UAnimNotify_ActionComplete : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetAmmoReloadType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAmmoReloadType AmmoReloadType;
    
public:
    UAnimNotify_ActionComplete();

};

