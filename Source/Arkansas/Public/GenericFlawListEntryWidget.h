#pragma once
#include "CoreMinimal.h"
#include "GenericListEntryWidget.h"
#include "Templates/SubclassOf.h"
#include "GenericFlawListEntryWidget.generated.h"

class UFlaw;

UCLASS(Blueprintable, EditInlineNew)
class UGenericFlawListEntryWidget : public UGenericListEntryWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFlaw> CachedFlaw;
    
public:
    UGenericFlawListEntryWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOnFlawSet(TSubclassOf<UFlaw> Flaw);
    
};

