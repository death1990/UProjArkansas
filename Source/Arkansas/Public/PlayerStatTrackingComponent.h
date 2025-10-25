#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CauseDamageInfo.h"
#include "ESkill.h"
#include "Templates/SubclassOf.h"
#include "PlayerStatTrackingComponent.generated.h"

class AActor;
class AController;
class AIndianaCharacter;
class UCharacterInfoComponent;
class UCraftingRecipe;
class UDamageType;
class UEquipmentComponent;
class UPerk;
class UPlayerStatTrackingDecisionOptions;
class UVendorComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerStatTrackingComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerStatTrackingDecisionOptions* DecisionOptionsDataAsset;
    
public:
    UPlayerStatTrackingComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnVendorScreenOpened(const UVendorComponent* VendorComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnSkillUpdated(UCharacterInfoComponent* CharacterInfoComponent, ESkill Skill, int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRevive(AIndianaCharacter* Player, bool bDebug);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerTakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDealDamage(const FCauseDamageInfo& CauseDamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnPerkAdded(UCharacterInfoComponent* CharacterInfoComponent, const TSubclassOf<UPerk>& Perk);
    
    UFUNCTION(BlueprintCallable)
    void OnMedKitUsed(UEquipmentComponent* EquipmentComponent, bool bDoubleDose);
    
    UFUNCTION(BlueprintCallable)
    void OnItemCrafted(const UCraftingRecipe* Recipe);
    
    UFUNCTION(BlueprintCallable)
    void OnCompanionKill(AActor* Killer, AActor* Victim, const FCauseDamageInfo& CauseDamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoDocUsed();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void DumpPlayerStats();
    
};

