#include "AlarmComponent.h"

UDEPRECATED_AlarmComponent::UDEPRECATED_AlarmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

EAlarmState UDEPRECATED_AlarmComponent::GetAlarmState() const {
    return EAlarmState::Off;
}


