#pragma once
#include "CoreMinimal.h"
#include "ModVisual.h"
#include "CustomModVisual.generated.h"

class UMeshComponent;
class UObject;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class UCustomModVisual : public UModVisual {
    GENERATED_BODY()
public:
    UCustomModVisual();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveVisualsTrigger();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PermanentlyApplyVisualsTrigger(UObject* NewTargetObject, USkeletalMeshComponent* NewParentComponent, bool bShouldWeld, int32 ChildMeshIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void NewMeshAddedBP(USkeletalMeshComponent* TargetParentComponent, UMeshComponent* MeshComponent, int32 ChildMeshIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyVisualsTrigger(UObject* NewTargetObject, USkeletalMeshComponent* NewParentComponent, int32 ChildMeshIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyToNewMeshTrigger(UMeshComponent* NewMesh, int32 ChildMeshIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyToNewMeshPermanentlyTrigger(UMeshComponent* NewMesh, int32 ChildMeshIndex) const;
    
};

