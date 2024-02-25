#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass EEC_Consumable_HealOverTime.EEC_Consumable_HealOverTime_C
class UEEC_Consumable_HealOverTime_C : public UNWXGameplayEffectExecutionCalculation
{
public:

	static class UClass* StaticClass();
	static class UEEC_Consumable_HealOverTime_C* GetDefaultObj();

	void Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput, class UAbilitySystemComponent* LAbilitySystem, const struct FGameplayAttribute& Temp_struct_Variable, class UAbilitySystemComponent* CallFunc_GetTargetAbilitySystemComponent_ReturnValue, float CallFunc_GetSourceAttributeMagnitude_Magnitude, const struct FGameplayEffectCustomExecutionOutput& CallFunc_Execute_OutExecutionOutput, const struct FGameplayAttribute& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSourceAttributeMagnitude_Magnitude_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_DamageActorOverTime_Duration_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
};

}


