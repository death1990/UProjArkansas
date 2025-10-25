#include "OEIMultiSkeletalMeshComponent.h"

UOEIMultiSkeletalMeshComponent::UOEIMultiSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAddExpandedCapsuleBounds = false;
}

void UOEIMultiSkeletalMeshComponent::SetChildMaterialByName(int32 ChildIndex, const FName& MaterialSlotName, UMaterialInterface* Material) {
}

void UOEIMultiSkeletalMeshComponent::SetChildMaterial(int32 ChildIndex, int32 ElementIndex, UMaterialInterface* Material) {
}

int32 UOEIMultiSkeletalMeshComponent::GetNumChildOverrideMaterials(int32 ChildIndex) const {
    return 0;
}

int32 UOEIMultiSkeletalMeshComponent::GetNumChildMaterials(int32 ChildIndex) const {
    return 0;
}

void UOEIMultiSkeletalMeshComponent::GetChildMeshIndicies(TArray<int32>& OutChildMeshIndicies) const {
}

TArray<UMaterialInterface*> UOEIMultiSkeletalMeshComponent::GetChildMaterials(int32 ChildIndex) const {
    return TArray<UMaterialInterface*>();
}

int32 UOEIMultiSkeletalMeshComponent::GetChildMaterialIndex(int32 ChildIndex, const FName& MaterialSlotName) const {
    return 0;
}

UMaterialInterface* UOEIMultiSkeletalMeshComponent::GetChildMaterial(int32 ChildIndex, int32 ElementIndex) const {
    return NULL;
}

void UOEIMultiSkeletalMeshComponent::ForEachMesh(const FMultiMeshChildVisitor& Visitor) const {
}

void UOEIMultiSkeletalMeshComponent::ForEachChildMesh(const FMultiMeshChildVisitor& Visitor) const {
}

UMaterialInstanceDynamic* UOEIMultiSkeletalMeshComponent::CreateAndSetChildMaterialInstanceDynamic(int32 ChildIndex, int32 ElementIndex) {
    return NULL;
}


