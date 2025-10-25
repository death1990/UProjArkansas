#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DCLGameStateData.h"
#include "DebugCharacterStateAsset.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UDebugCharacterStateAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDCLGameStateData GameStateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoCloseUIOnExecute;
    
public:
    UDebugCharacterStateAsset();

};

