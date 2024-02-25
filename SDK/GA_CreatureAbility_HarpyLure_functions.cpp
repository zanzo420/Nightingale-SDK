#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_HarpyLure.GA_CreatureAbility_HarpyLure_C
// (None)

class UClass* UGA_CreatureAbility_HarpyLure_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_HarpyLure_C");

	return Clss;
}


// GA_CreatureAbility_HarpyLure_C GA_CreatureAbility_HarpyLure.Default__GA_CreatureAbility_HarpyLure_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_HarpyLure_C* UGA_CreatureAbility_HarpyLure_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_HarpyLure_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_HarpyLure_C*>(UGA_CreatureAbility_HarpyLure_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_HarpyLure.GA_CreatureAbility_HarpyLure_C.CreatureAbilityActivate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FGameplayTagContainer       Temp_struct_Variable_1                                           (ConstParm)
// struct FTagValueContainer          Temp_struct_Variable_2                                           (ConstParm)
// TArray<struct FGameplayEffectCue>  Temp_struct_Variable_3                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIActionComponent*          CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetCurrentTarget_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IDamageEventInterface>K2Node_DynamicCast_AsDamage_Event_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTagValueContainer          CallFunc_DamageActor_AggregatedDamageTags                        (None)

void UGA_CreatureAbility_HarpyLure_C::CreatureAbilityActivate(bool* bSuccess, const struct FHitResult& Temp_struct_Variable, const struct FGameplayTagContainer& Temp_struct_Variable_1, const struct FTagValueContainer& Temp_struct_Variable_2, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_3, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetCurrentTarget_ReturnValue, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_3, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_HarpyLure_C", "CreatureAbilityActivate");

	Params::UGA_CreatureAbility_HarpyLure_C_CreatureAbilityActivate_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetCurrentTarget_ReturnValue = CallFunc_GetCurrentTarget_ReturnValue;
	Parms.K2Node_DynamicCast_AsDamage_Event_Interface = K2Node_DynamicCast_AsDamage_Event_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_DamageActor_AggregatedDamageTags = CallFunc_DamageActor_AggregatedDamageTags;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}

}


