#pragma once
#include "CoreMinimal.h"
#include "EActivityOutcome.h"
#include "OwGameInstanceSubsystem.h"
#include "ActivitiesSubsystem.generated.h"

UCLASS(Blueprintable)
class ARKANSAS_API UActivitiesSubsystem : public UOwGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UActivitiesSubsystem();

private:
    UFUNCTION(BlueprintCallable, Exec)
    void StartActivity(const FString& activityID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResumeActivity(const FString& activityID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAllActiveActivities();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EndActivity(const FString& activityID, EActivityOutcome activityOutcome);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableActivity(const FString& activityID, bool Enabled);
    
public:
    UFUNCTION(BlueprintCallable)
    static void ActivityStart(const FString& activityID);
    
    UFUNCTION(BlueprintCallable)
    static void ActivityResume(const FString& activityID);
    
    UFUNCTION(BlueprintCallable)
    static void ActivityEnd(const FString& activityID, EActivityOutcome activityOutcome);
    
    UFUNCTION(BlueprintCallable)
    static void ActivityEnable(const FString& activityID, bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    static void ActivitiesReset();
    
};

