#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnStatUpdated.generated.h"

class URpgStat;
class URpgStatComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOnStatUpdated : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URpgStat* ListenStat;
    
public:
    UOnStatUpdated();

protected:
    UFUNCTION(BlueprintCallable)
    void OnStatUpdated(URpgStatComponent* InStatComponent, const URpgStat* Stat);
    
};

