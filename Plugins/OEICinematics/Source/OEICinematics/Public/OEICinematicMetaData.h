#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OEICinematicMetaData.generated.h"

UCLASS(Blueprintable)
class OEICINEMATICS_API UOEICinematicMetaData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimelineHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, bool> ProcessedForGesturesMap;
    
    UOEICinematicMetaData();

    UFUNCTION(BlueprintCallable)
    void SetTimelineHash(int32 TimelineHashIn);
    
};

