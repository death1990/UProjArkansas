#include "ConditionalLibrary.h"

UConditionalLibrary::UConditionalLibrary() {
}

FGlobalConditionalReference UConditionalLibrary::MakeGlobalConditionalReference(FGuid ID) {
    return FGlobalConditionalReference{};
}

FGuid UConditionalLibrary::GetGlobalConditionalID(const FGlobalConditionalReference& GlobalConditional) {
    return FGuid{};
}


