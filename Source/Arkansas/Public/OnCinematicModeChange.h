#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnCinematicModeChange.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnCinematicModeChange : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnEnter;
    
public:
    UOnCinematicModeChange();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCinematicModeChange(bool bCinematicMode);
    
};

