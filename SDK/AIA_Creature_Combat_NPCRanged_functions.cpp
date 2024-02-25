#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_Combat_NPCRanged.AIA_Creature_Combat_NPCRanged_C
// (None)

class UClass* UAIA_Creature_Combat_NPCRanged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_Combat_NPCRanged_C");

	return Clss;
}


// AIA_Creature_Combat_NPCRanged_C AIA_Creature_Combat_NPCRanged.Default__AIA_Creature_Combat_NPCRanged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_Combat_NPCRanged_C* UAIA_Creature_Combat_NPCRanged_C::GetDefaultObj()
{
	static class UAIA_Creature_Combat_NPCRanged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_Combat_NPCRanged_C*>(UAIA_Creature_Combat_NPCRanged_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIA_Creature_Combat_NPCRanged.AIA_Creature_Combat_NPCRanged_C.Stop
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAIA_Creature_Combat_NPCRanged_C::Stop(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_NPCRanged_C", "Stop");

	Params::UAIA_Creature_Combat_NPCRanged_C_Stop_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIA_Creature_Combat_NPCRanged.AIA_Creature_Combat_NPCRanged_C.ExecuteUbergraph_AIA_Creature_Combat_NPCRanged
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Target                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAIA_Creature_Combat_NPCRanged_C::ExecuteUbergraph_AIA_Creature_Combat_NPCRanged(int32 EntryPoint, class AActor* K2Node_Event_Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_NPCRanged_C", "ExecuteUbergraph_AIA_Creature_Combat_NPCRanged");

	Params::UAIA_Creature_Combat_NPCRanged_C_ExecuteUbergraph_AIA_Creature_Combat_NPCRanged_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Target = K2Node_Event_Target;

	UObject::ProcessEvent(Func, &Parms);

}

}


