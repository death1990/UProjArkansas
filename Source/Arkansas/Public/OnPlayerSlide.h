#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnPlayerSlide.generated.h"

class UPlayerMovementComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOnPlayerSlide : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSlideStart;
    
public:
    UOnPlayerSlide();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSlide(UPlayerMovementComponent* PlayerMovementComponent);
    
};

