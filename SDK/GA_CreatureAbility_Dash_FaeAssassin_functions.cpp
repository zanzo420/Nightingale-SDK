#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_Dash_FaeAssassin.GA_CreatureAbility_Dash_FaeAssassin_C
// (None)

class UClass* UGA_CreatureAbility_Dash_FaeAssassin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_Dash_FaeAssassin_C");

	return Clss;
}


// GA_CreatureAbility_Dash_FaeAssassin_C GA_CreatureAbility_Dash_FaeAssassin.Default__GA_CreatureAbility_Dash_FaeAssassin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_Dash_FaeAssassin_C* UGA_CreatureAbility_Dash_FaeAssassin_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_Dash_FaeAssassin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_Dash_FaeAssassin_C*>(UGA_CreatureAbility_Dash_FaeAssassin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_Dash_FaeAssassin.GA_CreatureAbility_Dash_FaeAssassin_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_CreatureAbility_Dash_FaeAssassin_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Dash_FaeAssassin_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_CreatureAbility_Dash_FaeAssassin.GA_CreatureAbility_Dash_FaeAssassin_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Dash_FaeAssassin_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Dash_FaeAssassin_C", "K2_OnEndAbility");

	Params::UGA_CreatureAbility_Dash_FaeAssassin_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAbility_Dash_FaeAssassin.GA_CreatureAbility_Dash_FaeAssassin_C.ExecuteUbergraph_GA_CreatureAbility_Dash_FaeAssassin
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Dash_FaeAssassin_C::ExecuteUbergraph_GA_CreatureAbility_Dash_FaeAssassin(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, bool K2Node_Event_bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Dash_FaeAssassin_C", "ExecuteUbergraph_GA_CreatureAbility_Dash_FaeAssassin");

	Params::UGA_CreatureAbility_Dash_FaeAssassin_C_ExecuteUbergraph_GA_CreatureAbility_Dash_FaeAssassin_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}

}


