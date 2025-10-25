#pragma once
#include "CoreMinimal.h"
#include "ConversationFeatureTextures.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FConversationFeatureTextures {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* UnaquiredIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AquiredIcon;
    
    ARKANSAS_API FConversationFeatureTextures();
};

