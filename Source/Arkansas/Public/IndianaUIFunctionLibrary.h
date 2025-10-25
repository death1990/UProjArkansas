#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ECheckBranches.h"
#include "EIndianaUIColorType.h"
#include "IndianaUIFunctionLibrary.generated.h"

class AIndianaMainMenuUI;
class AIndianaUI;
class APlayerController;
class UObject;

UCLASS(Blueprintable)
class UIndianaUIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIndianaUIFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void ShowConversationUI();
    
    UFUNCTION(BlueprintCallable)
    static bool IsConversationUIHidden();
    
    UFUNCTION(BlueprintCallable)
    static void HideHudForObject(const UObject* Object, bool bHidden);
    
    UFUNCTION(BlueprintCallable)
    static void HideConversationUI(bool bAutoRestoreOnConversationEnd);
    
    UFUNCTION(BlueprintCallable)
    static EIndianaUIColorType GetSubtitleTextColorByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static EIndianaUIColorType GetSubtitleBGColorByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static EIndianaUIColorType GetReticleColorByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static AIndianaUI* GetIndianaUI(ECheckBranches& Branches, APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static AIndianaMainMenuUI* GetIndianaMainMenuUI(ECheckBranches& Branches, APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor GetColorByType(EIndianaUIColorType Type);
    
};

