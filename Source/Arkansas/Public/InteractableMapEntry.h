#pragma once
#include "CoreMinimal.h"
#include "BaseMapEntryWidget.h"
#include "InteractableMapEntry.generated.h"

class UButtonBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UInteractableMapEntry : public UBaseMapEntryWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButtonBase* Button;
    
public:
    UInteractableMapEntry();

};

