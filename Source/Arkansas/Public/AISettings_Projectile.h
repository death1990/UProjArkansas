#pragma once
#include "CoreMinimal.h"
#include "AISettings_ProjectileNode.h"
#include "AISettings_Projectile.generated.h"

USTRUCT(BlueprintType)
struct FAISettings_Projectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAISettings_ProjectileNode> Nodes;
    
    ARKANSAS_API FAISettings_Projectile();
};

