#pragma once
#include "CoreMinimal.h"
#include "ModVisual.h"
#include "MeshModVisual.generated.h"

class UMaterialInterface;
class UMeshComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class UMeshModVisual : public UModVisual {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UMaterialInterface>> MaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* AddedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeshChild;
    
public:
    UMeshModVisual();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeshComponent* GetAddedComponent() const;
    
};

