#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "RestrictedAreaBufferVolume.generated.h"

class ARestrictedArea;

UCLASS(Blueprintable)
class ARKANSAS_API ARestrictedAreaBufferVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARestrictedArea* RestrictedArea;
    
public:
    ARestrictedAreaBufferVolume(const FObjectInitializer& ObjectInitializer);

};

