#include "IndianaGameplayStatics.h"
#include "Templates/SubclassOf.h"

UIndianaGameplayStatics::UIndianaGameplayStatics() {
}

UMaterialInstanceDynamic* UIndianaGameplayStatics::VFXMID(USceneComponent* SceneComponent, TArray<FScalarParameterValue> ScalarParamValues, TArray<FVectorParameterValue> VectorParamValues, int32 MatIndex) {
    return NULL;
}

void UIndianaGameplayStatics::UpdateAndFlushStreaming(const UObject* WorldContextObject) {
}

float UIndianaGameplayStatics::UndilateTime(UObject* ContextObject, float DilatedTime) {
    return 0.0f;
}

void UIndianaGameplayStatics::TeleportPlayerToStart(AIndianaPlayerStart* PlayerStart) {
}

bool UIndianaGameplayStatics::SuicideActor(AActor* Actor) {
    return false;
}

UParticleSystemComponent* UIndianaGameplayStatics::SpawnPooledEmitterAttached(UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType) {
    return NULL;
}

UParticleSystemComponent* UIndianaGameplayStatics::SpawnPooledEmitterAtLocation(UParticleSystem* EmitterTemplate, FVector Location, FRotator Rotation, FVector Scale) {
    return NULL;
}

void UIndianaGameplayStatics::SetParticleSystemEmittersEnabled(UFXSystemComponent* ParticleSystem, const TArray<FName>& EnabledEmitters, bool bEnabled) {
}

void UIndianaGameplayStatics::SetMoveIgnoreComponentCollision(AActor* Actor, UPrimitiveComponent* ComponentToIgnore, bool bIgnore) {
}

void UIndianaGameplayStatics::SetMoveIgnoreActorCollision(AActor* ActorA, AActor* ActorB, bool bIgnore) {
}

void UIndianaGameplayStatics::SetIndianaActorPseudoGod(AActor* Actor, bool bPseudoGodMode) {
}

void UIndianaGameplayStatics::SetIndianaActorInteractable(AActor* Actor, bool bInteractable) {
}

void UIndianaGameplayStatics::SetIndianaActorGod(AActor* Actor, bool bGodMode) {
}

void UIndianaGameplayStatics::SetFPVCameraFOV(bool bOverrideCustomFOV) {
}

void UIndianaGameplayStatics::SetEnableWorldRendering(const UObject* WorldContextObject, bool bEnable, bool bUpdateRenderTimeWhileDisabled) {
}

void UIndianaGameplayStatics::SetDataLayerStreamingCritical(const UObject* WorldContextObject, const UDataLayerAsset* InDataLayerAsset) {
}

void UIndianaGameplayStatics::SetDataLayerNonStreamingCritical(const UObject* WorldContextObject, const UDataLayerAsset* InDataLayerAsset) {
}

void UIndianaGameplayStatics::SetDataLayerInstanceStreamingCritical(const UObject* WorldContextObject, const UDataLayerInstance* InDataLayerInstance) {
}

void UIndianaGameplayStatics::SetDataLayerInstanceNonStreamingCritical(const UObject* WorldContextObject, const UDataLayerInstance* InDataLayerInstance) {
}

void UIndianaGameplayStatics::SetAnimTickOptionOnActorMeshes(AActor* Actor, EVisibilityBasedAnimTickOption TickOption) {
}

void UIndianaGameplayStatics::RequestVirtualTexturePreload(const UObject* WorldContextObject, const UMaterialInterface* Material, const FVector2D& InScreenSpaceSize) {
}

void UIndianaGameplayStatics::PrefetchNaniteResource(const UObject* WorldContextObject, const UStaticMesh* StaticMesh, const int32 FramesUntilUse) {
}

void UIndianaGameplayStatics::K2_ApplyDamage(AActor* DamageCauser, AActor* DamagedActor, FDamageDescription DamageDescription) {
}

bool UIndianaGameplayStatics::IsWorldPointInView(const FVector& WorldPoint) {
    return false;
}

bool UIndianaGameplayStatics::IsWeaponSpinningUp(UWeapon* Weapon) {
    return false;
}

bool UIndianaGameplayStatics::IsWeaponSpinningDown(UWeapon* Weapon) {
    return false;
}

bool UIndianaGameplayStatics::IsRunningAutomationTest(EBoolResult& Result) {
    return false;
}

bool UIndianaGameplayStatics::IsQuestActive(FGuid QuestID, EBoolResult& Result) {
    return false;
}

bool UIndianaGameplayStatics::IsPlayerTrespassingInRestrictedArea_BP(const AOwBaseCharacter* FilterCharacter) {
    return false;
}

