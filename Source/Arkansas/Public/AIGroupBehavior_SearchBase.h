#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AIGroupBehavior_BlueprintBase.h"
#include "Templates/SubclassOf.h"
#include "AIGroupBehavior_SearchBase.generated.h"

class AIndianaAiController;
class ASearchPoint;
class UFactionData;
class UObject;

UCLASS(Abstract, Blueprintable)
class ARKANSAS_API UAIGroupBehavior_SearchBase : public UAIGroupBehavior_BlueprintBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SearchObjectRestrictionClass;
    
public:
    UAIGroupBehavior_SearchBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetSearchBehaviorWantsToExit(bool bWantsToExit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsCandidateValidSearcher(AIndianaAiController* InController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool K2_HandlePendingSearchRequest(ASearchPoint* NewSearchPoint, FVector NewSearchLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_HandleActiveSearchRequestUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASearchPoint* K2_GetSearchPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* K2_GetSearchObject(UClass* ObjectClassType, bool& IsValid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector K2_GetSearchLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UFactionData> K2_GetSearchFaction() const;
    
};

