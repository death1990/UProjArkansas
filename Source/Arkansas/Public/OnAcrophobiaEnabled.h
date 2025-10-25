#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnAcrophobiaEnabled.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnAcrophobiaEnabled : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
public:
    UOnAcrophobiaEnabled();

protected:
    UFUNCTION(BlueprintCallable)
    void OnAcrophobiaChanged(bool bNowEnabled);
    
};

