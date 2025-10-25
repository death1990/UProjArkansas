#include "OEITextLibrary.h"

UOEITextLibrary::UOEITextLibrary() {
}

FLocString UOEITextLibrary::MakeLocString(int32 StringTableID, int32 StringID) {
    return FLocString{};
}

bool UOEITextLibrary::IsValid(const FLocString& LocString) {
    return false;
}

FString UOEITextLibrary::GetLocStringText(const FLocString& LocString) {
    return TEXT("");
}


