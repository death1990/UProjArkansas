#pragma once
#include "CoreMinimal.h"
#include "AppearanceMatch.h"
#include "EyebrowAppearance.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FEyebrowAppearance : public FAppearanceMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    ARKANSAS_API FEyebrowAppearance();
};

