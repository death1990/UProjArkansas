#pragma once
#include "CoreMinimal.h"
#include "AppliedAppearanceMod.h"
#include "EHeadStyle.h"
#include "HeadAppearanceMods.generated.h"

class UMaterialParamModVisual;
class UModVisual;
class UPosedSkeletalMeshModVisual;

USTRUCT(BlueprintType)
struct FHeadAppearanceMods : public FAppliedAppearanceMod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHeadStyle HeadStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HairMorphTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHelmetVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPosedSkeletalMeshModVisual* HairMeshMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPosedSkeletalMeshModVisual* BeardMeshMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPosedSkeletalMeshModVisual* EyebrowMeshMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMaterialParamModVisual* MaterialParamMods;
    
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModVisual* SourceAccessoryMod[8];
    
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModVisual* AccessoryMod[8];
    
    ARKANSAS_API FHeadAppearanceMods();
};

