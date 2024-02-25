#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x558 - 0x558)
// BlueprintGeneratedClass GA_ApplyAbilityDamage_Physical.GA_ApplyAbilityDamage_Physical_C
class UGA_ApplyAbilityDamage_Physical_C : public UGA_ApplyAbilityDamage_C
{
public:

	static class UClass* StaticClass();
	static class UGA_ApplyAbilityDamage_Physical_C* GetDefaultObj();

	void PopulateEffectTags(const struct FGameplayTagContainer& GunMeleeTag, bool CallFunc_RemoveGameplayTag_ReturnValue, class ABP_RangedWeapon_Base_C* K2Node_DynamicCast_AsBP_Ranged_Weapon_Base, bool K2Node_DynamicCast_bSuccess);
	void CheckAndApplyPlayerSkillBonus(double DamageIn, double* DamageOut, double CallFunc_CheckAndApplyPlayerSkillBonus_DamageOut, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double CallFunc_FMax_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttribute_ReturnValue_1, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_2, float CallFunc_GetFloatAttribute_ReturnValue_2, double CallFunc_FMax_ReturnValue_1, double CallFunc_FMax_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_FMax_A_ImplicitCast, double CallFunc_FMax_A_ImplicitCast_1, double CallFunc_FMax_A_ImplicitCast_2);
	void GetDamage(double* Damage, bool* Succeeded, const struct FGameplayAttribute& Temp_struct_Variable, float CallFunc_CalculateItemAttributeValue_ReturnValue, double K2Node_FunctionResult_Damage_ImplicitCast);
};

}


