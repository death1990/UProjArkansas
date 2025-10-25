#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "SettingPlatformStringReplacementText.generated.h"

USTRUCT(BlueprintType)
struct FSettingPlatformStringReplacementText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Token;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString AlternateString;
    
    ARKANSAS_API FSettingPlatformStringReplacementText();
};

