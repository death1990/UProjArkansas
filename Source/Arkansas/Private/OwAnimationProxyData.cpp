#include "OwAnimationProxyData.h"

UOwAnimationProxyData::UOwAnimationProxyData() {
    this->HeadBlendSpace = NULL;
    this->CowerBodyIdleAsset = NULL;
    this->DefaultResponseIdleMontage = NULL;
    this->DefaultPropMesh = NULL;
    this->bTranslateTarget = true;
    this->bToggleHandIK = false;
    this->bEnableHandIK = false;
    this->bUseAltIKTargets = false;
    this->bUseForeground = false;
    this->bAlwaysPlayCombatExit = false;
    this->bIsSkippable = true;
    this->bSkipIdleStartOnTransitionFromSubstate = false;
    this->bSkipCombatTransitionAnimations = false;
    this->bEquipWeaponForProxy = false;
    this->bSkipProxyExitForConversation = true;
}


