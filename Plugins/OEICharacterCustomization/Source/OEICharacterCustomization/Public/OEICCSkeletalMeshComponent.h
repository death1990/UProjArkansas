#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIMultiSkeletalMesh -ObjectName=OEIMultiSkeletalMeshComponent -FallbackName=OEIMultiSkeletalMeshComponent
#include "OEIMultiSkeletalMeshComponent.h"

#include "OEICCSkeletalMeshComponent.generated.h"

class UBoneModifications;
class UBoneModificationsPreset;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OEICHARACTERCUSTOMIZATION_API UOEICCSkeletalMeshComponent : public UOEIMultiSkeletalMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBoneModificationsPreset* BoneModsPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UBoneModifications*, float> Modifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UBoneModifications*, float> CachedModifications;
    
    UOEICCSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

};

