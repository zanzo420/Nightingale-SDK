#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_DemonDeer_Exit.GA_CreatureAbility_DemonDeer_Exit_C
// (None)

class UClass* UGA_CreatureAbility_DemonDeer_Exit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_DemonDeer_Exit_C");

	return Clss;
}


// GA_CreatureAbility_DemonDeer_Exit_C GA_CreatureAbility_DemonDeer_Exit.Default__GA_CreatureAbility_DemonDeer_Exit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_DemonDeer_Exit_C* UGA_CreatureAbility_DemonDeer_Exit_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_DemonDeer_Exit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_DemonDeer_Exit_C*>(UGA_CreatureAbility_DemonDeer_Exit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_DemonDeer_Exit.GA_CreatureAbility_DemonDeer_Exit_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_CreatureAbility_DemonDeer_Exit_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_DemonDeer_Exit_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_CreatureAbility_DemonDeer_Exit.GA_CreatureAbility_DemonDeer_Exit_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_DemonDeer_Exit_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_DemonDeer_Exit_C", "K2_OnEndAbility");

	Params::UGA_CreatureAbility_DemonDeer_Exit_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAbility_DemonDeer_Exit.GA_CreatureAbility_DemonDeer_Exit_C.ExecuteUbergraph_GA_CreatureAbility_DemonDeer_Exit
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStatusEffectAccessInterface>CallFunc_ApplyInfiniteStatusEffect_self_CastInput                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectHandle         CallFunc_ApplyInfiniteStatusEffect_ActiveStatusEffectHandle      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ApplyInfiniteStatusEffect_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_DemonDeer_Exit_C::ExecuteUbergraph_GA_CreatureAbility_DemonDeer_Exit(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, TScriptInterface<class IStatusEffectAccessInterface> CallFunc_ApplyInfiniteStatusEffect_self_CastInput, const struct FStatusEffectHandle& CallFunc_ApplyInfiniteStatusEffect_ActiveStatusEffectHandle, bool CallFunc_ApplyInfiniteStatusEffect_ReturnValue, bool K2Node_Event_bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_DemonDeer_Exit_C", "ExecuteUbergraph_GA_CreatureAbility_DemonDeer_Exit");

	Params::UGA_CreatureAbility_DemonDeer_Exit_C_ExecuteUbergraph_GA_CreatureAbility_DemonDeer_Exit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_ApplyInfiniteStatusEffect_self_CastInput = CallFunc_ApplyInfiniteStatusEffect_self_CastInput;
	Parms.CallFunc_ApplyInfiniteStatusEffect_ActiveStatusEffectHandle = CallFunc_ApplyInfiniteStatusEffect_ActiveStatusEffectHandle;
	Parms.CallFunc_ApplyInfiniteStatusEffect_ReturnValue = CallFunc_ApplyInfiniteStatusEffect_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}

}

