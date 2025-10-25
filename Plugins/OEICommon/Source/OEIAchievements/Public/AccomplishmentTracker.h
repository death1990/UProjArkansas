#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "AccomplishmentData.h"
#include "OnAccomplishmentUpdatedDelegate.h"
#include "OnAcomplishmentCompletedDelegate.h"
#include "AccomplishmentTracker.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class OEIACHIEVEMENTS_API UAccomplishmentTracker : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAcomplishmentCompleted OnAccomplishmentCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAccomplishmentUpdated OnAccomplishmentUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAccomplishmentUpdated OnAchievementUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AccomplishmentDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CompletedAccomplishments;
    
public:
    UAccomplishmentTracker();

    UFUNCTION(BlueprintCallable)
    void ResetAccomplishment(const FString& AccomplishmentName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetAllCompletedAccomplishments() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FName, FAccomplishmentData> GetAllAccomplishments() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindAccomplishmentByRow(const FName& AccomplishmentRowName, FAccomplishmentData& OutData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindAccomplishmentByName(const FString& AccomplishmentName, FAccomplishmentData& OutData) const;
    
};

