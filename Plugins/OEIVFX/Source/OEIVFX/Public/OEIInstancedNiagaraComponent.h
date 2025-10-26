#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent
#include "NiagaraComponent.h"
#include <InstancedStruct.h>

//CROSS-MODULE INCLUDE V2: -ModuleName=StructUtils -ObjectName=InstancedStruct -FallbackName=InstancedStruct
#include "OEIInstancedNiagaraComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OEIVFX_API UOEIInstancedNiagaraComponent : public UNiagaraComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Locations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuat> Rotations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> Transforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct DefaultShapeLocationParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStruct> InstanceShapeLocationParamsOverrides;
    
public:
    UOEIInstancedNiagaraComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSystem(bool bForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraArrayVector(FName ParamName, const TArray<FVector>& Data);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraArrayQuat(FName ParamName, const TArray<FQuat>& Data);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraArrayPosition(FName ParamName, const TArray<FVector>& Data);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraArrayFloat(FName ParamName, const TArray<float>& Data);
    
    UFUNCTION(BlueprintCallable)
    void SetInstancesNum(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetInstanceScale(int32 Index, FVector Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetInstanceRotation(int32 Index, FQuat Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetInstanceLocation(int32 Index, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInstance(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllInstances();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 InstanceCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTransform> GetInstanceTransforms() const;
    
    UFUNCTION(BlueprintCallable)
    int32 AddInstance(const FTransform& Transform);
    
};

