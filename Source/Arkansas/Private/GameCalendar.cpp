#include "GameCalendar.h"

UGameCalendar::UGameCalendar() {
}

void UGameCalendar::RequestUnpauseTime(const FName& RequestContext) {
}

void UGameCalendar::RequestPauseTime(const FName& RequestContext) {
}

void UGameCalendar::LockCalendar(bool Block) {
}

void UGameCalendar::K2_SetupDelayedCallback(UObject* WorldContextObject, const FDelayedEvent& EventToDelay, float SecondsToDelay) {
}

void UGameCalendar::K2_RegisterNamedTimestamp(const FName TimestampName) {
}

bool UGameCalendar::K2_IsTimeSliceBranching(int32 StartHour, int32 EndHour, EBoolResult& OutResult) {
    return false;
}

bool UGameCalendar::K2_IsTimeSlice(int32 StartHour, int32 EndHour) {
    return false;
}

bool UGameCalendar::K2_IsPhaseOfDayBranching(EPhaseOfDay Phase, EBoolResult& OutResult) {
    return false;
}

bool UGameCalendar::K2_IsPhaseOfDay(EPhaseOfDay Phase) {
    return false;
}

bool UGameCalendar::K2_IsNightBranching(EBoolResult& OutResult) {
    return false;
}

bool UGameCalendar::K2_IsNight() {
    return false;
}

bool UGameCalendar::K2_IsDayBranching(EBoolResult& OutResult) {
    return false;
}

bool UGameCalendar::K2_IsDay() {
    return false;
}

bool UGameCalendar::K2_HasTimeElapsedSinceNamedTimestamp(const FName TimestampName, EBoolResult& OutResult, int32 Days, int32 Hours, int32 Minutes, float Seconds) {
    return false;
}

float UGameCalendar::K2_GetRawHour() {
    return 0.0f;
}

float UGameCalendar::K2_GetNormalizedTime() {
    return 0.0f;
}

void UGameCalendar::K2_ClearNamedTimestamp(const FName TimestampName) {
}

void UGameCalendar::K2_AdvanceToTime(float Days, float Hours, float Minutes, float Seconds) {
}

void UGameCalendar::K2_AdvanceTime(float Days, float Hours, float Minutes, float Seconds) {
}

void UGameCalendar::AdvanceToTime(float Days, float Hours, float Minutes, float Seconds) {
}

void UGameCalendar::AdvanceTime(float Days, float Hours, float Minutes, float Seconds) {
}


