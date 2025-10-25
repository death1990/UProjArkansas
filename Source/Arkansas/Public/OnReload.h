#pragma once
#include "CoreMinimal.h"
#include "EventListener.h"
#include "OnReload.generated.h"

class UWeapon;

UCLASS(Blueprintable, EditInlineNew)
class UOnReload : public UEventListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTacticalReload;
    
public:
    UOnReload();

protected:
    UFUNCTION(BlueprintCallable)
    void OnReload(UWeapon* Weapon);
    
};

