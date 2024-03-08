#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x550 - 0x548)
// BlueprintGeneratedClass GA_CreatureAbility_Melee_01_FaeAssassin.GA_CreatureAbility_Melee_01_FaeAssassin_C
class UGA_CreatureAbility_Melee_01_FaeAssassin_C : public UGA_CreatureAbility_Melee_01_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x548(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Melee_01_FaeAssassin_C* GetDefaultObj();

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_CreatureAbility_Melee_01_FaeAssassin(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, bool K2Node_Event_bWasCancelled, TScriptInterface<class IAICCreatureDataInterface> CallFunc_GetMeleeAttackCooldown_self_CastInput, float CallFunc_GetMeleeAttackCooldown_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


