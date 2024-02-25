#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_AbeyancePedestal_Template.ABP_AbeyancePedestal_Template_C
// (None)

class UClass* UABP_AbeyancePedestal_Template_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_AbeyancePedestal_Template_C");

	return Clss;
}


// ABP_AbeyancePedestal_Template_C ABP_AbeyancePedestal_Template.Default__ABP_AbeyancePedestal_Template_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_AbeyancePedestal_Template_C* UABP_AbeyancePedestal_Template_C::GetDefaultObj()
{
	static class UABP_AbeyancePedestal_Template_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_AbeyancePedestal_Template_C*>(UABP_AbeyancePedestal_Template_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_AbeyancePedestal_Template.ABP_AbeyancePedestal_Template_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_AbeyancePedestal_Template_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AbeyancePedestal_Template_C", "AnimGraph");

	Params::UABP_AbeyancePedestal_Template_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_AbeyancePedestal_Template.ABP_AbeyancePedestal_Template_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AbeyancePedestal_Template_AnimGraphNode_TransitionResult_CF7CBEA5430730C513BD63924A901F84
// (BlueprintEvent)
// Parameters:

void UABP_AbeyancePedestal_Template_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AbeyancePedestal_Template_AnimGraphNode_TransitionResult_CF7CBEA5430730C513BD63924A901F84()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AbeyancePedestal_Template_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AbeyancePedestal_Template_AnimGraphNode_TransitionResult_CF7CBEA5430730C513BD63924A901F84");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_AbeyancePedestal_Template.ABP_AbeyancePedestal_Template_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AbeyancePedestal_Template_AnimGraphNode_TransitionResult_9F3909F448362D48572D14AED16CB3D8
// (BlueprintEvent)
// Parameters:

void UABP_AbeyancePedestal_Template_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AbeyancePedestal_Template_AnimGraphNode_TransitionResult_9F3909F448362D48572D14AED16CB3D8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AbeyancePedestal_Template_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AbeyancePedestal_Template_AnimGraphNode_TransitionResult_9F3909F448362D48572D14AED16CB3D8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_AbeyancePedestal_Template.ABP_AbeyancePedestal_Template_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AbeyancePedestal_Template_AnimGraphNode_TransitionResult_8E46F55F42376983E6A68895DE7D32E8
// (BlueprintEvent)
// Parameters:

void UABP_AbeyancePedestal_Template_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AbeyancePedestal_Template_AnimGraphNode_TransitionResult_8E46F55F42376983E6A68895DE7D32E8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AbeyancePedestal_Template_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AbeyancePedestal_Template_AnimGraphNode_TransitionResult_8E46F55F42376983E6A68895DE7D32E8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_AbeyancePedestal_Template.ABP_AbeyancePedestal_Template_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AbeyancePedestal_Template_AnimGraphNode_TransitionResult_87F5B74E4B3682A9E76A28A9C7691C75
// (BlueprintEvent)
// Parameters:

void UABP_AbeyancePedestal_Template_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AbeyancePedestal_Template_AnimGraphNode_TransitionResult_87F5B74E4B3682A9E76A28A9C7691C75()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AbeyancePedestal_Template_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AbeyancePedestal_Template_AnimGraphNode_TransitionResult_87F5B74E4B3682A9E76A28A9C7691C75");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_AbeyancePedestal_Template.ABP_AbeyancePedestal_Template_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_AbeyancePedestal_Template_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AbeyancePedestal_Template_C", "BlueprintUpdateAnimation");

	Params::UABP_AbeyancePedestal_Template_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_AbeyancePedestal_Template.ABP_AbeyancePedestal_Template_C.ExecuteUbergraph_ABP_AbeyancePedestal_Template
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRelevantAnimTimeRemaining_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_AbeyancePedestal_Template_C::ExecuteUbergraph_ABP_AbeyancePedestal_Template(int32 EntryPoint, float K2Node_Event_DeltaTimeX, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AbeyancePedestal_Template_C", "ExecuteUbergraph_ABP_AbeyancePedestal_Template");

	Params::UABP_AbeyancePedestal_Template_C_ExecuteUbergraph_ABP_AbeyancePedestal_Template_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetRelevantAnimTimeRemaining_ReturnValue = CallFunc_GetRelevantAnimTimeRemaining_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


