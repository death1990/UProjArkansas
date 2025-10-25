#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "AIBuffZoneComponent.generated.h"

class AIndianaAiCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ARKANSAS_API UAIBuffZoneComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuffRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyedCooldown;
    
    UAIBuffZoneComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static bool IsLocationInBuffZone(AIndianaAiCharacter* Character, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIndianaAiCharacter* GetOwningCharacter();
    
    UFUNCTION(BlueprintCallable)
    void BuffDestroyed();
    
    UFUNCTION(BlueprintCallable)
    static void AddTemporaryAIBuffZone(AIndianaAiCharacter* Character, FVector Location, float Radius, float Time);
    
};

