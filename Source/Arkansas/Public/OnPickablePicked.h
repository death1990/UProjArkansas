#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "Templates/SubclassOf.h"
#include "OnPickablePicked.generated.h"

class APickable;

UCLASS(Blueprintable, EditInlineNew)
class UOnPickablePicked : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpecificPickable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APickable> PickableClass;
    
public:
    UOnPickablePicked();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPickablePicked(APickable* Pickable);
    
};

