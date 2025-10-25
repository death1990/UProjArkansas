#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_AbstractProp.h"
#include "AnimNotifyState_Prop.generated.h"

class UNewPropData;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_Prop : public UAnimNotifyState_AbstractProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNewPropData* PropDataToSpawn;
    
    UAnimNotifyState_Prop();

};

