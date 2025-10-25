#pragma once
#include "CoreMinimal.h"
#include "MeshModVisual.h"
#include "SkeletalMeshModVisual.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USkeletalMeshModVisual : public UMeshModVisual {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocket;
    
public:
    USkeletalMeshModVisual();

};

