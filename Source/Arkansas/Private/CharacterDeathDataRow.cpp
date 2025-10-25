#include "CharacterDeathDataRow.h"

FCharacterDeathDataRow::FCharacterDeathDataRow() {
    this->DmgType = NULL;
    this->CalledShot = ECharacterDeathTriBool::BFalse;
    this->CriticalHit = ECharacterDeathTriBool::BFalse;
    this->Stealth = ECharacterDeathTriBool::BFalse;
    this->Perk = NULL;
    this->StatusEffect = NULL;
    this->Priority = 0;
    this->Impulse = NULL;
    this->RadialType = ERadialType::Any;
    this->EffectChance = 0.00f;
    this->DeathClass = NULL;
}

