#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "OEIGlobalVariableSettings.generated.h"

class UGlobalVariableBundle;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class OEIGLOBALVARIABLES_API UOEIGlobalVariableSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UGlobalVariableBundle>> GlobalVariableBundles;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath GlobalVariableManagerClassName;
    
public:
    UOEIGlobalVariableSettings();

};

