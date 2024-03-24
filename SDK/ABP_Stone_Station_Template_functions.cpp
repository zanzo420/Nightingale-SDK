#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Stone_Station_Template.ABP_Stone_Station_Template_C
// (None)

class UClass* UABP_Stone_Station_Template_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Stone_Station_Template_C");

	return Clss;
}


// ABP_Stone_Station_Template_C ABP_Stone_Station_Template.Default__ABP_Stone_Station_Template_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Stone_Station_Template_C* UABP_Stone_Station_Template_C::GetDefaultObj()
{
	static class UABP_Stone_Station_Template_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Stone_Station_Template_C*>(UABP_Stone_Station_Template_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Stone_Station_Template.ABP_Stone_Station_Template_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Stone_Station_Template_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Stone_Station_Template_C", "AnimGraph");

	Params::UABP_Stone_Station_Template_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Stone_Station_Template.ABP_Stone_Station_Template_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Stone_Station_Template_AnimGraphNode_TransitionResult_29600B884BC4C6B566DBD8ABECCFE2F4
// (BlueprintEvent)
// Parameters:

void UABP_Stone_Station_Template_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Stone_Station_Template_AnimGraphNode_TransitionResult_29600B884BC4C6B566DBD8ABECCFE2F4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Stone_Station_Template_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Stone_Station_Template_AnimGraphNode_TransitionResult_29600B884BC4C6B566DBD8ABECCFE2F4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Stone_Station_Template.ABP_Stone_Station_Template_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Stone_Station_Template_AnimGraphNode_TransitionResult_303A6C9140D1DF32C36395980E1174A1
// (BlueprintEvent)
// Parameters:

void UABP_Stone_Station_Template_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Stone_Station_Template_AnimGraphNode_TransitionResult_303A6C9140D1DF32C36395980E1174A1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Stone_Station_Template_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Stone_Station_Template_AnimGraphNode_TransitionResult_303A6C9140D1DF32C36395980E1174A1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Stone_Station_Template.ABP_Stone_Station_Template_C.ExecuteUbergraph_ABP_Stone_Station_Template
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Stone_Station_Template_C::ExecuteUbergraph_ABP_Stone_Station_Template(int32 EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Stone_Station_Template_C", "ExecuteUbergraph_ABP_Stone_Station_Template");

	Params::UABP_Stone_Station_Template_C_ExecuteUbergraph_ABP_Stone_Station_Template_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = CallFunc_EqualEqual_ByteByte_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


