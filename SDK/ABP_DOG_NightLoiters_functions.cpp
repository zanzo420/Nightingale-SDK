#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_DOG_NightLoiters.ABP_DOG_NightLoiters_C
// (None)

class UClass* UABP_DOG_NightLoiters_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_DOG_NightLoiters_C");

	return Clss;
}


// ABP_DOG_NightLoiters_C ABP_DOG_NightLoiters.Default__ABP_DOG_NightLoiters_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_DOG_NightLoiters_C* UABP_DOG_NightLoiters_C::GetDefaultObj()
{
	static class UABP_DOG_NightLoiters_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_DOG_NightLoiters_C*>(UABP_DOG_NightLoiters_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_DOG_NightLoiters.ABP_DOG_NightLoiters_C.LoiterBehaviour
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   LoiterBehaviour                                                  (Parm, OutParm, NoDestructor)

void UABP_DOG_NightLoiters_C::LoiterBehaviour(const struct FPoseLink& InPose, struct FPoseLink* LoiterBehaviour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DOG_NightLoiters_C", "LoiterBehaviour");

	Params::UABP_DOG_NightLoiters_C_LoiterBehaviour_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (LoiterBehaviour != nullptr)
		*LoiterBehaviour = std::move(Parms.LoiterBehaviour);

}


// Function ABP_DOG_NightLoiters.ABP_DOG_NightLoiters_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_DOG_NightLoiters_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DOG_NightLoiters_C", "AnimGraph");

	Params::UABP_DOG_NightLoiters_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_DOG_NightLoiters.ABP_DOG_NightLoiters_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DOG_NightLoiters_AnimGraphNode_TransitionResult_42CEFC0944828BC7B3C857B86DD6BBB2
// (BlueprintEvent)
// Parameters:

void UABP_DOG_NightLoiters_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DOG_NightLoiters_AnimGraphNode_TransitionResult_42CEFC0944828BC7B3C857B86DD6BBB2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DOG_NightLoiters_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DOG_NightLoiters_AnimGraphNode_TransitionResult_42CEFC0944828BC7B3C857B86DD6BBB2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_DOG_NightLoiters.ABP_DOG_NightLoiters_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DOG_NightLoiters_AnimGraphNode_TransitionResult_533ED1EE4B44F910B72E0EBB58B21719
// (BlueprintEvent)
// Parameters:

void UABP_DOG_NightLoiters_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DOG_NightLoiters_AnimGraphNode_TransitionResult_533ED1EE4B44F910B72E0EBB58B21719()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DOG_NightLoiters_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DOG_NightLoiters_AnimGraphNode_TransitionResult_533ED1EE4B44F910B72E0EBB58B21719");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_DOG_NightLoiters.ABP_DOG_NightLoiters_C.ExecuteUbergraph_ABP_DOG_NightLoiters
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRelevantAnimTimeRemaining_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_DOG_NightLoiters_C::ExecuteUbergraph_ABP_DOG_NightLoiters(int32 EntryPoint, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DOG_NightLoiters_C", "ExecuteUbergraph_ABP_DOG_NightLoiters");

	Params::UABP_DOG_NightLoiters_C_ExecuteUbergraph_ABP_DOG_NightLoiters_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRelevantAnimTimeRemaining_ReturnValue = CallFunc_GetRelevantAnimTimeRemaining_ReturnValue;
	Parms.CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1 = CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast_1 = CallFunc_Less_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


