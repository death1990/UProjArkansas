#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnResurrect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnResurrect : public UEventListener {
    GENERATED_BODY()
public:
    UOnResurrect();

};

