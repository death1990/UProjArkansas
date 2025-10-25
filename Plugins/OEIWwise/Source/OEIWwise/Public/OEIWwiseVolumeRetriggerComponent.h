#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "VolumetricAudioEntry.h"
#include "OEIWwiseVolumeRetriggerComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOEIWwiseVolumeRetriggerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVolumetricAudioEntry> RetriggeringEmitterParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentActiveEmitterCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RetriggerRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTime;
    
    UOEIWwiseVolumeRetriggerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopEmitterIndex(const int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopAllRetriggeringEmitters();
    
    UFUNCTION(BlueprintCallable)
    void RefreshVolumeData();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayRandomEmitterEntry();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayIdleEmitters();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayEmitterIndex(const int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayAllRetriggeringEmitters();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnExitVolumeEndOverlap(AActor* Actor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnEnterVolumeBeginOverlap(AActor* Actor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    bool IsEmitterIndexActive(const int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    int32 GetRandomIdleEmitterIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    TArray<int32> GetIdleEmitterIndices() const;
    
};

