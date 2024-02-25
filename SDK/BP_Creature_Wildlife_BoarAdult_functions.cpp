#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Creature_Wildlife_BoarAdult.BP_Creature_Wildlife_BoarAdult_C
// (Actor, Pawn)

class UClass* ABP_Creature_Wildlife_BoarAdult_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Creature_Wildlife_BoarAdult_C");

	return Clss;
}


// BP_Creature_Wildlife_BoarAdult_C BP_Creature_Wildlife_BoarAdult.Default__BP_Creature_Wildlife_BoarAdult_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Creature_Wildlife_BoarAdult_C* ABP_Creature_Wildlife_BoarAdult_C::GetDefaultObj()
{
	static class ABP_Creature_Wildlife_BoarAdult_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Creature_Wildlife_BoarAdult_C*>(ABP_Creature_Wildlife_BoarAdult_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Creature_Wildlife_BoarAdult.BP_Creature_Wildlife_BoarAdult_C.Start_WP_Indicator
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Creature_Wildlife_BoarAdult_C::Start_WP_Indicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_BoarAdult_C", "Start_WP_Indicator");



	UObject::ProcessEvent(Func, nullptr);

}

}


