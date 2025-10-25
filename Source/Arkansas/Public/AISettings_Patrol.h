#pragma once
#include "CoreMinimal.h"
#include "AISettings_Behavior.h"
#include "EPatrolType.h"
#include "AISettings_Patrol.generated.h"

class APatrolNode;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ARKANSAS_API UAISettings_Patrol : public UAISettings_Behavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APatrolNode* PatrolNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APatrolNode> PatrolNodePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPatrolType PatrolType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForceAllowedNavigationActionsMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForceDisallowedNavigationActionsMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NavigationFlags;
    
public:
    UAISettings_Patrol();

};

