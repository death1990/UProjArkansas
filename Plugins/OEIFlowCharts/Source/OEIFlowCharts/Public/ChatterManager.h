#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ChatterNavigator.h"
#include "ChatterManager.generated.h"

class UChatterAsset;
class UChatterBundleSet;

UCLASS(Blueprintable)
class OEIFLOWCHARTS_API UChatterManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UChatterBundleSet*> OverrideBundleSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UChatterAsset*> OverrideAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FChatterNavigator> ChatterNavigatorPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FChatterNavigator PeekNavigator;
    
public:
    UChatterManager();

};

