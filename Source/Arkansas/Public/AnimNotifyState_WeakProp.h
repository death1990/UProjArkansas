#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_AbstractProp.h"
#include "AnimNotifyState_WeakProp.generated.h"

class UNewPropData;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_WeakProp : public UAnimNotifyState_AbstractProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNewPropData> WeakPropDataToSpawn;
    
    UAnimNotifyState_WeakProp();

};

