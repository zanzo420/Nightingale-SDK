#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_QuestTaskPresentationBuilder_UnlockRecipe.BP_QuestTaskPresentationBuilder_UnlockRecipe_C
// (None)

class UClass* UBP_QuestTaskPresentationBuilder_UnlockRecipe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_QuestTaskPresentationBuilder_UnlockRecipe_C");

	return Clss;
}


// BP_QuestTaskPresentationBuilder_UnlockRecipe_C BP_QuestTaskPresentationBuilder_UnlockRecipe.Default__BP_QuestTaskPresentationBuilder_UnlockRecipe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_QuestTaskPresentationBuilder_UnlockRecipe_C* UBP_QuestTaskPresentationBuilder_UnlockRecipe_C::GetDefaultObj()
{
	static class UBP_QuestTaskPresentationBuilder_UnlockRecipe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_QuestTaskPresentationBuilder_UnlockRecipe_C*>(UBP_QuestTaskPresentationBuilder_UnlockRecipe_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_QuestTaskPresentationBuilder_UnlockRecipe.BP_QuestTaskPresentationBuilder_UnlockRecipe_C.MakeTaskConditionPresentationData
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UConditionBehaviour*         Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasCreated                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskConditionPresentationDataConditionPresentationData                                        (Parm, OutParm)
// class UBP_ConditionBehaviour_Skill_Unlocked_C*K2Node_DynamicCast_AsBP_Condition_Behaviour_Skill_Unlocked       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSkillPresentationData      CallFunc_GetSkillPresentationData_ReturnValue                    (None)
// class FText                        CallFunc_FormatTaskName_ReturnValue                              (None)
// struct FQuestTaskConditionPresentationDataK2Node_MakeStruct_QuestTaskConditionPresentationData             (None)

void UBP_QuestTaskPresentationBuilder_UnlockRecipe_C::MakeTaskConditionPresentationData(class UConditionBehaviour* Condition, int32 CurrentValue, bool* bWasCreated, struct FQuestTaskConditionPresentationData* ConditionPresentationData, class UBP_ConditionBehaviour_Skill_Unlocked_C* K2Node_DynamicCast_AsBP_Condition_Behaviour_Skill_Unlocked, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FSkillPresentationData& CallFunc_GetSkillPresentationData_ReturnValue, class FText CallFunc_FormatTaskName_ReturnValue, const struct FQuestTaskConditionPresentationData& K2Node_MakeStruct_QuestTaskConditionPresentationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestTaskPresentationBuilder_UnlockRecipe_C", "MakeTaskConditionPresentationData");

	Params::UBP_QuestTaskPresentationBuilder_UnlockRecipe_C_MakeTaskConditionPresentationData_Params Parms{};

	Parms.Condition = Condition;
	Parms.CurrentValue = CurrentValue;
	Parms.K2Node_DynamicCast_AsBP_Condition_Behaviour_Skill_Unlocked = K2Node_DynamicCast_AsBP_Condition_Behaviour_Skill_Unlocked;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSkillPresentationData_ReturnValue = CallFunc_GetSkillPresentationData_ReturnValue;
	Parms.CallFunc_FormatTaskName_ReturnValue = CallFunc_FormatTaskName_ReturnValue;
	Parms.K2Node_MakeStruct_QuestTaskConditionPresentationData = K2Node_MakeStruct_QuestTaskConditionPresentationData;

	UObject::ProcessEvent(Func, &Parms);

	if (bWasCreated != nullptr)
		*bWasCreated = Parms.bWasCreated;

	if (ConditionPresentationData != nullptr)
		*ConditionPresentationData = std::move(Parms.ConditionPresentationData);

}

}


