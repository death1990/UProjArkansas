#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=EBoolResult -FallbackName=EBoolResult
#include "CalendarShiftFromDayToNightEventDelegate.h"
#include "CalendarShiftFromNightToDayEventDelegate.h"
#include "DelayedEventDelegate.h"
#include "EPhaseOfDay.h"
#include "OnPhaseOfDayChangedDelegate.h"
#include "GameCalendar.generated.h"

UCLASS(Blueprintable)
class UGameCalendar : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPhaseOfDayChanged OnPhaseOfDayChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCalendarShiftFromDayToNightEvent OnCalenderShiftFromDayToNight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCalendarShiftFromNightToDayEvent OnCalenderShiftFromNightToDay;
    
    UGameCalendar();

    UFUNCTION(BlueprintCallable)
    void RequestUnpauseTime(const FName& RequestContext);
    
    UFUNCTION(BlueprintCallable)
    void RequestPauseTime(const FName& RequestContext);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LockCalendar(bool Block);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void K2_SetupDelayedCallback(UObject* WorldContextObject, const FDelayedEvent& EventToDelay, float SecondsToDelay);
    
    UFUNCTION(BlueprintCallable)
    static void K2_RegisterNamedTimestamp(const FName TimestampName);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_IsTimeSliceBranching(int32 StartHour, int32 EndHour, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool K2_IsTimeSlice(int32 StartHour, int32 EndHour);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_IsPhaseOfDayBranching(EPhaseOfDay Phase, EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool K2_IsPhaseOfDay(EPhaseOfDay Phase);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_IsNightBranching(EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool K2_IsNight();
    
    UFUNCTION(BlueprintCallable)
    static bool K2_IsDayBranching(EBoolResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool K2_IsDay();
    
    UFUNCTION(BlueprintCallable)
    static bool K2_HasTimeElapsedSinceNamedTimestamp(const FName TimestampName, EBoolResult& OutResult, int32 Days, int32 Hours, int32 Minutes, float Seconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float K2_GetRawHour();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float K2_GetNormalizedTime();
    
    UFUNCTION(BlueprintCallable)
    static void K2_ClearNamedTimestamp(const FName TimestampName);
    
    UFUNCTION(BlueprintCallable)
    static void K2_AdvanceToTime(float Days, float Hours, float Minutes, float Seconds);
    
    UFUNCTION(BlueprintCallable)
    static void K2_AdvanceTime(float Days, float Hours, float Minutes, float Seconds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AdvanceToTime(float Days, float Hours, float Minutes, float Seconds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AdvanceTime(float Days, float Hours, float Minutes, float Seconds);
    
};

