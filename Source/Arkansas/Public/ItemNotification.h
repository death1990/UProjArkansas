#pragma once
#include "CoreMinimal.h"
#include "BaseNotificationObject.h"
#include "ItemNotification.generated.h"

class UItem;

UCLASS(Blueprintable)
class UItemNotification : public UBaseNotificationObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UItem* Item;
    
    UItemNotification();

};

