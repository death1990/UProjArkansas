#include "TimeOfDayActor.h"

ATimeOfDayActor::ATimeOfDayActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_AutoRegister = true;
}


bool ATimeOfDayActor::IsRegistered() const {
    return false;
}

AWeatherSystem* ATimeOfDayActor::GetParentWeatherSystem() const {
    return NULL;
}


