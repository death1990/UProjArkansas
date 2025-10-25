#pragma once
#include "CoreMinimal.h"
#include "CachedAppearanceComponentData.generated.h"

class UBodyAppearances;
class UBodyPartData;
class UBoneModifications;
class UBoneModificationsPreset;
class UHeadAppearances;
class UModAppearances;

USTRUCT(BlueprintType)
struct FCachedAppearanceComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHeadAppearances* Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBodyAppearances* Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModAppearances* AdditionalAppearanceMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBoneModificationsPreset* BoneModPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UBoneModifications*, float> BoneModifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBodyPartData* BodyPartData;
    
    ARKANSAS_API FCachedAppearanceComponentData();
};

