#pragma once
#include "CoreMinimal.h"
#include "PriorityCameraProfile.generated.h"

class UTPVCameraProfile;

USTRUCT(BlueprintType)
struct FPriorityCameraProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTPVCameraProfile* Profile;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Priority;
    
    ARKANSAS_API FPriorityCameraProfile();
};

