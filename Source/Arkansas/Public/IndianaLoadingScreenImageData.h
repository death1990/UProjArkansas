#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ConditionalizedLoadingImageContainer.h"
#include "ConditionalizedLoadingTips.h"
#include "EEndGameImageType.h"
#include "ELoadingScreenRegion.h"
#include "LoadingImageContainer.h"
#include "LoadingScreenRegionMaps.h"
#include "TutorialTipData.h"
#include "WeightedImageData.h"
#include "IndianaLoadingScreenImageData.generated.h"

class UFont;
class UWorld;

UCLASS(Blueprintable)
class UIndianaLoadingScreenImageData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEndGameImageType, FLoadingImageContainer> EndGameLoadingImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UWorld>, FLoadingImageContainer> MapSpecificLoadingImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELoadingScreenRegion, FLoadingImageContainer> RegionSpecificLoadingImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConditionalizedLoadingImageContainer> StorySpecificLoadingImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedImageData> GenericLoadingScreenImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELoadingScreenRegion, FLoadingScreenRegionMaps> RegionMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTutorialTipData> LoadingTips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConditionalizedLoadingTips> ConditionalizedTips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* LoadingScreenFont;
    
public:
    UIndianaLoadingScreenImageData();

};

