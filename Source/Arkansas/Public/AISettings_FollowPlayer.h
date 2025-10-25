#pragma once
#include "CoreMinimal.h"
#include "AISettings_Behavior.h"
#include "AISettings_FollowPlayer.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAISettings_FollowPlayer : public UAISettings_Behavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCrouch;
    
public:
    UAISettings_FollowPlayer();

};

