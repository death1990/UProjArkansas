#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SaveGameStoreComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USaveGameStoreComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> ValueStoreFloats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> ValueStoreInts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> ValueStoreBools;
    
public:
    USaveGameStoreComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetIntValue(FName Key, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetFloatValue(FName Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetBoolValue(FName Key, bool bValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void LogValueStores() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIntValue(FName Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetIntStoreKeys(TArray<FName>& OutKeys) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloatValue(FName Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFloatStoreKeys(TArray<FName>& OutKeys) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBoolValue(FName Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBoolStoreKeys(TArray<FName>& OutKeys) const;
    
};

