#pragma once
#include "CoreMinimal.h"
#include "GenericListEntryWidget.h"
#include "Templates/SubclassOf.h"
#include "GenericTraitListEntryWidget.generated.h"

class UTrait;

UCLASS(Blueprintable, EditInlineNew)
class UGenericTraitListEntryWidget : public UGenericListEntryWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTrait> CachedTrait;
    
public:
    UGenericTraitListEntryWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOnTraitSet(TSubclassOf<UTrait> Trait);
    
};

