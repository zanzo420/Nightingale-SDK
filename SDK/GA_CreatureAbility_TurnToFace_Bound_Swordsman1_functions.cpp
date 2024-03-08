#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_TurnToFace_Bound_Swordsman1.GA_CreatureAbility_TurnToFace_Bound_Swordsman1_C
// (None)

class UClass* UGA_CreatureAbility_TurnToFace_Bound_Swordsman1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_TurnToFace_Bound_Swordsman1_C");

	return Clss;
}


// GA_CreatureAbility_TurnToFace_Bound_Swordsman1_C GA_CreatureAbility_TurnToFace_Bound_Swordsman1.Default__GA_CreatureAbility_TurnToFace_Bound_Swordsman1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_TurnToFace_Bound_Swordsman1_C* UGA_CreatureAbility_TurnToFace_Bound_Swordsman1_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_TurnToFace_Bound_Swordsman1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_TurnToFace_Bound_Swordsman1_C*>(UGA_CreatureAbility_TurnToFace_Bound_Swordsman1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_TurnToFace_Bound_Swordsman1.GA_CreatureAbility_TurnToFace_Bound_Swordsman1_C.SelectMontage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  TargetTransform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                SelectedMontage                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTarget_Target                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class Enum_CreatureAbilityZoneCallFunc_Get_Creature_Ability_Zone_4_Way_CreatureAbilityZone     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicMontageArray        CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_SelectMontageNearTarget_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectMontageNearTarget_Leeway_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_TurnToFace_Bound_Swordsman1_C::SelectMontage(const struct FTransform& TargetTransform, class UAnimMontage** SelectedMontage, class AActor* CallFunc_GetTarget_Target, enum class Enum_CreatureAbilityZone CallFunc_Get_Creature_Ability_Zone_4_Way_CreatureAbilityZone, bool CallFunc_IsValid_ReturnValue, const struct FDynamicMontageArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UAnimMontage* CallFunc_SelectMontageNearTarget_ReturnValue, float CallFunc_SelectMontageNearTarget_Leeway_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_TurnToFace_Bound_Swordsman1_C", "SelectMontage");

	Params::UGA_CreatureAbility_TurnToFace_Bound_Swordsman1_C_SelectMontage_Params Parms{};

	Parms.TargetTransform = TargetTransform;
	Parms.CallFunc_GetTarget_Target = CallFunc_GetTarget_Target;
	Parms.CallFunc_Get_Creature_Ability_Zone_4_Way_CreatureAbilityZone = CallFunc_Get_Creature_Ability_Zone_4_Way_CreatureAbilityZone;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_SelectMontageNearTarget_ReturnValue = CallFunc_SelectMontageNearTarget_ReturnValue;
	Parms.CallFunc_SelectMontageNearTarget_Leeway_ImplicitCast = CallFunc_SelectMontageNearTarget_Leeway_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedMontage != nullptr)
		*SelectedMontage = Parms.SelectedMontage;

}

}


