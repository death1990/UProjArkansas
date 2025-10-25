#include "ReactiveEnvironmentAnimInstance.h"

UReactiveEnvironmentAnimInstance::UReactiveEnvironmentAnimInstance() {
    this->bIsInPlayerProximity = false;
    this->TimeSinceInPlayerProximity = 10000.00f;
    this->bDead = false;
}


