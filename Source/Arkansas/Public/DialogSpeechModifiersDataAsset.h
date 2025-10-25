#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "LogicalExpressionModifier.h"
#include "DialogSpeechModifiersDataAsset.generated.h"

class UDialogSpeechModifiersDataAsset;

UCLASS(Blueprintable)
class ARKANSAS_API UDialogSpeechModifiersDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLogicalExpressionModifier> LogicalExpressionModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDialogSpeechModifiersDataAsset*> DialogSpeechModifierDataAssets;
    
    UDialogSpeechModifiersDataAsset();

};

