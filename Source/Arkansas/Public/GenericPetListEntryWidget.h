#pragma once
#include "CoreMinimal.h"
#include "GenericListEntryWidget.h"
#include "GenericPetListEntryWidget.generated.h"

class UPetData;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UGenericPetListEntryWidget : public UGenericListEntryWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* SelectedDisplay;
    
public:
    UGenericPetListEntryWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOnPetSet(const UPetData* PetData);
    
};

