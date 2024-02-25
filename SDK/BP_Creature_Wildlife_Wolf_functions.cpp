#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Creature_Wildlife_Wolf.BP_Creature_Wildlife_Wolf_C
// (Actor, Pawn)

class UClass* ABP_Creature_Wildlife_Wolf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Creature_Wildlife_Wolf_C");

	return Clss;
}


// BP_Creature_Wildlife_Wolf_C BP_Creature_Wildlife_Wolf.Default__BP_Creature_Wildlife_Wolf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Creature_Wildlife_Wolf_C* ABP_Creature_Wildlife_Wolf_C::GetDefaultObj()
{
	static class ABP_Creature_Wildlife_Wolf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Creature_Wildlife_Wolf_C*>(ABP_Creature_Wildlife_Wolf_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Creature_Wildlife_Wolf.BP_Creature_Wildlife_Wolf_C.Start_WP_Indicator
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Creature_Wildlife_Wolf_C::Start_WP_Indicator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Wolf_C", "Start_WP_Indicator");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_Wildlife_Wolf.BP_Creature_Wildlife_Wolf_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Socket_Root                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_Wildlife_Wolf_C::UserConstructionScript(class FName Socket_Root)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Wolf_C", "UserConstructionScript");

	Params::ABP_Creature_Wildlife_Wolf_C_UserConstructionScript_Params Parms{};

	Parms.Socket_Root = Socket_Root;

	UObject::ProcessEvent(Func, &Parms);

}

}


