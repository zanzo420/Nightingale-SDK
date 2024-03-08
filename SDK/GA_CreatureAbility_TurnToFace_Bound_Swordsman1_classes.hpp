#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x560 - 0x510)
// BlueprintGeneratedClass GA_CreatureAbility_TurnToFace_Bound_Swordsman1.GA_CreatureAbility_TurnToFace_Bound_Swordsman1_C
class UGA_CreatureAbility_TurnToFace_Bound_Swordsman1_C : public UGA_CreatureAbilityBase_C
{
public:
	TMap<enum class Enum_CreatureAbilityZone, struct FDynamicMontageArray> CreatureAbilityZone;                               // 0x510(0x50)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_TurnToFace_Bound_Swordsman1_C* GetDefaultObj();

	void SelectMontage(const struct FTransform& TargetTransform, class UAnimMontage** SelectedMontage, class AActor* CallFunc_GetTarget_Target, enum class Enum_CreatureAbilityZone CallFunc_Get_Creature_Ability_Zone_4_Way_CreatureAbilityZone, bool CallFunc_IsValid_ReturnValue, const struct FDynamicMontageArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UAnimMontage* CallFunc_SelectMontageNearTarget_ReturnValue, float CallFunc_SelectMontageNearTarget_Leeway_ImplicitCast);
};

}


