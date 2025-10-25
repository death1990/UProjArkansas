#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ColorGradingProfile.h"
#include "ColorGradingProfileData.generated.h"

UCLASS(Blueprintable)
class OEIPHOTOMODE_API UColorGradingProfileData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColorGradingProfile> Profiles;
    
    UColorGradingProfileData();

    UFUNCTION(BlueprintCallable)
    bool IsValidIndex(int32 Index);
    
};

