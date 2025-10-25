#pragma once
#include "CoreMinimal.h"
#include "ActorFogOfWarSettings.h"
#include "FogOfWarActorInformation.h"
#include "OwGameInstanceSubsystem.h"
#include "FogOfWarSubsystem.generated.h"

class AActor;
class AFogOfWarVolume;
class IMapFloorTrackedActor;
class UMapFloorTrackedActor;
class UFogOfWarDataBlob;
class UMapInformation;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class ARKANSAS_API UFogOfWarSubsystem : public UOwGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMapInformation* CurrentMapInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* FogOfWarAreaModifyMaterialInstance;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AActor>, FFogOfWarActorInformation> RevealActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UFogOfWarDataBlob*> FogOfWarDataBlobs;
    
public:
    UFogOfWarSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetAllActorsFogOfWarRevealEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetActorFogOfWarRevealEnabled(TScriptInterface<IMapFloorTrackedActor> Actor, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool RevealFogOfWarForFloor(FName floor);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool ResetFogOfWarForFloor(FName floor);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveActorForFogOfWarReveal(TScriptInterface<IMapFloorTrackedActor> Actor);
    
    UFUNCTION(BlueprintCallable)
    bool ModifyFogOfWarForVolume(bool bReveal, bool bUseSphereBounds, AFogOfWarVolume* Volume);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void DumpFogOfWarTextureData() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void AddActorForFogOfWarReveal(TScriptInterface<IMapFloorTrackedActor> Actor, const FActorFogOfWarSettings& ActorSettings, bool bStartEnabled);
    
};

