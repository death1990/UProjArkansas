#include "OWWorldScriptActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=ObsidianIDComponent -FallbackName=ObsidianIDComponent

AOWWorldScriptActor::AOWWorldScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
}


