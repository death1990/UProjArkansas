#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "EAnimNotify.h"
#include "AnimNotify_ParamsEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_ParamsEvent : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimNotify Event;
    
public:
    UAnimNotify_ParamsEvent();

};

