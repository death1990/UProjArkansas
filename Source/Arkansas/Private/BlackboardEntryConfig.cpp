#include "BlackboardEntryConfig.h"

FBlackboardEntryConfig::FBlackboardEntryConfig() {
    this->NativeKeyClass = NULL;
    this->NativeClassType = NULL;
    this->NativeEnumType = NULL;
    this->bInstanceSynced = false;
    this->bNativeInstanced = false;
    this->bNativeBlueprintReadOnly = false;
    this->bIsDeleted = false;
}