bool UIndianaGameplayStatics::IsPlayerInRestrictedAreaBufferVolume(const AIndianaAiCharacter* FilterCharacter, ARestrictedArea*& OutOwningRestrictedArea) {
    return false;
}

bool UIndianaGameplayStatics::IsItemStackOfClass(const FItemStack& ItemStack, TSubclassOf<UItem> ItemType, EBoolResult& OutResult) {
    return false;
}

bool UIndianaGameplayStatics::IsItemOfClass(const UItem* Item, TSubclassOf<UItem> ItemType, EBoolResult& OutResult) {
    return false;
}

bool UIndianaGameplayStatics::IsCurrentWeaponAmmoPoolEmpty(UWeapon* Weapon) {
    return false;
}

bool UIndianaGameplayStatics::IsConversationActive(const FConversationReference& ConversationReference) {
    return false;
}

bool UIndianaGameplayStatics::IsCombatAlertState(EAlertState AlertState) {
    return false;
}

bool UIndianaGameplayStatics::IsCharacterInAnyBarkConversation(AIndianaCharacter* Character, EBoolResult& OutResult) {
    return false;
}

bool UIndianaGameplayStatics::IsCharacterDead(const AIndianaCharacter* Character) {
    return false;
}

bool UIndianaGameplayStatics::IsBarkConversationActive() {
    return false;
}

bool UIndianaGameplayStatics::IsActionEnabled(AActor* Actor, ETogglableAction Action) {
    return false;
}

void UIndianaGameplayStatics::InheritMeshProperties(const UMeshComponent* ParentMesh, UMeshComponent* ChildMesh) {
}

void UIndianaGameplayStatics::IndianaCancelAsyncLoadAsset(int32 Handle) {
}

void UIndianaGameplayStatics::IndianaAsyncLoadAssets(TArray<TSoftObjectPtr<UObject>> Assets, int32 Priority, const FBlueprintAssetsLoadedComplete& Callback, int32& HandleOut) {
}

void UIndianaGameplayStatics::IndianaAsyncLoadAsset(TSoftObjectPtr<UObject> Asset, int32 Priority, const FBlueprintAssetLoadComplete& Callback, int32& HandleOut) {
}

float UIndianaGameplayStatics::GetWeaponSpinUpDuration(UWeapon* Weapon) {
    return 0.0f;
}

float UIndianaGameplayStatics::GetWeaponSpinDownDuration(UWeapon* Weapon) {
    return 0.0f;
}

USkeletalMeshComponent* UIndianaGameplayStatics::GetWeaponMeshComponent(const UWeapon* Weapon, EMeshPerspective Perspective) {
    return NULL;
}

float UIndianaGameplayStatics::GetWeaponCurrentSpinUpProgress(UWeapon* Weapon) {
    return 0.0f;
}

float UIndianaGameplayStatics::GetWeaponCurrentSpinDownProgress(UWeapon* Weapon) {
    return 0.0f;
}

float UIndianaGameplayStatics::GetWeaponCurrentRampTimer(UWeapon* Weapon) {
    return 0.0f;
}

float UIndianaGameplayStatics::GetWeaponCurrentRampSpeed(UWeapon* Weapon) {
    return 0.0f;
}

float UIndianaGameplayStatics::GetWeaponCurrentCharge(UWeapon* Weapon) {
    return 0.0f;
}

float UIndianaGameplayStatics::GetWeaponCurrentAnimCharge(UWeapon* Weapon) {
    return 0.0f;
}

float UIndianaGameplayStatics::GetWeaponCurrentAimProgress(UWeapon* Weapon) {
    return 0.0f;
}

float UIndianaGameplayStatics::GetWeaponBeamLockProgress(UWeapon* Weapon) {
    return 0.0f;
}

USkeletalMeshComponent* UIndianaGameplayStatics::GetSkeletalMeshComponent(const AActor* TargetActor, EMeshTarget MeshType, EMeshPerspective Perspective) {
    return NULL;
}

UMeshComponent* UIndianaGameplayStatics::GetMeshComponent(const AActor* TargetActor, EMeshTarget MeshType, EMeshPerspective Perspective) {
    return NULL;
}

TArray<UBodyIdleAsset*> UIndianaGameplayStatics::GetGestureLibraryIdles() {
    return TArray<UBodyIdleAsset*>();
}

TArray<UBodyIdleAsset*> UIndianaGameplayStatics::GetGestureLibraryGesturesForIdle(UBodyIdleAsset* IdleSequence) {
    return TArray<UBodyIdleAsset*>();
}

