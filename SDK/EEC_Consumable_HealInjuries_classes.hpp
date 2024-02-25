#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass EEC_Consumable_HealInjuries.EEC_Consumable_HealInjuries_C
class UEEC_Consumable_HealInjuries_C : public UNWXGameplayEffectExecutionCalculation
{
public:

	static class UClass* StaticClass();
	static class UEEC_Consumable_HealInjuries_C* GetDefaultObj();

	void Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput, class AActor* LOwner, class UAbilitySystemComponent* LAbilitySystem, class UAbilitySystemComponent* CallFunc_GetTargetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEffectCustomExecutionOutput& CallFunc_Execute_OutExecutionOutput, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RemoveStatusEffect_ReturnValue, TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_RemoveStatusEffect_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue);
};

}


