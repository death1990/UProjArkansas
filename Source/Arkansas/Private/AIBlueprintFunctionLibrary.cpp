#include "AIBlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UAIBlueprintFunctionLibrary::UAIBlueprintFunctionLibrary() {
}

bool UAIBlueprintFunctionLibrary::TestMetadataAtPointForController(AIndianaAiController* Controller, FVector Point, FVector Extent, int32 MetaDataAND, int32 MetaDataOR, int32 MetaDataNOT) {
    return false;
}

bool UAIBlueprintFunctionLibrary::TestMetadataAtPoint(UObject* WorldContextObject, FVector Point, FVector Extent, int32 MetaDataAND, int32 MetaDataOR, int32 MetaDataNOT, ANavigationData* NavData) {
    return false;
}

bool UAIBlueprintFunctionLibrary::NotEqual_AIGroupBehaviorRoleSelector(FAIGroupBehaviorRoleSelector A, FAIGroupBehaviorRoleSelector B) {
    return false;
}

bool UAIBlueprintFunctionLibrary::NotEqual_AIGroupBehaviorBranchSelector(FAIGroupBehaviorBranchSelector A, FAIGroupBehaviorBranchSelector B) {
    return false;
}

bool UAIBlueprintFunctionLibrary::NotEqual_AIGroupBehaviorAlgorithmSelector(FAIGroupBehaviorAlgorithmSelector A, FAIGroupBehaviorAlgorithmSelector B) {
    return false;
}

bool UAIBlueprintFunctionLibrary::NavTraceNavData(UObject* WorldContextObject, FVector A, FVector B, FVector& HitLocation, ANavigationData* NavData) {
    return false;
}

bool UAIBlueprintFunctionLibrary::NavTraceController(AIndianaAiController* Controller, FVector A, FVector B, FVector& HitLocation) {
    return false;
}

int32 UAIBlueprintFunctionLibrary::MakeAINavigationFlags(int32 NavigationFlags) {
    return 0;
}

bool UAIBlueprintFunctionLibrary::IsTargetInfoReferenceSeen(const FDetectedTargetInfoReference& Target, float RecentlySeenTime) {
    return false;
}

bool UAIBlueprintFunctionLibrary::IsTargetInfoReferencePlayer(const FDetectedTargetInfoReference& Target) {
    return false;
}

bool UAIBlueprintFunctionLibrary::IsTargetInfoReferenceCurrentTarget(const FDetectedTargetInfoReference& Target) {
    return false;
}

bool UAIBlueprintFunctionLibrary::IsTargetInfoReferenceCompanion(const FDetectedTargetInfoReference& Target) {
    return false;
}

bool UAIBlueprintFunctionLibrary::IsStimulusReferenceMainSight(const FStimulusReference& Stimulus) {
    return false;
}

bool UAIBlueprintFunctionLibrary::IsStimulusReferenceInPeripheralSightVolume(const FStimulusReference& Stimulus) {
    return false;
}

bool UAIBlueprintFunctionLibrary::IsStimulusReferenceFromForceDetection(const FStimulusReference& Stimulus) {
    return false;
}

bool UAIBlueprintFunctionLibrary::IsStimulusReferenceDangerousSound(const FStimulusReference& Stimulus) {
    return false;
}

bool UAIBlueprintFunctionLibrary::IsStimulusReferenceContinuous(const FStimulusReference& Stimulus) {
    return false;
}

bool UAIBlueprintFunctionLibrary::IsSearchPointLogicTimePaused() {
    return false;
}

bool UAIBlueprintFunctionLibrary::IsGroupBehaviorRunningByClass(FAIGroupBehaviorClassSelector InClass) {
    return false;
}

bool UAIBlueprintFunctionLibrary::IsGroupBehaviorRunningByCategory(EAIGroupBehaviorCategory InCategory) {
    return false;
}

bool UAIBlueprintFunctionLibrary::IsGroupBehaviorCookingByClass(FAIGroupBehaviorClassSelector InClass, TScriptInterface<IAIGroupBehaviorInstanceKit> InOptKitObject) {
    return false;
}

bool UAIBlueprintFunctionLibrary::IsGroupBehaviorCookingByCategory(EAIGroupBehaviorCategory InCategory, TScriptInterface<IAIGroupBehaviorInstanceKit> InOptKitObject) {
    return false;
}

bool UAIBlueprintFunctionLibrary::IsControllerRegisteredInSearchPoint(ASearchPoint* SearchPoint, AIndianaAiController* Controller) {
    return false;
}

FVector UAIBlueprintFunctionLibrary::GetTargetInfoSubLocation(const FDetectedTargetInfoReference& Target, bool& bOutValid, ETargetInfoRelativeLocation TargetLocation, ELocationType SubLocation) {
    return FVector{};
}

float UAIBlueprintFunctionLibrary::GetTargetInfoReferenceRecentDamage(const FDetectedTargetInfoReference& Target) {
    return 0.0f;
}

float UAIBlueprintFunctionLibrary::GetTargetInfoReferenceDistanceSquared(const FDetectedTargetInfoReference& Target) {
    return 0.0f;
}

