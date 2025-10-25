#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "AnimNotifyState_SetInstantHitData.generated.h"

class UInstantHitData;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_SetInstantHitData : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UInstantHitData> InstantHitData;
    
public:
    UAnimNotifyState_SetInstantHitData();

};

