#pragma once
#include "CoreMinimal.h"
#include "MeshModVisual.h"
#include "StaticMeshModVisual.generated.h"

class UStaticMesh;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UStaticMeshModVisual : public UMeshModVisual {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlipOnPlayerShoulderSwap;
    
public:
    UStaticMeshModVisual();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerShoulderSwap(const bool bUseAlternateShoulder);
    
};

