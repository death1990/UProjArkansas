#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMaterial -FallbackName=StaticMaterial
#include "ComputerTerminal.h"
#include "BountyTerminal.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ARKANSAS_API ABountyTerminal : public AComputerTerminal {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MaterialChangingStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStaticMaterial> StaticMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StaticMaterialElementIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaticMaterialChangeTime;
    
public:
    ABountyTerminal(const FObjectInitializer& ObjectInitializer);

};