float UAIBlueprintFunctionLibrary::GetTargetInfoReferenceDistance(const FDetectedTargetInfoReference& Target) {
    return 0.0f;
}

AIndianaCharacter* UAIBlueprintFunctionLibrary::GetTargetInfoReferenceCharacter(const FDetectedTargetInfoReference& Target) {
    return NULL;
}

float UAIBlueprintFunctionLibrary::GetTargetInfoReferenceAge(const FDetectedTargetInfoReference& Target, bool& bIsValid) {
    return 0.0f;
}

bool UAIBlueprintFunctionLibrary::GetTargetInfoAimingPossible(const FDetectedTargetInfoReference& Target) {
    return false;
}

EStimulusType UAIBlueprintFunctionLibrary::GetStimulusReferenceType(const FStimulusReference& Stimulus) {
    return EStimulusType::None;
}

AActor* UAIBlueprintFunctionLibrary::GetStimulusReferenceTargetActor(const FStimulusReference& Stimulus) {
    return NULL;
}

FName UAIBlueprintFunctionLibrary::GetStimulusReferenceTag(const FStimulusReference& Stimulus) {
    return NAME_None;
}

float UAIBlueprintFunctionLibrary::GetStimulusReferenceStrength(const FStimulusReference& Stimulus) {
    return 0.0f;
}

TSubclassOf<UAISense> UAIBlueprintFunctionLibrary::GetStimulusReferenceSense(const FStimulusReference& Stimulus) {
    return NULL;
}

FVector UAIBlueprintFunctionLibrary::GetStimulusReferenceLocation(const FStimulusReference& Stimulus) {
    return FVector{};
}

UObject* UAIBlueprintFunctionLibrary::GetSearchPointObject(ASearchPoint* SearchPoint, UClass* ObjectClassType, bool& IsValid) {
    return NULL;
}

FVector UAIBlueprintFunctionLibrary::GetSearchPointLocation(ASearchPoint* SearchPoint) {
    return FVector{};
}

TSubclassOf<UFactionData> UAIBlueprintFunctionLibrary::GetSearchPointFaction(ASearchPoint* SearchPoint) {
    return NULL;
}

int32 UAIBlueprintFunctionLibrary::GetNonViolentCrimeChatterParamValue(ECrimeType CrimeType) {
    return 0;
}

ANavigationData* UAIBlueprintFunctionLibrary::GetNavDataForController(AIndianaAiController* Controller) {
    return NULL;
}

float UAIBlueprintFunctionLibrary::GetEQSParameterValue(UObject* Object, TSubclassOf<UAIEQSParameter> Parameter) {
    return 0.0f;
}

bool UAIBlueprintFunctionLibrary::GetConnectivityToPoint(AIndianaAiCharacter* Character, FVector Point, FVector Extent, bool bCheckNavLinks, bool bCheckElevators) {
    return false;
}

bool UAIBlueprintFunctionLibrary::GetConnectivityToActor(AIndianaAiCharacter* Character, AActor* OtherActor, FVector Extent, bool bCheckNavLinks, bool bCheckElevators) {
    return false;
}

bool UAIBlueprintFunctionLibrary::GetConnectivityBetweenPoints(UObject* WorldContextObject, FVector A, FVector B, ANavigationData* NavData) {
    return false;
}

bool UAIBlueprintFunctionLibrary::Equal_AIGroupBehaviorRoleSelector(FAIGroupBehaviorRoleSelector A, FAIGroupBehaviorRoleSelector B) {
    return false;
}

bool UAIBlueprintFunctionLibrary::Equal_AIGroupBehaviorBranchSelector(FAIGroupBehaviorBranchSelector A, FAIGroupBehaviorBranchSelector B) {
    return false;
}

bool UAIBlueprintFunctionLibrary::Equal_AIGroupBehaviorAlgorithmSelector(FAIGroupBehaviorAlgorithmSelector A, FAIGroupBehaviorAlgorithmSelector B) {
    return false;
}

bool UAIBlueprintFunctionLibrary::CookGroupBehaviorsByClassSet(TSet<FAIGroupBehaviorClassSelector> InClassSet, TScriptInterface<IAIGroupBehaviorInstanceKit> InOptKitObject) {
    return false;
}

bool UAIBlueprintFunctionLibrary::CookGroupBehaviorsByClassArray(TArray<FAIGroupBehaviorClassSelector> InClassArray, TScriptInterface<IAIGroupBehaviorInstanceKit> InOptKitObject) {
    return false;
}

bool UAIBlueprintFunctionLibrary::CookGroupBehaviorsByCategory(EAIGroupBehaviorCategory InCategory, TScriptInterface<IAIGroupBehaviorInstanceKit> InOptKitObject) {
    return false;
}

bool UAIBlueprintFunctionLibrary::CookAllGroupBehaviorsInKit(TScriptInterface<IAIGroupBehaviorInstanceKit> InKitObject) {
    return false;
}

bool UAIBlueprintFunctionLibrary::CanBurrowAtLocation(UObject* WorldContextObject, FVector Location, float QueryVerticalOffsetOverride) {
    return false;
}


