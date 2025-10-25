#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DCLPerkData.h"
#include "DebugCharacterLoadoutPerkAsset.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UDebugCharacterLoadoutPerkAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDCLPerkData PerkData;
    
public:
    UDebugCharacterLoadoutPerkAsset();

};

