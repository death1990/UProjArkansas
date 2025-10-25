#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "ListenerPositioningSubsystem.generated.h"

class APawn;
class APlayerController;
class UListenerPositioningSettings;

UCLASS(Blueprintable)
class OEIWWISE_API UListenerPositioningSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UListenerPositioningSettings* ListenerPositioningSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* PlayerPawn;
    
public:
    UListenerPositioningSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetListenerPositioningSettings(UListenerPositioningSettings* NewSettings);
    
};

