#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PropAttachedStaticMesh.h"
#include "PropEntry.h"
#include "NewPropData.generated.h"

UCLASS(Blueprintable)
class UNewPropData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropEntry PropInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPropAttachedStaticMesh> AttachedStaticMeshes;
    
    UNewPropData();

};

