#pragma once
#include "CoreMinimal.h"
#include "GenericListEntryWidget.h"
#include "Templates/SubclassOf.h"
#include "GenericPerkListEntryWidget.generated.h"

class UPerk;

UCLASS(Blueprintable, EditInlineNew)
class UGenericPerkListEntryWidget : public UGenericListEntryWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPerk> CachedPerk;
    
public:
    UGenericPerkListEntryWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOnPerkSet(TSubclassOf<UPerk> Perk);
    
};

