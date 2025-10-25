#pragma once
#include "CoreMinimal.h"
#include "CauseDamageInfo.h"
#include "EDamageFlags.h"
#include "FactionListener.h"
#include "OnCompanionKillListener.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UOnCompanionKillListener : public UFactionListener {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TArray<EDamageFlags> CheckDamageFlags;
    
public:
    UOnCompanionKillListener();

protected:
    UFUNCTION(BlueprintCallable)
    void OnKill(AActor* Killer, AActor* Victim, const FCauseDamageInfo& CauseDamageInfo);
    
};

