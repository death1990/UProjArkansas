#include "NavigationActions.h"

FNavigationActions::FNavigationActions() {
    this->bCanJump = false;
    this->bCanUseLadders = false;
    this->bCanMantle = false;
    this->bCanVault = false;
    this->bCanDropDown = false;
    this->bCanOpenDoors = false;
    this->bCanPathThroughHazards = false;
    this->bCanPathThroughTraps = false;
}

