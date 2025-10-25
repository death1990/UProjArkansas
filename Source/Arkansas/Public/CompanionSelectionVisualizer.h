#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CompanionSelectionVisualizer.generated.h"

class AIndianaCharacterDummy;

UCLASS(Blueprintable)
class ACompanionSelectionVisualizer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RelativeBaseTransform;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsSelected: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsHovered: 1;
    
public:
    ACompanionSelectionVisualizer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompanionSelectionChanged(bool bSelected, AIndianaCharacterDummy* SpawnedCharacterDummy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompanionHoveredChanged(bool bHovered, AIndianaCharacterDummy* SpawnedCharacterDummy);
    
};

