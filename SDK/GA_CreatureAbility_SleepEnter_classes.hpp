#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x538 - 0x510)
// BlueprintGeneratedClass GA_CreatureAbility_SleepEnter.GA_CreatureAbility_SleepEnter_C
class UGA_CreatureAbility_SleepEnter_C : public UGA_CreatureAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x510(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       SleepCooldownMax;                                  // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SleepCooldownMin;                                  // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SleepLengthMin;                                    // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SleepLengthnMax;                                   // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_SleepEnter_C* GetDefaultObj();

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_CreatureAbility_SleepEnter(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, const struct FGameplayTag& Temp_struct_Variable_4, const struct FGameplayTag& Temp_struct_Variable_5, const struct FGameplayTag& Temp_struct_Variable_6, bool K2Node_Event_bWasCancelled, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_AddTimedState_TimePeriod_ImplicitCast, float CallFunc_AddTimedState_TimePeriod_ImplicitCast_1, float CallFunc_AddTimedState_TimePeriod_ImplicitCast_2);
};

}


