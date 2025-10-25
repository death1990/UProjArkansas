#pragma once
#include "CoreMinimal.h"
#include "CauseDamageInfo.h"
#include "EDamageFlags.h"
#include "EventListener.h"
#include "OnKilled.generated.h"

class UHealthComponent;

UCLASS(Blueprintable, EditInlineNew)
class UOnKilled : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespectPreventRevival;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageFlags DamageFlags;
    
public:
    UOnKilled();

protected:
    UFUNCTION(BlueprintCallable)
    void OnKilled(UHealthComponent* HealthComponent, FCauseDamageInfo CDI);
    
};

