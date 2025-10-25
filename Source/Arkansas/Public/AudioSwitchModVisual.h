#pragma once
#include "CoreMinimal.h"
#include "ModVisual.h"
#include "AudioSwitchModVisual.generated.h"

class UAkSwitchValue;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAudioSwitchModVisual : public UModVisual {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* SwitchStateValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SwitchGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SwitchStateName;
    
public:
    UAudioSwitchModVisual();

};

