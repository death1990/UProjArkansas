#include "AppearanceComponent.h"

UAppearanceComponent::UAppearanceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ForcedLODIndex = -1;
    this->MinimumLODIndex = -1;
    this->AppearancePreset = NULL;
    this->DefaultHead = NULL;
    this->DefaultBody = NULL;
    this->AdditionalAppearanceMods = NULL;
    this->bEnableCustomization = false;
    this->bAllowUnlimitedBoneMods = false;
    this->BoneModPreset = NULL;
    this->UglyStickBoneModPreset = NULL;
    this->CurrentBody = NULL;
    this->CurrentHead = NULL;
    this->CurrentHelmet = NULL;
    this->CurrentAccessories[0] = NULL;
    this->CurrentAccessories[1] = NULL;
    this->CurrentAccessories[2] = NULL;
    this->CurrentAccessories[3] = NULL;
    this->CurrentAccessories[4] = NULL;
    this->CurrentAccessories[5] = NULL;
    this->CurrentAccessories[6] = NULL;
    this->CurrentAccessories[7] = NULL;
    this->bShouldCacheAssets = true;
    this->bShouldCacheEquipmentAssets = true;
    this->bHelmetVisible = true;
    this->BodyPartData = NULL;
    this->bHasLimbBreakConstraintSetup = false;
    this->bDoesntNeedGorecaps = false;
}

void UAppearanceComponent::TransitionToNextMatchingBodyAppearance() {
}

void UAppearanceComponent::ShowMaterialSection(FName SlotName, bool bVisible) {
}

void UAppearanceComponent::SetVectorParameterWeapon(FName Parameter, const FVector& Vector) {
}

void UAppearanceComponent::SetVectorParameter(FName Parameter, const FVector& Vector) {
}

void UAppearanceComponent::SetTattooColor(const UTattooColor* NewTattooColor) {
}

void UAppearanceComponent::SetTattoo(const UTattoo* NewTattoo) {
}

void UAppearanceComponent::SetSlotVectorParameterWeapon(FName SlotName, FName Parameter, const FVector& Vector) {
}

void UAppearanceComponent::SetSlotVectorParameter(FName SlotName, FName Parameter, const FVector& Vector) {
}

void UAppearanceComponent::SetSlotTextureParameter(FName SlotName, FName Parameter, UTexture* Texture) {
}

void UAppearanceComponent::SetSlotScalarParameterWeapon(FName SlotName, FName Parameter, float Scalar) {
}

void UAppearanceComponent::SetSlotScalarParameter(FName SlotName, FName Parameter, float Scalar) {
}

void UAppearanceComponent::SetSkinTone(const USkinTone* NewSkinTone) {
}

void UAppearanceComponent::SetScar(const UScar* NewScar) {
}

void UAppearanceComponent::SetScalarParameterWeapon(FName Parameter, float Scalar) {
}

void UAppearanceComponent::SetScalarParameter(FName Parameter, float Scalar) {
}

void UAppearanceComponent::SetRightLegProsthetic(const UProstheticLegRight* NewProsthetic) {
}

void UAppearanceComponent::SetRightArmProsthetic(const UProstheticArmRight* NewProsthetic) {
}

void UAppearanceComponent::SetPiercingColor(const UPiercingColor* NewPiercingColor) {
}

void UAppearanceComponent::SetPiercing(const UPiercing* NewPiercing) {
}

void UAppearanceComponent::SetMole(const UMole* NewMole) {
}

void UAppearanceComponent::SetMakeup(const UMakeup* NewMakeup) {
}

void UAppearanceComponent::SetLipMakeupWeight(float NewLipMakeupWeight) {
}

void UAppearanceComponent::SetLipMakeupColor(const UMakeupLipsColor* NewMakeupColor) {
}

void UAppearanceComponent::SetLipMakeup(const UMakeupLips* NewMakeup) {
}

void UAppearanceComponent::SetLeftLegProsthetic(const UProstheticLegLeft* NewProsthetic) {
}

void UAppearanceComponent::SetLeftArmProsthetic(const UProstheticArmLeft* NewProsthetic) {
}

void UAppearanceComponent::SetHairColor(const UHairColor* NewColor) {
}

void UAppearanceComponent::SetHair(const UHairAppearances* NewHair) {
}

void UAppearanceComponent::SetGender(const FGameplayTag& Gender) {
}

void UAppearanceComponent::SetFrecklesWeight(float NewFrecklesWeight) {
}

void UAppearanceComponent::SetFrecklesSpread(float NewFrecklesSpread) {
}

void UAppearanceComponent::SetEyeshadowMakeupWeight(float NewEyeshadowMakeupWeight) {
}

void UAppearanceComponent::SetEyeshadowMakeupColor(const UMakeupEyeshadowColor* NewMakeupColor) {
}

void UAppearanceComponent::SetEyeshadowMakeup(const UMakeupEyeshadow* NewMakeup) {
}

void UAppearanceComponent::SetEyesDarkCirclesSize(float NewEyesDarkCirclesSize) {
}

void UAppearanceComponent::SetEyelinerMakeupWeight(float NewEyelinerMakeupWeight) {
}

