#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_DOG_DayLoiters.ABP_DOG_DayLoiters_C
// (None)

class UClass* UABP_DOG_DayLoiters_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_DOG_DayLoiters_C");

	return Clss;
}


// ABP_DOG_DayLoiters_C ABP_DOG_DayLoiters.Default__ABP_DOG_DayLoiters_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_DOG_DayLoiters_C* UABP_DOG_DayLoiters_C::GetDefaultObj()
{
	static class UABP_DOG_DayLoiters_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_DOG_DayLoiters_C*>(UABP_DOG_DayLoiters_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_DOG_DayLoiters.ABP_DOG_DayLoiters_C.LoiterBehaviour
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   LoiterBehaviour                                                  (Parm, OutParm, NoDestructor)

void UABP_DOG_DayLoiters_C::LoiterBehaviour(const struct FPoseLink& InPose, struct FPoseLink* LoiterBehaviour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DOG_DayLoiters_C", "LoiterBehaviour");

	Params::UABP_DOG_DayLoiters_C_LoiterBehaviour_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (LoiterBehaviour != nullptr)
		*LoiterBehaviour = std::move(Parms.LoiterBehaviour);

}


// Function ABP_DOG_DayLoiters.ABP_DOG_DayLoiters_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_DOG_DayLoiters_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DOG_DayLoiters_C", "AnimGraph");

	Params::UABP_DOG_DayLoiters_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_DOG_DayLoiters.ABP_DOG_DayLoiters_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DOG_DayLoiters_AnimGraphNode_TransitionResult_E1AF473B4E19D282B7BE0B873B8DD864
// (BlueprintEvent)
// Parameters:

void UABP_DOG_DayLoiters_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DOG_DayLoiters_AnimGraphNode_TransitionResult_E1AF473B4E19D282B7BE0B873B8DD864()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DOG_DayLoiters_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DOG_DayLoiters_AnimGraphNode_TransitionResult_E1AF473B4E19D282B7BE0B873B8DD864");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_DOG_DayLoiters.ABP_DOG_DayLoiters_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DOG_DayLoiters_AnimGraphNode_TransitionResult_8A988AF346FCB7B3C067AB897F1B064B
// (BlueprintEvent)
// Parameters:

void UABP_DOG_DayLoiters_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DOG_DayLoiters_AnimGraphNode_TransitionResult_8A988AF346FCB7B3C067AB897F1B064B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DOG_DayLoiters_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DOG_DayLoiters_AnimGraphNode_TransitionResult_8A988AF346FCB7B3C067AB897F1B064B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_DOG_DayLoiters.ABP_DOG_DayLoiters_C.ExecuteUbergraph_ABP_DOG_DayLoiters
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRelevantAnimTimeRemaining_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_DOG_DayLoiters_C::ExecuteUbergraph_ABP_DOG_DayLoiters(int32 EntryPoint, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_DOG_DayLoiters_C", "ExecuteUbergraph_ABP_DOG_DayLoiters");

	Params::UABP_DOG_DayLoiters_C_ExecuteUbergraph_ABP_DOG_DayLoiters_Params Parms{};

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


