#include "AIGroupBehaviorVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=ObsidianIDComponent -FallbackName=ObsidianIDComponent
#include "AIGroupBehaviorInstanceKitComponent.h"

AAIGroupBehaviorVolume::AAIGroupBehaviorVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AIGroupBehaviorInstanceKitComponent = CreateDefaultSubobject<UAIGroupBehaviorInstanceKitComponent>(TEXT("AIGroupBehaviorKit"));
    this->ObsidianID = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianID"));
    this->bAlwaysIncludeCompanions = true;
    this->bAutoCookOnPlayerOverlap = false;
}


