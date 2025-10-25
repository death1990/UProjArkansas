#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "NavLinkExclusionVolume.generated.h"

UCLASS(Blueprintable, Config=Game)
class ARKANSAS_API ANavLinkExclusionVolume : public AVolume {
    GENERATED_BODY()
public:
    ANavLinkExclusionVolume(const FObjectInitializer& ObjectInitializer);

};

