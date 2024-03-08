#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade.GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_C
// (None)

class UClass* UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_C");

	return Clss;
}


// GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_C GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade.Default__GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_C* UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_C*>(UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade.GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade.GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_C.ExecuteUbergraph_GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_C::ExecuteUbergraph_GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_C", "ExecuteUbergraph_GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade");

	Params::UGA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_C_ExecuteUbergraph_GA_CreatureAbility_Ranged_FaeAssassin_ReturningBlade_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


