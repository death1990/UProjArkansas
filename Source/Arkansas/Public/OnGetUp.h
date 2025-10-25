#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnGetUp.generated.h"

class UTPVAnimInstance;

UCLASS(Blueprintable, EditInlineNew)
class UOnGetUp : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBegan;
    
public:
    UOnGetUp();

protected:
    UFUNCTION(BlueprintCallable)
    void OnGetUp(UTPVAnimInstance* AnimInstance, bool bInBegan);
    
};

