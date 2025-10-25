#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BeginPlayCompletedDelegate.h"
#include "BroadcastEmitter.generated.h"

class UAkAuxBus;
class UAkComponent;
class UBroadcastStationAsset;
class UObsidianIDComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ARKANSAS_API ABroadcastEmitter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBeginPlayCompleted OnBeginPlayCompleted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* IDComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBroadcastStationAsset* StartingStation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBroadcastStationAsset* CurrentStation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAuxBus* AuxBusOverride;
    
public:
    ABroadcastEmitter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStation(UBroadcastStationAsset* Station);
    
    UFUNCTION(BlueprintCallable)
    UAkComponent* GetAkComponent();
    
    UFUNCTION(BlueprintCallable)
    void EnableEmitter(bool bIsEnabled);
    
};

