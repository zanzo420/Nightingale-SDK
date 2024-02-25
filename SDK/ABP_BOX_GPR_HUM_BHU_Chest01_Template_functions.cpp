#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_BOX_GPR_HUM_BHU_Chest01_Template.ABP_BOX_GPR_HUM_BHU_Chest01_Template_C
// (None)

class UClass* UABP_BOX_GPR_HUM_BHU_Chest01_Template_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_BOX_GPR_HUM_BHU_Chest01_Template_C");

	return Clss;
}


// ABP_BOX_GPR_HUM_BHU_Chest01_Template_C ABP_BOX_GPR_HUM_BHU_Chest01_Template.Default__ABP_BOX_GPR_HUM_BHU_Chest01_Template_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_BOX_GPR_HUM_BHU_Chest01_Template_C* UABP_BOX_GPR_HUM_BHU_Chest01_Template_C::GetDefaultObj()
{
	static class UABP_BOX_GPR_HUM_BHU_Chest01_Template_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_BOX_GPR_HUM_BHU_Chest01_Template_C*>(UABP_BOX_GPR_HUM_BHU_Chest01_Template_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_BOX_GPR_HUM_BHU_Chest01_Template.ABP_BOX_GPR_HUM_BHU_Chest01_Template_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_BOX_GPR_HUM_BHU_Chest01_Template_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_BOX_GPR_HUM_BHU_Chest01_Template_C", "AnimGraph");

	Params::UABP_BOX_GPR_HUM_BHU_Chest01_Template_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_BOX_GPR_HUM_BHU_Chest01_Template.ABP_BOX_GPR_HUM_BHU_Chest01_Template_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BOX_GPR_HUM_BHU_Chest01_Template_AnimGraphNode_TransitionResult_3AE8E61F4E6FD16B0410318B12350C60
// (BlueprintEvent)
// Parameters:

void UABP_BOX_GPR_HUM_BHU_Chest01_Template_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BOX_GPR_HUM_BHU_Chest01_Template_AnimGraphNode_TransitionResult_3AE8E61F4E6FD16B0410318B12350C60()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_BOX_GPR_HUM_BHU_Chest01_Template_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BOX_GPR_HUM_BHU_Chest01_Template_AnimGraphNode_TransitionResult_3AE8E61F4E6FD16B0410318B12350C60");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_BOX_GPR_HUM_BHU_Chest01_Template.ABP_BOX_GPR_HUM_BHU_Chest01_Template_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BOX_GPR_HUM_BHU_Chest01_Template_AnimGraphNode_TransitionResult_F60AA75149EADC2B415559AD113A885D
// (BlueprintEvent)
// Parameters:

void UABP_BOX_GPR_HUM_BHU_Chest01_Template_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BOX_GPR_HUM_BHU_Chest01_Template_AnimGraphNode_TransitionResult_F60AA75149EADC2B415559AD113A885D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_BOX_GPR_HUM_BHU_Chest01_Template_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BOX_GPR_HUM_BHU_Chest01_Template_AnimGraphNode_TransitionResult_F60AA75149EADC2B415559AD113A885D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_BOX_GPR_HUM_BHU_Chest01_Template.ABP_BOX_GPR_HUM_BHU_Chest01_Template_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BOX_GPR_HUM_BHU_Chest01_Template_AnimGraphNode_TransitionResult_C4363F98475A65848CBD57A430ED81DD
// (BlueprintEvent)
// Parameters:

void UABP_BOX_GPR_HUM_BHU_Chest01_Template_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BOX_GPR_HUM_BHU_Chest01_Template_AnimGraphNode_TransitionResult_C4363F98475A65848CBD57A430ED81DD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_BOX_GPR_HUM_BHU_Chest01_Template_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BOX_GPR_HUM_BHU_Chest01_Template_AnimGraphNode_TransitionResult_C4363F98475A65848CBD57A430ED81DD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_BOX_GPR_HUM_BHU_Chest01_Template.ABP_BOX_GPR_HUM_BHU_Chest01_Template_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_BOX_GPR_HUM_BHU_Chest01_Template_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_BOX_GPR_HUM_BHU_Chest01_Template_C", "BlueprintUpdateAnimation");

	Params::UABP_BOX_GPR_HUM_BHU_Chest01_Template_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_BOX_GPR_HUM_BHU_Chest01_Template.ABP_BOX_GPR_HUM_BHU_Chest01_Template_C.ExecuteUbergraph_ABP_BOX_GPR_HUM_BHU_Chest01_Template
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_BOX_GPR_HUM_BHU_Chest01_Template_C::ExecuteUbergraph_ABP_BOX_GPR_HUM_BHU_Chest01_Template(int32 EntryPoint, float K2Node_Event_DeltaTimeX, float CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_BOX_GPR_HUM_BHU_Chest01_Template_C", "ExecuteUbergraph_ABP_BOX_GPR_HUM_BHU_Chest01_Template");

	Params::UABP_BOX_GPR_HUM_BHU_Chest01_Template_C_ExecuteUbergraph_ABP_BOX_GPR_HUM_BHU_Chest01_Template_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue = CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


