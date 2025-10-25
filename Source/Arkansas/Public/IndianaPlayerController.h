#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputActionKeyMapping -FallbackName=InputActionKeyMapping
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputAxisKeyMapping -FallbackName=InputAxisKeyMapping
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "EChatterEventType.h"
#include "EStateOfBeing.h"
#include "IndianaPlayerController.generated.h"

class AIndianaAiCharacter;
class AIndianaPlayerCharacter;
class AIndianaPlayerController;

UCLASS(Blueprintable)
class ARKANSAS_API AIndianaPlayerController : public APlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIndianaPlayerCharacter* IndianaPlayerCharacter;
    
public:
    AIndianaPlayerController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Exec)
    void UnpinGlobalVariable(const FString& GlobalVariable);
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleQuestLog();
    
    UFUNCTION(BlueprintCallable)
    void TogglePauseMenu();
    
    UFUNCTION(BlueprintCallable)
    void ToggleMap();
    
    UFUNCTION(BlueprintCallable)
    void ToggleLedger();
    
    UFUNCTION(BlueprintCallable)
    void ToggleInventory();
    
    UFUNCTION(BlueprintCallable)
    void ToggleCompanions();
    
    UFUNCTION(BlueprintCallable)
    void ToggleCharacterSummary();
    
    UFUNCTION(BlueprintCallable)
    void SetYAxisInverted(bool bIsInverted);
    
    UFUNCTION(BlueprintCallable)
    void SetXAxisInverted(bool bIsInverted);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSensitivity(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseADSSensitivity(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInputPreferenceADS(int32 InputPreference);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void SetGlobalVariable(const FString& GlobalVariable, int32 Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetControllerYAxisInverted(bool bIsInverted);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerXAxisInverted(bool bIsInverted);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoSprintEnabled(bool bIsEnabled);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void PlayChatterOnTarget(EChatterEventType ChatterEvent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PinGlobalVariable(const FString& GlobalVariable);
    
public:
    UFUNCTION(BlueprintCallable)
    void OpenQuestLog();
    
    UFUNCTION(BlueprintCallable)
    void OpenMap();
    
    UFUNCTION(BlueprintCallable)
    void OpenLedger();
    
    UFUNCTION(BlueprintCallable)
    void OpenInventory();
    
    UFUNCTION(BlueprintCallable)
    void OpenCompanions();
    
    UFUNCTION(BlueprintCallable)
    void OpenCharacterSummary();
    
    UFUNCTION(BlueprintCallable)
    void OnRestoredStateOfBeing(EStateOfBeing RestoredStateOfBeing);
    
    UFUNCTION(BlueprintCallable)
    void OnKeyBindsReset();
    
    UFUNCTION(BlueprintCallable)
    void OnAxisMappingRemoved(FInputAxisKeyMapping Value);
    
    UFUNCTION(BlueprintCallable)
    void OnAxisMappingAdded(FInputAxisKeyMapping Value);
    
    UFUNCTION(BlueprintCallable)
    void OnActionMappingRemoved(FInputActionKeyMapping Value);
    
    UFUNCTION(BlueprintCallable)
    void OnActionMappingAdded(FInputActionKeyMapping Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsYAxisInverted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsXAxisInverted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseADSSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInteractHoldTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AIndianaPlayerController* GetIndianaPlayerController();
    
    UFUNCTION(BlueprintCallable)
    void DebugTogglePause();
    
    UFUNCTION(BlueprintCallable)
    void DebugStartTechArtWidget2();
    
    UFUNCTION(BlueprintCallable)
    void DebugStartTechArtWidget1();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSpawnCompanionForced(FName CompanionName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSpawnCompanion(FName CompanionName);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    AIndianaAiCharacter* DebugSpawnAICharacter(FName AICharacterAssetName);
    
public:
    UFUNCTION(BlueprintCallable)
    void DebugRevertDutchAngle(float Axis);
    
    UFUNCTION(BlueprintCallable)
    void DebugFrameStep();
    
    UFUNCTION(BlueprintCallable)
    void DebugEndTechArtWidget2();
    
    UFUNCTION(BlueprintCallable)
    void DebugEndTechArtWidget1();
    
    UFUNCTION(BlueprintCallable)
    void DebugDutchAngleAdjustment(float Axis);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDespawnCompanions();
    
    UFUNCTION(BlueprintCallable)
    void CloseLedger();
    
    UFUNCTION(BlueprintCallable)
    void AddStickYawInput(float Val);
    
    UFUNCTION(BlueprintCallable)
    void AddStickRollInput(float Val);
    
    UFUNCTION(BlueprintCallable)
    void AddStickPitchInput(float Val);
    
};

