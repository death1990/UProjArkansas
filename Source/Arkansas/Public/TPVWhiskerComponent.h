#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EArmorSlot.h"
#include "EWhiskerState.h"
#include "ParkourMove.h"
#include "Whisker.h"
#include "WhiskerTraceResult.h"
#include "TPVWhiskerComponent.generated.h"

class AIndianaCharacter;
class AIndianaPlayerCharacter;
class UIdleCameraComponent;
class UItem;
class UTPVWhiskerSettingsData;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class ARKANSAS_API UTPVWhiskerComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIdleCameraComponent* IdleCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIndianaPlayerCharacter* OwningPlayer;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWhiskerTraceResult CachedTraceResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTPVWhiskerSettingsData* P1PWhiskerSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWhiskerState WhiskerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWhisker> Whiskers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTPVWhiskerSettingsData* WhiskerSettingsDataAsset;
    
public:
    UTPVWhiskerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Exec)
    void TPVCameraSaveWhiskerSettings();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetUseSecondaryShoulder(bool bUseSecondaryShoulder);
    
    UFUNCTION(BlueprintCallable)
    void OnStartParkour(const FParkourMove& ParkourMove);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerPerspectiveChanged(bool bIsThirdPerson);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerItemEquipped(UItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnEndParkour(const FParkourMove& ParkourMove);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateChanged(AIndianaCharacter* Character, bool bIsInCombat, bool bRestoring);
    
    UFUNCTION(BlueprintCallable)
    void OnArmorUnequipped(EArmorSlot ArmorSlot);
    
};

