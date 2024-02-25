#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EEC_Consumable_HealInjuries.EEC_Consumable_HealInjuries_C
// (None)

class UClass* UEEC_Consumable_HealInjuries_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EEC_Consumable_HealInjuries_C");

	return Clss;
}


// EEC_Consumable_HealInjuries_C EEC_Consumable_HealInjuries.Default__EEC_Consumable_HealInjuries_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEEC_Consumable_HealInjuries_C* UEEC_Consumable_HealInjuries_C::GetDefaultObj()
{
	static class UEEC_Consumable_HealInjuries_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEEC_Consumable_HealInjuries_C*>(UEEC_Consumable_HealInjuries_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EEC_Consumable_HealInjuries.EEC_Consumable_HealInjuries_C.Execute
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectCustomExecutionParametersExecutionParams                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectCustomExecutionOutputOutExecutionOutput                                               (Parm, OutParm)
// class AActor*                      LOwner                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     LAbilitySystem                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetTargetAbilitySystemComponent_ReturnValue             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectCustomExecutionOutputCallFunc_Execute_OutExecutionOutput                              (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStatusEffectAccessInterface>K2Node_DynamicCast_AsStatus_Effect_Access_Interface              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStatusEffectAccessInterface>K2Node_DynamicCast_AsStatus_Effect_Access_Interface_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UEEC_Consumable_HealInjuries_C::Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput, class AActor* LOwner, class UAbilitySystemComponent* LAbilitySystem, class UAbilitySystemComponent* CallFunc_GetTargetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEffectCustomExecutionOutput& CallFunc_Execute_OutExecutionOutput, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RemoveStatusEffect_ReturnValue, TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_RemoveStatusEffect_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EEC_Consumable_HealInjuries_C", "Execute");

	Params::UEEC_Consumable_HealInjuries_C_Execute_Params Parms{};

	Parms.ExecutionParams = ExecutionParams;
	Parms.LOwner = LOwner;
	Parms.LAbilitySystem = LAbilitySystem;
	Parms.CallFunc_GetTargetAbilitySystemComponent_ReturnValue = CallFunc_GetTargetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Execute_OutExecutionOutput = CallFunc_Execute_OutExecutionOutput;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsStatus_Effect_Access_Interface = K2Node_DynamicCast_AsStatus_Effect_Access_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatus_Effect_Access_Interface_1 = K2Node_DynamicCast_AsStatus_Effect_Access_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue_1 = CallFunc_RemoveStatusEffect_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutExecutionOutput != nullptr)
		*OutExecutionOutput = std::move(Parms.OutExecutionOutput);

}

}


