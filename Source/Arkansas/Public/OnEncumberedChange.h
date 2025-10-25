#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnEncumberedChange.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOnEncumberedChange : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEncumbered;
    
public:
    UOnEncumberedChange();

protected:
    UFUNCTION(BlueprintCallable)
    void OnEncumberedChange(bool bInEncumbered);
    
};

