#include "GenericPriorityFunctionLibrary.h"

UGenericPriorityFunctionLibrary::UGenericPriorityFunctionLibrary() {
}

FPriorityNodeHandle UGenericPriorityFunctionLibrary::GenericPriority(AIndianaAiController* Controller, EPriorityNodeValue Priority, FName Category) {
    return FPriorityNodeHandle{};
}


