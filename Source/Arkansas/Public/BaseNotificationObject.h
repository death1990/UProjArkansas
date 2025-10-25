#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BaseNotificationObject.generated.h"

UCLASS(Blueprintable)
class UBaseNotificationObject : public UObject {
    GENERATED_BODY()
public:
    UBaseNotificationObject();

};

