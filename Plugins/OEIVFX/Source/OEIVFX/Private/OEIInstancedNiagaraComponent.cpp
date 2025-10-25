#include "OEIInstancedNiagaraComponent.h"

UOEIInstancedNiagaraComponent::UOEIInstancedNiagaraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UOEIInstancedNiagaraComponent::UpdateSystem(bool bForceUpdate) {
}

void UOEIInstancedNiagaraComponent::SetNiagaraArrayVector(FName ParamName, const TArray<FVector>& Data) {
}

void UOEIInstancedNiagaraComponent::SetNiagaraArrayQuat(FName ParamName, const TArray<FQuat>& Data) {
}

void UOEIInstancedNiagaraComponent::SetNiagaraArrayPosition(FName ParamName, const TArray<FVector>& Data) {
}

void UOEIInstancedNiagaraComponent::SetNiagaraArrayFloat(FName ParamName, const TArray<float>& Data) {
}

void UOEIInstancedNiagaraComponent::SetInstancesNum(int32 Num) {
}

void UOEIInstancedNiagaraComponent::SetInstanceScale(int32 Index, FVector Scale) {
}

void UOEIInstancedNiagaraComponent::SetInstanceRotation(int32 Index, FQuat Rotation) {
}

void UOEIInstancedNiagaraComponent::SetInstanceLocation(int32 Index, FVector Location) {
}

void UOEIInstancedNiagaraComponent::RemoveInstance(int32 Index) {
}

void UOEIInstancedNiagaraComponent::RemoveAllInstances() {
}

int32 UOEIInstancedNiagaraComponent::InstanceCount() {
    return 0;
}

TArray<FTransform> UOEIInstancedNiagaraComponent::GetInstanceTransforms() const {
    return TArray<FTransform>();
}

int32 UOEIInstancedNiagaraComponent::AddInstance(const FTransform& Transform) {
    return 0;
}


