#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TutorialTipData.h"
#include "IndianaLoadingScreenManager.generated.h"

class URenderThreadLoadingScreenWidget;
class UTexture2D;

UCLASS(Blueprintable)
class UIndianaLoadingScreenManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> LoadingScreenImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTutorialTipData> LoadingScreenTips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URenderThreadLoadingScreenWidget* LoadingScreenWidgetRef;
    
public:
    UIndianaLoadingScreenManager();

    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowLoadingScreen(const FName& MapName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugMarkGenericLoadingScreensAsSeen();
    
};

