#include "AccomplishmentTracker.h"

UAccomplishmentTracker::UAccomplishmentTracker() {
    this->AccomplishmentDataTable = NULL;
}

void UAccomplishmentTracker::ResetAccomplishment(const FString& AccomplishmentName) {
}

TArray<FName> UAccomplishmentTracker::GetAllCompletedAccomplishments() const {
    return TArray<FName>();
}

TMap<FName, FAccomplishmentData> UAccomplishmentTracker::GetAllAccomplishments() const {
    return TMap<FName, FAccomplishmentData>();
}

bool UAccomplishmentTracker::FindAccomplishmentByRow(const FName& AccomplishmentRowName, FAccomplishmentData& OutData) const {
    return false;
}

bool UAccomplishmentTracker::FindAccomplishmentByName(const FString& AccomplishmentName, FAccomplishmentData& OutData) const {
    return false;
}


