#include "NiagaraDataInterfaceOEIWWise.h"

UNiagaraDataInterfaceOEIWWise::UNiagaraDataInterfaceOEIWWise() {
    this->EventToPost = NULL;
    this->bLimitPlaysPerTick = true;
    this->MaxPlaysPerTick = 10;
    this->bStopWhenComponentIsDestroyed = true;
}


