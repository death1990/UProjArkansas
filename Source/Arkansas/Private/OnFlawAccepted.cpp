#include "OnFlawAccepted.h"
#include "Templates/SubclassOf.h"

UOnFlawAccepted::UOnFlawAccepted() {
    this->NumFlaws = 0;
}

void UOnFlawAccepted::OnFlawAccepted(TSubclassOf<UFlaw> Flaw, int32 Count) const {
}


