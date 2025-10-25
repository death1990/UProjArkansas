#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "IndianaTextBlockStyle.h"
#include "TitleCardFontStylesDataAsset.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UTitleCardFontStylesDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndianaTextBlockStyle PrimaryStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndianaTextBlockStyle SecondaryStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndianaTextBlockStyle TertiaryStyle;
    
    UTitleCardFontStylesDataAsset();

};

