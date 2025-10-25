#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICinematics -ObjectName=OEICineShotPresentationMode -FallbackName=OEICineShotPresentationMode
#include "ComputerTerminalTransitionData.h"
#include "OwComputerTerminalPresentationMode.generated.h"

class UOEICineShotInterpolator;

UCLASS(Blueprintable)
class UOwComputerTerminalPresentationMode : public UOEICineShotPresentationMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComputerTerminalTransitionData DefaultTransitionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TerminalVerticalFieldOfView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FComputerTerminalTransitionData> PerAnimProxyTransitionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOEICineShotInterpolator* ShotInterpolator;
    
public:
    UOwComputerTerminalPresentationMode();

    UFUNCTION(BlueprintCallable)
    void OnAnimProxyStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnAnimProxyPreStart();
    
    UFUNCTION(BlueprintCallable)
    void OnAnimProxyEnded();
    
};

