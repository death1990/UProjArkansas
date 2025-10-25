#pragma once
#include "CoreMinimal.h"
#include "ActorStage.h"
#include "ESpecialObsidianID.h"
#include "CompanionSelectionStage.generated.h"

class AIndianaCharacter;
class AIndianaCharacterDummy;
class UChildActorComponent;

UCLASS(Blueprintable)
class ACompanionSelectionStage : public AActorStage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* NilesVisualizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ValerieVisualizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* AzaVisualizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* MarisolVisualizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* TristanVisualizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* InezVisualizer;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIndianaCharacterDummy* SpawnedCharacterDummies[13];
    
public:
    ACompanionSelectionStage(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIndianaCharacterDummy* GetDummy(ESpecialObsidianID CompanionID) const;
    
    UFUNCTION(BlueprintCallable)
    void CreateDummy(ESpecialObsidianID CompanionID, AIndianaCharacter* SourceCharacter, bool bInitiallySelected);
    
};

