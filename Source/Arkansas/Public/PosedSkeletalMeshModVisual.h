#pragma once
#include "CoreMinimal.h"
#include "MeshModVisual.h"
#include "PosedSkeletalMeshModVisual.generated.h"

class UAkAuxBus;
class USkeletalMesh;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UPosedSkeletalMeshModVisual : public UMeshModVisual {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreMismatchedSkeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAuxBus> AuxBus;
    
public:
    UPosedSkeletalMeshModVisual();

};

