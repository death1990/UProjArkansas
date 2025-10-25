#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OwTimeOfDaySystem.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API AOwTimeOfDaySystem : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseEditorTick;
    
    AOwTimeOfDaySystem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostRegisterAllComponents_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EditorTick(float DeltaTime);
    
};

