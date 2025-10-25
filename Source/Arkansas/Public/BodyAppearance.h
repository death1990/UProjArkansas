#pragma once
#include "CoreMinimal.h"
#include "AppearanceGoreCap.h"
#include "AppearanceMatch.h"
#include "BodyAppearance.generated.h"

class UFootstepData;
class UMaterialInterface;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FBodyAppearance : public FAppearanceMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> BodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UMaterialInterface>> MaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> BlendShapesToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAppearanceGoreCap> GoreCaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFootstepData> Footsteps;
    
    ARKANSAS_API FBodyAppearance();
};

