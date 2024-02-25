#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x510 - 0x510)
// BlueprintGeneratedClass GA_CreatureAbility_HarpyLure.GA_CreatureAbility_HarpyLure_C
class UGA_CreatureAbility_HarpyLure_C : public UGA_CreatureAbilityBase_C
{
public:

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_HarpyLure_C* GetDefaultObj();

	void CreatureAbilityActivate(bool* bSuccess, const struct FHitResult& Temp_struct_Variable, const struct FGameplayTagContainer& Temp_struct_Variable_1, const struct FTagValueContainer& Temp_struct_Variable_2, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_3, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetCurrentTarget_ReturnValue, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_3, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags);
};

}


