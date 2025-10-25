#include "OEIMultiPoseableMeshComponent.h"

UOEIMultiPoseableMeshComponent::UOEIMultiPoseableMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UOEIMultiPoseableMeshComponent::SetChildMaterialByName(int32 ChildIndex, const FName& MaterialSlotName, UMaterialInterface* Material) {
}

void UOEIMultiPoseableMeshComponent::SetChildMaterial(int32 ChildIndex, int32 ElementIndex, UMaterialInterface* Material) {
}

int32 UOEIMultiPoseableMeshComponent::GetNumChildOverrideMaterials(int32 ChildIndex) const {
    return 0;
}

int32 UOEIMultiPoseableMeshComponent::GetNumChildMaterials(int32 ChildIndex) const {
    return 0;
}

void UOEIMultiPoseableMeshComponent::GetChildMeshIndicies(TArray<int32>& OutChildMeshIndicies) const {
}

TArray<UMaterialInterface*> UOEIMultiPoseableMeshComponent::GetChildMaterials(int32 ChildIndex) const {
    return TArray<UMaterialInterface*>();
}

int32 UOEIMultiPoseableMeshComponent::GetChildMaterialIndex(int32 ChildIndex, const FName& MaterialSlotName) const {
    return 0;
}

UMaterialInterface* UOEIMultiPoseableMeshComponent::GetChildMaterial(int32 ChildIndex, int32 ElementIndex) const {
    return NULL;
}

void UOEIMultiPoseableMeshComponent::ForEachMesh(const FMultiMeshChildVisitor& Visitor) const {
}

void UOEIMultiPoseableMeshComponent::ForEachChildMesh(const FMultiMeshChildVisitor& Visitor) const {
}

UMaterialInstanceDynamic* UOEIMultiPoseableMeshComponent::CreateAndSetChildMaterialInstanceDynamic(int32 ChildIndex, int32 ElementIndex) {
    return NULL;
}


