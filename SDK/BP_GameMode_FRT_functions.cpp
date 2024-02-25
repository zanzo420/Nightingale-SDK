#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GameMode_FRT.BP_GameMode_FRT_C
// (Actor)

class UClass* ABP_GameMode_FRT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GameMode_FRT_C");

	return Clss;
}


// BP_GameMode_FRT_C BP_GameMode_FRT.Default__BP_GameMode_FRT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GameMode_FRT_C* ABP_GameMode_FRT_C::GetDefaultObj()
{
	static class ABP_GameMode_FRT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GameMode_FRT_C*>(ABP_GameMode_FRT_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GameMode_FRT.BP_GameMode_FRT_C.ResolveSimulationRound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_FRT_C::ResolveSimulationRound(bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameMode_FRT_C", "ResolveSimulationRound");

	Params::ABP_GameMode_FRT_C_ResolveSimulationRound_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BP_GameMode_FRT.BP_GameMode_FRT_C.GetSimulationStateManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXSimStateManagerBase*     Simulation_State_Manager                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_GameMode_FRT_C::GetSimulationStateManager(class ANWXSimStateManagerBase** Simulation_State_Manager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameMode_FRT_C", "GetSimulationStateManager");

	Params::ABP_GameMode_FRT_C_GetSimulationStateManager_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Simulation_State_Manager != nullptr)
		*Simulation_State_Manager = Parms.Simulation_State_Manager;

}

}


