#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=PrefabricatorRuntime -ObjectName=PrefabActor -FallbackName=PrefabActor
#include "EMarkType.h"
#include "StagePrefabActor.generated.h"

class AActor;
class AStageCameraActor;
class AStageMarkActor;
class UObsidianIDComponent;
class UPostProcessComponent;
class USphereComponent;

UCLASS(Blueprintable)
class OEICINEMATICS_API AStagePrefabActor : public AActor /*APrefabActor*/ {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* IDComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* PostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* MovingStageCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AStageMarkActor*> Marks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AStageCameraActor*> CameraHandlers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, EMarkType> MarkAssignments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> StageTransformOverrideActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StageTransformOverrideSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseStageTransformOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform StageTransformOffset;
    
public:
    AStagePrefabActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTransformOverrideSocket(FName TransformOverrideSocketIn);
    
    UFUNCTION(BlueprintCallable)
    void SetTransformOverrideActor(AActor* TransformOverrideActorIn);
    
    UFUNCTION(BlueprintCallable)
    void SetStageMarksHidden(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    void MoveActorToMark(EMarkType MarkType, AActor* Actor, FVector TranslationOffset);
    
    UFUNCTION(BlueprintCallable)
    FName GetTransformOverrideSocket();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetTransformOverrideActor();
    
    UFUNCTION(BlueprintCallable)
    TArray<AStageMarkActor*> GetMarks();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMarkType GetMarkAssignment(const AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AStageCameraActor*> GetCameras();
    
    UFUNCTION(BlueprintCallable)
    AStageCameraActor* GetCamera(const FString& CameraName);
    
    UFUNCTION(BlueprintCallable)
    AStageMarkActor* FindMarkActor(EMarkType MarkType);
    
    UFUNCTION(BlueprintCallable)
    void EnableStage(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void AttachToTransformOverride();
    
    UFUNCTION(BlueprintCallable)
    void AssignSpeakerToMark(AActor* Actor, EMarkType MarkType);
    
};

