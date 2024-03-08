#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Swordsman_Dual__Dynamics.ABP_Swordsman_Dual__Dynamics_C
// (None)

class UClass* UABP_Swordsman_Dual__Dynamics_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Swordsman_Dual__Dynamics_C");

	return Clss;
}


// ABP_Swordsman_Dual__Dynamics_C ABP_Swordsman_Dual__Dynamics.Default__ABP_Swordsman_Dual__Dynamics_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Swordsman_Dual__Dynamics_C* UABP_Swordsman_Dual__Dynamics_C::GetDefaultObj()
{
	static class UABP_Swordsman_Dual__Dynamics_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Swordsman_Dual__Dynamics_C*>(UABP_Swordsman_Dual__Dynamics_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Swordsman_Dual__Dynamics.ABP_Swordsman_Dual__Dynamics_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Swordsman_Dual__Dynamics_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Swordsman_Dual__Dynamics_C", "AnimGraph");

	Params::UABP_Swordsman_Dual__Dynamics_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Swordsman_Dual__Dynamics.ABP_Swordsman_Dual__Dynamics_C.ExecuteUbergraph_ABP_Swordsman_Dual__Dynamics
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Swordsman_Dual__Dynamics_C::ExecuteUbergraph_ABP_Swordsman_Dual__Dynamics(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Swordsman_Dual__Dynamics_C", "ExecuteUbergraph_ABP_Swordsman_Dual__Dynamics");

	Params::UABP_Swordsman_Dual__Dynamics_C_ExecuteUbergraph_ABP_Swordsman_Dual__Dynamics_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


