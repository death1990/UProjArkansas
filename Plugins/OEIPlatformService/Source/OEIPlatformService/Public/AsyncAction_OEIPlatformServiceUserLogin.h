#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CancellableAsyncAction -FallbackName=CancellableAsyncAction
#include "EOEIPlatformServiceProvider.h"
#include "OEIPlatformServiceOnLoginCompleteMulticastDelegate.h"
#include "AsyncAction_OEIPlatformServiceUserLogin.generated.h"

class UAsyncAction_OEIPlatformServiceUserLogin;
class UOEIPlatformServiceSubsystem;

UCLASS(Blueprintable)
class OEIPLATFORMSERVICE_API UAsyncAction_OEIPlatformServiceUserLogin : public UCancellableAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOEIPlatformServiceOnLoginCompleteMulticast OnLoginComplete;
    
    UAsyncAction_OEIPlatformServiceUserLogin();

    UFUNCTION(BlueprintCallable)
    void HandleLoginComplete(bool bSuccess, FText Error, EOEIPlatformServiceProvider Provider);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncAction_OEIPlatformServiceUserLogin* AsyncLogin(UOEIPlatformServiceSubsystem* Target, EOEIPlatformServiceProvider Provider, bool bAutoLoginOnly);
    
};

