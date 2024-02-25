#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x550 - 0x510)
// BlueprintGeneratedClass GA_CreatureAbility_Ranged_HarpySpitAnimation.GA_CreatureAbility_Ranged_HarpySpitAnimation_C
class UGA_CreatureAbility_Ranged_HarpySpitAnimation_C : public UGA_CreatureAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x510(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayAttribute                    DamageAttribute;                                   // 0x518(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Ranged_HarpySpitAnimation_C* GetDefaultObj();

	void CreatureAbilityInitialize(bool* bSuccess, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, TArray<double>& K2Node_MakeArray_Array, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1, double CallFunc_StandardBonusFormula_Total, double K2Node_MakeArray__0__ImplicitCast, double CallFunc_StandardBonusFormula_Base_ImplicitCast);
	void SelectMontage(const struct FTransform& TargetTransform, class UAnimMontage** SelectedMontage, double LYaw, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue_3, bool CallFunc_Less_DoubleDouble_ReturnValue_4, bool CallFunc_Less_DoubleDouble_ReturnValue_5, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_6, bool CallFunc_Less_DoubleDouble_ReturnValue_7, double CallFunc_Abs_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double K2Node_VariableSet_LYaw_ImplicitCast);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_CreatureAbility_Ranged_HarpySpitAnimation(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, bool K2Node_Event_bWasCancelled, bool CallFunc_IsValid_ReturnValue);
};

}