UGameCalendar* UIndianaGameplayStatics::GetGameCalendar() {
    return NULL;
}

TEnumAsByte<EPhysicalSurface> UIndianaGameplayStatics::GetEventEffectPhysicalSurface(const FEventEffectParams& Params) {
    return SurfaceType_Default;
}

float UIndianaGameplayStatics::GetEventEffectParam(const FEventEffectParams& Params, EEventEffectFloatParams Param) {
    return 0.0f;
}

TArray<FName> UIndianaGameplayStatics::GetEventEffectEnabledEmitters(const FEventEffectParams& Params) {
    return TArray<FName>();
}

bool UIndianaGameplayStatics::GetEntitlementAvailability(const UObject* WorldContextObject, const FGameplayTag& Entitlement) {
    return false;
}

float UIndianaGameplayStatics::GetBlendSpaceLength(const UBlendSpace* BlendSpace) {
    return 0.0f;
}

TArray<FGameplayTag> UIndianaGameplayStatics::GetAllAvailableEntitlements(const UObject* WorldContextObject) {
    return TArray<FGameplayTag>();
}

void UIndianaGameplayStatics::GetAllAppearanceRelatedMeshes(AActor* Actor, TArray<UMeshComponent*>& Meshes, bool bIncludeWeapon) {
}

void UIndianaGameplayStatics::GetAllAppearanceAndWeaponMeshes(AActor* Actor, TArray<UMeshComponent*>& ApperanceMeshes, TArray<UMeshComponent*>& WeaponMeshes) {
}

AActor* UIndianaGameplayStatics::GetActorBySpeakerName(ECheckBranches& Branches, FGuid SpeakerReference) {
    return NULL;
}

USceneComponent* UIndianaGameplayStatics::FindFirstChildComponentByTag(ECheckBranches& Branches, USceneComponent* ParentComponent, FName Tag) {
    return NULL;
}

bool UIndianaGameplayStatics::FindChildComponentsByTag(USceneComponent* ParentComponent, FName Tag, TArray<USceneComponent*>& ChildComponents) {
    return false;
}

bool UIndianaGameplayStatics::ExecuteRemoteEvent(const UObject* WorldContextObject, FName EventName) {
    return false;
}

void UIndianaGameplayStatics::EnableParticleSystemEmitters(UFXSystemComponent* ParticleSystem, const TArray<FName>& EnabledEmitters) {
}

float UIndianaGameplayStatics::DilateTime(UObject* ContextObject, float UndilatedTime) {
    return 0.0f;
}

UDialogBoxWidget* UIndianaGameplayStatics::CreateEndGameDialogWidget(const FLocString& BodyLocString) {
    return NULL;
}

UDialogBoxWidget* UIndianaGameplayStatics::CreateDialogWidget(const FLocString& BodyLocString, bool bCancellable) {
    return NULL;
}

float UIndianaGameplayStatics::ConvertFOV(float FOVIn, bool bConvertToVertical) {
    return 0.0f;
}

UActorComponent* UIndianaGameplayStatics::ConstructComponentByClass(ECheckBranches& Branches, UObject* InOuter, UClass* InClass) {
    return NULL;
}

void UIndianaGameplayStatics::ClearPlayerCombat() {
}

void UIndianaGameplayStatics::ClearAllTargetsAndAwareness(AIndianaAiCharacter* InAICharacter) {
}

void UIndianaGameplayStatics::ClearAllMoveIgnoreActorsFor(AActor* Actor) {
}

bool UIndianaGameplayStatics::ClassIsChildOfWeakRef(UClass* TestClass, TSoftClassPtr<UObject> ParentClass) {
    return false;
}

bool UIndianaGameplayStatics::BP_ApplyDamage(AActor* DamageCauser, const FDamageDescription& DamageDescription, const FIndianaDamageEvent& IndianaDamageEvent, FIndianaDamageTarget DamageTarget, AActor* Instigator, bool bTriggerImpacts) {
    return false;
}

void UIndianaGameplayStatics::BlueprintLog(const FString& Category, EBlueprintLogVerbosity Verbosity, const FString& Message) {
}

void UIndianaGameplayStatics::ApplyGenericDamage(AActor* DamageCauser, AActor* DamagedActor, float BaseDamage, TSubclassOf<UDamageType> DamageType, bool bUseCustomDamageDescription, FDamageDescription CustomDamageDescription) {
}

void UIndianaGameplayStatics::ApplyCameraPostProcessing(UCameraPostProcessingAsset* PostProcessingAsset, FVector SourcePosition) {
}

void UIndianaGameplayStatics::ApplyCACVisibilityToActorCollision(UChildActorComponent* CAC) {
}


