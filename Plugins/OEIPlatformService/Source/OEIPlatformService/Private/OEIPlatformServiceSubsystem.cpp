#include "OEIPlatformServiceSubsystem.h"

UOEIPlatformServiceSubsystem::UOEIPlatformServiceSubsystem() {
}

EOEIPlatformServiceProvider UOEIPlatformServiceSubsystem::ResolveProvider(EOEIPlatformServiceProvider Provider) const {
    return EOEIPlatformServiceProvider::Invalid;
}

bool UOEIPlatformServiceSubsystem::RequestEntitlementQuery() {
    return false;
}

void UOEIPlatformServiceSubsystem::OnLocalPlayerAdded(ULocalPlayer* LocalPlayer) {
}

void UOEIPlatformServiceSubsystem::OnDefaultPlatformServiceAutoLoginComplete(bool bSuccess, FText Error, EOEIPlatformServiceProvider Provider, bool bAutoLoginOnly) {
}

bool UOEIPlatformServiceSubsystem::Logout(EOEIPlatformServiceProvider Provider) {
    return false;
}

bool UOEIPlatformServiceSubsystem::Login(FOEIPlatformServiceLoginParams Params) {
    return false;
}

bool UOEIPlatformServiceSubsystem::IsLoggedIn(EOEIPlatformServiceProvider Provider) {
    return false;
}

bool UOEIPlatformServiceSubsystem::IsExtraProviderEnabled(EOEIPlatformServiceProvider Provider) const {
    return false;
}

bool UOEIPlatformServiceSubsystem::IsDefaultProvider(EOEIPlatformServiceProvider Provider) const {
    return false;
}

FString UOEIPlatformServiceSubsystem::GetGamertag(EOEIPlatformServiceProvider Provider) const {
    return TEXT("");
}

bool UOEIPlatformServiceSubsystem::GetEntitlementAvailability(const FGameplayTag& EntitlementName) const {
    return false;
}


