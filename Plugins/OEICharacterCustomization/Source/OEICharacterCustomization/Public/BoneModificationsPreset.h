#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "BoneModificationsPreset.generated.h"

class UBoneModifications;

UCLASS(Blueprintable)
class OEICHARACTERCUSTOMIZATION_API UBoneModificationsPreset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UBoneModifications*, float> BoneSettings;
    
    UBoneModificationsPreset();

};

