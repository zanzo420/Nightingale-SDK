#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EEC_Consumable_HealOverTime.EEC_Consumable_HealOverTime_C
// (None)

class UClass* UEEC_Consumable_HealOverTime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EEC_Consumable_HealOverTime_C");

	return Clss;
}


// EEC_Consumable_HealOverTime_C EEC_Consumable_HealOverTime.Default__EEC_Consumable_HealOverTime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEEC_Consumable_HealOverTime_C* UEEC_Consumable_HealOverTime_C::GetDefaultObj()
{
	static class UEEC_Consumable_HealOverTime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEEC_Consumable_HealOverTime_C*>(UEEC_Consumable_HealOverTime_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EEC_Consumable_HealOverTime.EEC_Consumable_HealOverTime_C.Execute
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectCustomExecutionParametersExecutionParams                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectCustomExecutionOutputOutExecutionOutput                                               (Parm, OutParm)
// class UAbilitySystemComponent*     LAbilitySystem                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          Temp_struct_Variable                                             (ConstParm, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetTargetAbilitySystemComponent_ReturnValue             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSourceAttributeMagnitude_Magnitude                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectCustomExecutionOutputCallFunc_Execute_OutExecutionOutput                              (None)
// struct FGameplayAttribute          Temp_struct_Variable_1                                           (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSourceAttributeMagnitude_Magnitude_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DamageActorOverTime_Duration_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEEC_Consumable_HealOverTime_C::Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput, class UAbilitySystemComponent* LAbilitySystem, const struct FGameplayAttribute& Temp_struct_Variable, class UAbilitySystemComponent* CallFunc_GetTargetAbilitySystemComponent_ReturnValue, float CallFunc_GetSourceAttributeMagnitude_Magnitude, const struct FGameplayEffectCustomExecutionOutput& CallFunc_Execute_OutExecutionOutput, const struct FGameplayAttribute& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSourceAttributeMagnitude_Magnitude_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_DamageActorOverTime_Duration_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EEC_Consumable_HealOverTime_C", "Execute");

	Params::UEEC_Consumable_HealOverTime_C_Execute_Params Parms{};

	Parms.ExecutionParams = ExecutionParams;
	Parms.LAbilitySystem = LAbilitySystem;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetTargetAbilitySystemComponent_ReturnValue = CallFunc_GetTargetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetSourceAttributeMagnitude_Magnitude = CallFunc_GetSourceAttributeMagnitude_Magnitude;
	Parms.CallFunc_Execute_OutExecutionOutput = CallFunc_Execute_OutExecutionOutput;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSourceAttributeMagnitude_Magnitude_1 = CallFunc_GetSourceAttributeMagnitude_Magnitude_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_DamageActorOverTime_Duration_ImplicitCast = CallFunc_DamageActorOverTime_Duration_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutExecutionOutput != nullptr)
		*OutExecutionOutput = std::move(Parms.OutExecutionOutput);

}

}


