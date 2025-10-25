#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "TextReplacementPair.h"
#include "TextReplacementTokens.h"
#include "RichTextBlockReplacements.generated.h"

UCLASS(Blueprintable)
class URichTextBlockReplacements : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTextReplacementPair> TokenSubsitutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTextReplacementTokens> ImageSubstitutes;
    
    URichTextBlockReplacements();

};

