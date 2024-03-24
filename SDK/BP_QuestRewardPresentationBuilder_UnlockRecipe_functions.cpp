#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_QuestRewardPresentationBuilder_UnlockRecipe.BP_QuestRewardPresentationBuilder_UnlockRecipe_C
// (None)

class UClass* UBP_QuestRewardPresentationBuilder_UnlockRecipe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_QuestRewardPresentationBuilder_UnlockRecipe_C");

	return Clss;
}


// BP_QuestRewardPresentationBuilder_UnlockRecipe_C BP_QuestRewardPresentationBuilder_UnlockRecipe.Default__BP_QuestRewardPresentationBuilder_UnlockRecipe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_QuestRewardPresentationBuilder_UnlockRecipe_C* UBP_QuestRewardPresentationBuilder_UnlockRecipe_C::GetDefaultObj()
{
	static class UBP_QuestRewardPresentationBuilder_UnlockRecipe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_QuestRewardPresentationBuilder_UnlockRecipe_C*>(UBP_QuestRewardPresentationBuilder_UnlockRecipe_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_QuestRewardPresentationBuilder_UnlockRecipe.BP_QuestRewardPresentationBuilder_UnlockRecipe_C.MakeQuestRewardPresentationData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URewardBehaviour*            RewardBehaviour                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FQuestRewardPresentationDataOutPresentationData                                              (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RewardBehaviour_Technique_C*K2Node_DynamicCast_AsBP_Reward_Behaviour_Technique               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSkillPresentationData      CallFunc_GetSkillPresentationData_ReturnValue                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FQuestRewardPresentationDataK2Node_MakeStruct_QuestRewardPresentationData                    (None)

bool UBP_QuestRewardPresentationBuilder_UnlockRecipe_C::MakeQuestRewardPresentationData(class URewardBehaviour* RewardBehaviour, struct FQuestRewardPresentationData* OutPresentationData, class UBP_RewardBehaviour_Technique_C* K2Node_DynamicCast_AsBP_Reward_Behaviour_Technique, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FSkillPresentationData& CallFunc_GetSkillPresentationData_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FQuestRewardPresentationData& K2Node_MakeStruct_QuestRewardPresentationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestRewardPresentationBuilder_UnlockRecipe_C", "MakeQuestRewardPresentationData");

	Params::UBP_QuestRewardPresentationBuilder_UnlockRecipe_C_MakeQuestRewardPresentationData_Params Parms{};

	Parms.RewardBehaviour = RewardBehaviour;
	Parms.K2Node_DynamicCast_AsBP_Reward_Behaviour_Technique = K2Node_DynamicCast_AsBP_Reward_Behaviour_Technique;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSkillPresentationData_ReturnValue = CallFunc_GetSkillPresentationData_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_QuestRewardPresentationData = K2Node_MakeStruct_QuestRewardPresentationData;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPresentationData != nullptr)
		*OutPresentationData = std::move(Parms.OutPresentationData);

	return Parms.ReturnValue;

}

}


