#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "ENotifyReloadType.h"
#include "Reload_AnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UReload_AnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENotifyReloadType NotifyReloadType;
    
    UReload_AnimNotify();

};

