#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "OEICrowdSubsystem.generated.h"

class AOEICrowdManager;
class UWorld;

UCLASS(Blueprintable)
class UOEICrowdSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UWorld*, AOEICrowdManager*> Managers;
    
    UOEICrowdSubsystem();

};