void UAppearanceComponent::SetEyelinerMakeupColor(const UMakeupEyelinerColor* NewMakeupColor) {
}

void UAppearanceComponent::SetEyelinerMakeup(const UMakeupEyeliner* NewMakeup) {
}

void UAppearanceComponent::SetEyeColor(const UEyeColor* NewColor) {
}

void UAppearanceComponent::SetEyebrows(const UEyebrowAppearances* NewEyebrows) {
}

void UAppearanceComponent::SetEyebrowColor(const UEyebrowColor* NewColor) {
}

void UAppearanceComponent::SetDynamicWeakSpot(FGameplayTag BodyPart, bool bEnabled) {
}

void UAppearanceComponent::SetDirtWeight(float NewDirtWeight) {
}

void UAppearanceComponent::SetDirt(const UDirt* NewDirt) {
}

void UAppearanceComponent::SetDefaultHead(const UHeadAppearances* Head) {
}

void UAppearanceComponent::SetDefaultBody(const UBodyAppearances* Body) {
}

void UAppearanceComponent::SetComplexionWeight(float NewComplexionWeight) {
}

void UAppearanceComponent::SetComplexion(const UComplexion* NewComplexion) {
}

void UAppearanceComponent::SetCheekMakeupWeight(float NewCheekMakeupWeight) {
}

void UAppearanceComponent::SetCheekMakeupColor(const UMakeupCheeksColor* NewMakeupColor) {
}

void UAppearanceComponent::SetCheekMakeup(const UMakeupCheeks* NewMakeup) {
}

void UAppearanceComponent::SetBrows(const UBrows* NewBrows) {
}

void UAppearanceComponent::SetBoneModificationPresets(const UBoneModificationsPreset* Presets) {
}

void UAppearanceComponent::SetBoneModification(const UBoneModifications* Modifications, float Value) {
}

void UAppearanceComponent::SetBeardColor(const UBeardColor* NewColor) {
}

void UAppearanceComponent::SetBeard(const UBeardAppearances* NewBeard) {
}

void UAppearanceComponent::SetAgeWrinkles(const UAgeWrinkles* NewAgeWrinkles) {
}

void UAppearanceComponent::SetAge(float NewAge) {
}

void UAppearanceComponent::RemoveBoneModification(const UBoneModifications* Modifications) {
}

void UAppearanceComponent::RefreshFullAppearance() {
}

void UAppearanceComponent::OnWeaponEquipped(UEquipmentComponent* EquipmentComp, UWeapon* EquippedWeapon) {
}

void UAppearanceComponent::InvalidateOldBoneModifications() const {
}

void UAppearanceComponent::InterpolateScalarParameterCurve(FName Parameter, const FRuntimeFloatCurve& Curve) {
}

void UAppearanceComponent::InterpolateScalarParameterConstant(FName Parameter, float InterpDestination, float InterpSpeed, bool bFromCurrentValue, float StartValue) {
}

bool UAppearanceComponent::HasLegsProsthetic() const {
    return false;
}

bool UAppearanceComponent::HasActiveScalarParameterInterpolate(FName Parameter) const {
    return false;
}

bool UAppearanceComponent::GetWeakSpotFromBone(const FName& BoneName) const {
    return false;
}

bool UAppearanceComponent::GetWeakSpot(FGameplayTag BodyPart) const {
    return false;
}

FName UAppearanceComponent::GetFirstWeakSpotSocketName() const {
    return NAME_None;
}

UHeadAppearances* UAppearanceComponent::GetDefaultHead() const {
    return NULL;
}

bool UAppearanceComponent::GetBreakBoneName(FGameplayTag BodyPartTag, FName& BoneName) const {
    return false;
}

bool UAppearanceComponent::GetBreakBoneAndSocketNames(FGameplayTag BodyPartTag, FName& BoneName, FName& AttachedSocket, FName& DetachedSocket) const {
    return false;
}

TSet<FName> UAppearanceComponent::GetBreakableBoneNames() const {
    return TSet<FName>();
}

FGameplayTag UAppearanceComponent::GetBodyType() const {
    return FGameplayTag{};
}

TSet<FGameplayTag> UAppearanceComponent::GetBodyPartTags() const {
    return TSet<FGameplayTag>();
}

TArray<FBodyPart> UAppearanceComponent::GetBodyPartsArray() const {
    return TArray<FBodyPart>();
}

FGameplayTag UAppearanceComponent::GetBodyPart(const FName& BoneName, const FVector& ImpactLocation) const {
    return FGameplayTag{};
}

void UAppearanceComponent::DebugTargetVertexColors() {
}

void UAppearanceComponent::CreateAppearanceInstance(UBodyAppearances* NewBodyAppearance) {
}

void UAppearanceComponent::ApplyOverlay_BP(UMaterialInstanceDynamic* MaterialInstanceDynamic) {
}

void UAppearanceComponent::ApplyCPD_BP(int32 Index, float Value, EMeshTarget MeshTarget) {
}

void UAppearanceComponent::ApplyAppearancePreset(const UAppearancePreset* Preset) {
}


