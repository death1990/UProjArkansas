#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "Templates/SubclassOf.h"
#include "OnFlawAccepted.generated.h"

class UFlaw;

UCLASS(Blueprintable, EditInlineNew)
class UOnFlawAccepted : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumFlaws;
    
public:
    UOnFlawAccepted();

protected:
    UFUNCTION(BlueprintCallable)
    void OnFlawAccepted(TSubclassOf<UFlaw> Flaw, int32 Count) const;
    
};

