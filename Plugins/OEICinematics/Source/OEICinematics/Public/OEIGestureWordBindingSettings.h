#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OEIGestureWordBindingGroup.h"
#include "OEIGestureWordBindingSettings.generated.h"

UCLASS(Blueprintable)
class OEICINEMATICS_API UOEIGestureWordBindingSettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOEIGestureWordBindingGroup> BindingGroups;
    
public:
    UOEIGestureWordBindingSettings();

};

