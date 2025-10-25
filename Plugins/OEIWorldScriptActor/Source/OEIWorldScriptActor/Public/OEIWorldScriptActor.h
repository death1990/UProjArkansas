#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OEIWorldScriptActor.generated.h"

UCLASS(Abstract, Blueprintable, Config=Game)
class OEIWORLDSCRIPTACTOR_API AOEIWorldScriptActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInputEnabled: 1;
    
public:
    AOEIWorldScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
    
    UFUNCTION(BlueprintCallable)
    bool RemoteEvent(FName EventName, bool bAlsoBroadcastToLevelScripts);
    
};

