#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_NPCFreelance_PickUpResource_Contract.AIA_Creature_NPCFreelance_PickUpResource_Contract_C
// (None)

class UClass* UAIA_Creature_NPCFreelance_PickUpResource_Contract_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_NPCFreelance_PickUpResource_Contract_C");

	return Clss;
}


// AIA_Creature_NPCFreelance_PickUpResource_Contract_C AIA_Creature_NPCFreelance_PickUpResource_Contract.Default__AIA_Creature_NPCFreelance_PickUpResource_Contract_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_NPCFreelance_PickUpResource_Contract_C* UAIA_Creature_NPCFreelance_PickUpResource_Contract_C::GetDefaultObj()
{
	static class UAIA_Creature_NPCFreelance_PickUpResource_Contract_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_NPCFreelance_PickUpResource_Contract_C*>(UAIA_Creature_NPCFreelance_PickUpResource_Contract_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIA_Creature_NPCFreelance_PickUpResource_Contract.AIA_Creature_NPCFreelance_PickUpResource_Contract_C.GetNormalizedScore
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAIA_Creature_NPCFreelance_PickUpResource_Contract_C::GetNormalizedScore(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_NPCFreelance_PickUpResource_Contract_C", "GetNormalizedScore");

	Params::UAIA_Creature_NPCFreelance_PickUpResource_Contract_C_GetNormalizedScore_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


