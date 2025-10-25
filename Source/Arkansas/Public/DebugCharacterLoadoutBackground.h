#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DCLBackgroundData.h"
#include "DebugCharacterLoadoutBackground.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UDebugCharacterLoadoutBackground : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDCLBackgroundData BackgroundData;
    
public:
    UDebugCharacterLoadoutBackground();

};

