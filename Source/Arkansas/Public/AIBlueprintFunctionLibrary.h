#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AIGroupBehaviorAlgorithmSelector.h"
#include "AIGroupBehaviorBranchSelector.h"
#include "AIGroupBehaviorClassSelector.h"
#include "AIGroupBehaviorRoleSelector.h"
#include "DetectedTargetInfoReference.h"
#include "EAIGroupBehaviorCategory.h"
#include "ECrimeType.h"
#include "ELocationType.h"
#include "EStimulusType.h"
#include "ETargetInfoRelativeLocation.h"
#include "StimulusReference.h"
#include "Templates/SubclassOf.h"
#include "AIBlueprintFunctionLibrary.generated.h"

class AActor;
class AIndianaAiCharacter;
class AIndianaAiController;
class AIndianaCharacter;
class ANavigationData;
class ASearchPoint;
class IAIGroupBehaviorInstanceKit;
class UAIGroupBehaviorInstanceKit;
class UAIEQSParameter;
class UAISense;
class UFactionData;
class UObject;

UCLASS(Blueprintable)
class UAIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAIBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TestMetadataAtPointForController(AIndianaAiController* Controller, FVector Point, FVector Extent, int32 MetaDataAND, int32 MetaDataOR, int32 MetaDataNOT);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool TestMetadataAtPoint(UObject* WorldContextObject, FVector Point, FVector Extent, int32 MetaDataAND, int32 MetaDataOR, int32 MetaDataNOT, ANavigationData* NavData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_AIGroupBehaviorRoleSelector(FAIGroupBehaviorRoleSelector A, FAIGroupBehaviorRoleSelector B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_AIGroupBehaviorBranchSelector(FAIGroupBehaviorBranchSelector A, FAIGroupBehaviorBranchSelector B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_AIGroupBehaviorAlgorithmSelector(FAIGroupBehaviorAlgorithmSelector A, FAIGroupBehaviorAlgorithmSelector B);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool NavTraceNavData(UObject* WorldContextObject, FVector A, FVector B, FVector& HitLocation, ANavigationData* NavData);
    
    UFUNCTION(BlueprintCallable)
    static bool NavTraceController(AIndianaAiController* Controller, FVector A, FVector B, FVector& HitLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 MakeAINavigationFlags(int32 NavigationFlags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTargetInfoReferenceSeen(const FDetectedTargetInfoReference& Target, float RecentlySeenTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTargetInfoReferencePlayer(const FDetectedTargetInfoReference& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTargetInfoReferenceCurrentTarget(const FDetectedTargetInfoReference& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTargetInfoReferenceCompanion(const FDetectedTargetInfoReference& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStimulusReferenceMainSight(const FStimulusReference& Stimulus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStimulusReferenceInPeripheralSightVolume(const FStimulusReference& Stimulus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStimulusReferenceFromForceDetection(const FStimulusReference& Stimulus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStimulusReferenceDangerousSound(const FStimulusReference& Stimulus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStimulusReferenceContinuous(const FStimulusReference& Stimulus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSearchPointLogicTimePaused();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGroupBehaviorRunningByClass(FAIGroupBehaviorClassSelector InClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGroupBehaviorRunningByCategory(EAIGroupBehaviorCategory InCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGroupBehaviorCookingByClass(FAIGroupBehaviorClassSelector InClass, TScriptInterface<IAIGroupBehaviorInstanceKit> InOptKitObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGroupBehaviorCookingByCategory(EAIGroupBehaviorCategory InCategory, TScriptInterface<IAIGroupBehaviorInstanceKit> InOptKitObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsControllerRegisteredInSearchPoint(ASearchPoint* SearchPoint, AIndianaAiController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetTargetInfoSubLocation(const FDetectedTargetInfoReference& Target, bool& bOutValid, ETargetInfoRelativeLocation TargetLocation, ELocationType SubLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTargetInfoReferenceRecentDamage(const FDetectedTargetInfoReference& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTargetInfoReferenceDistanceSquared(const FDetectedTargetInfoReference& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTargetInfoReferenceDistance(const FDetectedTargetInfoReference& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AIndianaCharacter* GetTargetInfoReferenceCharacter(const FDetectedTargetInfoReference& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTargetInfoReferenceAge(const FDetectedTargetInfoReference& Target, bool& bIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetTargetInfoAimingPossible(const FDetectedTargetInfoReference& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EStimulusType GetStimulusReferenceType(const FStimulusReference& Stimulus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetStimulusReferenceTargetActor(const FStimulusReference& Stimulus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetStimulusReferenceTag(const FStimulusReference& Stimulus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStimulusReferenceStrength(const FStimulusReference& Stimulus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<UAISense> GetStimulusReferenceSense(const FStimulusReference& Stimulus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetStimulusReferenceLocation(const FStimulusReference& Stimulus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetSearchPointObject(ASearchPoint* SearchPoint, UClass* ObjectClassType, bool& IsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetSearchPointLocation(ASearchPoint* SearchPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<UFactionData> GetSearchPointFaction(ASearchPoint* SearchPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNonViolentCrimeChatterParamValue(ECrimeType CrimeType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ANavigationData* GetNavDataForController(AIndianaAiController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetEQSParameterValue(UObject* Object, TSubclassOf<UAIEQSParameter> Parameter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetConnectivityToPoint(AIndianaAiCharacter* Character, FVector Point, FVector Extent, bool bCheckNavLinks, bool bCheckElevators);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetConnectivityToActor(AIndianaAiCharacter* Character, AActor* OtherActor, FVector Extent, bool bCheckNavLinks, bool bCheckElevators);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetConnectivityBetweenPoints(UObject* WorldContextObject, FVector A, FVector B, ANavigationData* NavData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_AIGroupBehaviorRoleSelector(FAIGroupBehaviorRoleSelector A, FAIGroupBehaviorRoleSelector B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_AIGroupBehaviorBranchSelector(FAIGroupBehaviorBranchSelector A, FAIGroupBehaviorBranchSelector B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_AIGroupBehaviorAlgorithmSelector(FAIGroupBehaviorAlgorithmSelector A, FAIGroupBehaviorAlgorithmSelector B);
    
    UFUNCTION(BlueprintCallable)
    static bool CookGroupBehaviorsByClassSet(TSet<FAIGroupBehaviorClassSelector> InClassSet, TScriptInterface<IAIGroupBehaviorInstanceKit> InOptKitObject);
    
    UFUNCTION(BlueprintCallable)
    static bool CookGroupBehaviorsByClassArray(TArray<FAIGroupBehaviorClassSelector> InClassArray, TScriptInterface<IAIGroupBehaviorInstanceKit> InOptKitObject);
    
    UFUNCTION(BlueprintCallable)
    static bool CookGroupBehaviorsByCategory(EAIGroupBehaviorCategory InCategory, TScriptInterface<IAIGroupBehaviorInstanceKit> InOptKitObject);
    
    UFUNCTION(BlueprintCallable)
    static bool CookAllGroupBehaviorsInKit(TScriptInterface<IAIGroupBehaviorInstanceKit> InKitObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanBurrowAtLocation(UObject* WorldContextObject, FVector Location, float QueryVerticalOffsetOverride);
    
};

