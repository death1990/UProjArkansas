#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=OEIDataAssetInterface -FallbackName=OEIDataAssetInterface
#include "ConversationBundle.h"
#include "ConversationAsset.generated.h"

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UConversationAsset : public UDataAsset, public IOEIDataAssetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConversationBundle ConversationBundle;
    
public:
    UConversationAsset();


    // Fix for true pure virtual functions not being implemented
};

