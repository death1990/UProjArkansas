#include "CreateItemStatusEffect.h"

UCreateItemStatusEffect::UCreateItemStatusEffect() {
    this->CountRule = ECreateItemCountRule::UseItemDefinitionCount;
    this->LootTable = NULL;
    this->bDisplayItemNotification = false;
}


