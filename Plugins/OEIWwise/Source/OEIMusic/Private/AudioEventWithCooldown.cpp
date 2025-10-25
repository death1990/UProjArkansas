#include "AudioEventWithCooldown.h"

FAudioEventWithCooldown::FAudioEventWithCooldown() {
    this->PostEvent = NULL;
    this->Cooldown = 0.00f;
}

