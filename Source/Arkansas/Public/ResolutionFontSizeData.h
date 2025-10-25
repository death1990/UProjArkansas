#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ResolutionFontSizeData.generated.h"

USTRUCT(BlueprintType)
struct FResolutionFontSizeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Resolution;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 FontSize;
    
    ARKANSAS_API FResolutionFontSizeData();
};

