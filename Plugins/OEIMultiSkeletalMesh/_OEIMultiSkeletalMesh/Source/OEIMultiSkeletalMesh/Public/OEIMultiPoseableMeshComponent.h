#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseableMeshComponent -FallbackName=PoseableMeshComponent
#include "GTChildMeshData.h"
#include "MultiMeshChildVisitorDelegate.h"
#include "OEIMultiMeshInterface.h"
#include "OEIMultiPoseableMeshComponent.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OEIMULTISKELETALMESH_API UOEIMultiPoseableMeshComponent : public UPoseableMeshComponent, public IOEIMultiMeshInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGTChildMeshData> ChildrenMeshes;
    
public:
    UOEIMultiPoseableMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetChildMaterialByName(int32 ChildIndex, const FName& MaterialSlotName, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetChildMaterial(int32 ChildIndex, int32 ElementIndex, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumChildOverrideMaterials(int32 ChildIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumChildMaterials(int32 ChildIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetChildMeshIndicies(TArray<int32>& OutChildMeshIndicies) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMaterialInterface*> GetChildMaterials(int32 ChildIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChildMaterialIndex(int32 ChildIndex, const FName& MaterialSlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetChildMaterial(int32 ChildIndex, int32 ElementIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ForEachMesh(const FMultiMeshChildVisitor& Visitor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ForEachChildMesh(const FMultiMeshChildVisitor& Visitor) const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* CreateAndSetChildMaterialInstanceDynamic(int32 ChildIndex, int32 ElementIndex);
    

    // Fix for true pure virtual functions not being implemented
};

