#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EOEIPlatformServiceProvider.h"
#include "OEIPlatformServiceLoginParams.h"
#include "OnEntitlementAvailabilityChangedDelegate.h"
#include "PlatformServiceLoginStatusChangedDelegateDelegate.h"
#include "OEIPlatformServiceSubsystem.generated.h"

class ULocalPlayer;

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class OEIPLATFORMSERVICE_API UOEIPlatformServiceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlatformServiceLoginStatusChangedDelegate OnLoginStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEntitlementAvailabilityChanged OnEntitlementAvailabilityChanged;
    
    UOEIPlatformServiceSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOEIPlatformServiceProvider ResolveProvider(EOEIPlatformServiceProvider Provider) const;
    
    UFUNCTION(BlueprintCallable)
    bool RequestEntitlementQuery();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLocalPlayerAdded(ULocalPlayer* LocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnDefaultPlatformServiceAutoLoginComplete(bool bSuccess, FText Error, EOEIPlatformServiceProvider Provider, bool bAutoLoginOnly);
    
public:
    UFUNCTION(BlueprintCallable)
    bool Logout(EOEIPlatformServiceProvider Provider);
    
    UFUNCTION(BlueprintCallable)
    bool Login(FOEIPlatformServiceLoginParams Params);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoggedIn(EOEIPlatformServiceProvider Provider);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExtraProviderEnabled(EOEIPlatformServiceProvider Provider) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefaultProvider(EOEIPlatformServiceProvider Provider) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetGamertag(EOEIPlatformServiceProvider Provider) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEntitlementAvailability(const FGameplayTag& EntitlementName) const;
    
};

