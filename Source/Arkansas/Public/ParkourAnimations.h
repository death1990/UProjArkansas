#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ParkourTypeAnimations.h"
#include "ParkourAnimations.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UParkourAnimations : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParkourTypeAnimations Animations;
    
public:
    UParkourAnimations();

};

