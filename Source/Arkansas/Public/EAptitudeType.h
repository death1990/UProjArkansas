#pragma once
#include "CoreMinimal.h"
#include "EAptitudeType.generated.h"

UENUM(BlueprintType)
enum class EAptitudeType : uint8 {
    NoAptitude,
    BeverageTech,
    Bureaucrat,
    Cashier,
    Construction,
    Elevator,
    Factory,
    Farmer,
    FoodTester,
    Janitor,
    Mascot,
    MedicalTech,
    SafetyInspector,
    Scientist,
    Chef,
    Invalid,
};

