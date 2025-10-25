#pragma once
#include "CoreMinimal.h"
#include "EFlawTrigger.generated.h"

UENUM(BlueprintType)
enum class EFlawTrigger : uint8 {
    SpendMoney,
    EyeInjury,
    HeadInjury,
    DialogFastSelection,
    DialogAttack,
    SetOffAlarm,
    MaimedArm,
    CrippledLeg,
    Blinded,
    Concussed,
    DamageThermal,
    DamageCorrosion,
    DamageNRay,
    DamageShock,
    DamagePoison,
    DamageSwarm_Obsolete,
    DamageFalling,
    DamageRaptidon,
    DamageRobot,
    DamagePhysical,
    AddictionDrug,
    AddictionFood,
    AddictionAlcohol,
    AddictionSmoke,
    Count,
};

