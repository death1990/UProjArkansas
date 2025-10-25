#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OEIUtilitiesLibrary.generated.h"

class AActor;
class UWorld;

UCLASS(Blueprintable)
class OEICOMMON_API UOEIUtilitiesLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOEIUtilitiesLibrary();

    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetLoadedSubLevels(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteDeferredConsoleCommand(const FString& Command);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteConsoleCommand(const FString& Command);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesMapExist(const FString& MapName);
    
    UFUNCTION(BlueprintCallable)
    static void CameraLookAtActor(const TArray<AActor*>& Actors, FVector& OutCameraPos, FRotator& OutCameraRot);
    
};

