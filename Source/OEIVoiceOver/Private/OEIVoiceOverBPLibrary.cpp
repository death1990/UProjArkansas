#include "OEIVoiceOverBPLibrary.h"

UOEIVoiceOverBPLibrary::UOEIVoiceOverBPLibrary() {
}

bool UOEIVoiceOverBPLibrary::StopVoiceOver(AActor* Actor) {
    return false;
}

bool UOEIVoiceOverBPLibrary::ResumeVoiceOver(AActor* Actor) {
    return false;
}

bool UOEIVoiceOverBPLibrary::PlayVoiceOver(AActor* Actor, const FVoiceOverData& Data, float StartTime, const FSpeakerPlaybackStartedDynamicDelegate& PlaybackStarted) {
    return false;
}

bool UOEIVoiceOverBPLibrary::PauseVoiceOver(AActor* Actor) {
    return false;
}


