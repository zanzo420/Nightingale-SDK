#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ApplyAbilityDamage_Physical.GA_ApplyAbilityDamage_Physical_C
// (None)

class UClass* UGA_ApplyAbilityDamage_Physical_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ApplyAbilityDamage_Physical_C");

	return Clss;
}


// GA_ApplyAbilityDamage_Physical_C GA_ApplyAbilityDamage_Physical.Default__GA_ApplyAbilityDamage_Physical_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ApplyAbilityDamage_Physical_C* UGA_ApplyAbilityDamage_Physical_C::GetDefaultObj()
{
	static class UGA_ApplyAbilityDamage_Physical_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ApplyAbilityDamage_Physical_C*>(UGA_ApplyAbilityDamage_Physical_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_ApplyAbilityDamage_Physical.GA_ApplyAbilityDamage_Physical_C.PopulateEffectTags
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       GunMeleeTag                                                      (Edit, BlueprintVisible)
// bool                               CallFunc_RemoveGameplayTag_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_RangedWeapon_Base_C*     K2Node_DynamicCast_AsBP_Ranged_Weapon_Base                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ApplyAbilityDamage_Physical_C::PopulateEffectTags(const struct FGameplayTagContainer& GunMeleeTag, bool CallFunc_RemoveGameplayTag_ReturnValue, class ABP_RangedWeapon_Base_C* K2Node_DynamicCast_AsBP_Ranged_Weapon_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ApplyAbilityDamage_Physical_C", "PopulateEffectTags");

	Params::UGA_ApplyAbilityDamage_Physical_C_PopulateEffectTags_Params Parms{};

	Parms.GunMeleeTag = GunMeleeTag;
	Parms.CallFunc_RemoveGameplayTag_ReturnValue = CallFunc_RemoveGameplayTag_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Ranged_Weapon_Base = K2Node_DynamicCast_AsBP_Ranged_Weapon_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ApplyAbilityDamage_Physical.GA_ApplyAbilityDamage_Physical_C.CheckAndApplyPlayerSkillBonus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DamageIn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DamageOut                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CheckAndApplyPlayerSkillBonus_DamageOut                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_2         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_A_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_A_ImplicitCast_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_A_ImplicitCast_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ApplyAbilityDamage_Physical_C::CheckAndApplyPlayerSkillBonus(double DamageIn, double* DamageOut, double CallFunc_CheckAndApplyPlayerSkillBonus_DamageOut, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double CallFunc_FMax_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttribute_ReturnValue_1, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_2, float CallFunc_GetFloatAttribute_ReturnValue_2, double CallFunc_FMax_ReturnValue_1, double CallFunc_FMax_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_FMax_A_ImplicitCast, double CallFunc_FMax_A_ImplicitCast_1, double CallFunc_FMax_A_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ApplyAbilityDamage_Physical_C", "CheckAndApplyPlayerSkillBonus");

	Params::UGA_ApplyAbilityDamage_Physical_C_CheckAndApplyPlayerSkillBonus_Params Parms{};

	Parms.DamageIn = DamageIn;
	Parms.CallFunc_CheckAndApplyPlayerSkillBonus_DamageOut = CallFunc_CheckAndApplyPlayerSkillBonus_DamageOut;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1 = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1;
	Parms.CallFunc_GetFloatAttribute_ReturnValue_1 = CallFunc_GetFloatAttribute_ReturnValue_1;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_2 = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_2;
	Parms.CallFunc_GetFloatAttribute_ReturnValue_2 = CallFunc_GetFloatAttribute_ReturnValue_2;
	Parms.CallFunc_FMax_ReturnValue_1 = CallFunc_FMax_ReturnValue_1;
	Parms.CallFunc_FMax_ReturnValue_2 = CallFunc_FMax_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_FMax_A_ImplicitCast = CallFunc_FMax_A_ImplicitCast;
	Parms.CallFunc_FMax_A_ImplicitCast_1 = CallFunc_FMax_A_ImplicitCast_1;
	Parms.CallFunc_FMax_A_ImplicitCast_2 = CallFunc_FMax_A_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageOut != nullptr)
		*DamageOut = Parms.DamageOut;

}


// Function GA_ApplyAbilityDamage_Physical.GA_ApplyAbilityDamage_Physical_C.GetDamage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Damage                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Succeeded                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          Temp_struct_Variable                                             (ConstParm, HasGetValueTypeHash)
// float                              CallFunc_CalculateItemAttributeValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Damage_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ApplyAbilityDamage_Physical_C::GetDamage(double* Damage, bool* Succeeded, const struct FGameplayAttribute& Temp_struct_Variable, float CallFunc_CalculateItemAttributeValue_ReturnValue, double K2Node_FunctionResult_Damage_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ApplyAbilityDamage_Physical_C", "GetDamage");

	Params::UGA_ApplyAbilityDamage_Physical_C_GetDamage_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_CalculateItemAttributeValue_ReturnValue = CallFunc_CalculateItemAttributeValue_ReturnValue;
	Parms.K2Node_FunctionResult_Damage_ImplicitCast = K2Node_FunctionResult_Damage_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Damage != nullptr)
		*Damage = Parms.Damage;

	if (Succeeded != nullptr)
		*Succeeded = Parms.Succeeded;

}

}


