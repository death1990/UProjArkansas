#pragma once
#include "CoreMinimal.h"
#include "AppearanceMatch.h"
#include "NewHeadAppearance.generated.h"

class UMaterialInterface;
class UPoseAsset;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FNewHeadAppearance : public FAppearanceMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> HeadMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UMaterialInterface>> MaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPoseAsset> FacePoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HairMorphTarget;
    
    ARKANSAS_API FNewHeadAppearance();
};

