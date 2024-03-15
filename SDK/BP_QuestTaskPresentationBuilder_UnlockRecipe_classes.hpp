#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x48 - 0x48)
// BlueprintGeneratedClass BP_QuestTaskPresentationBuilder_UnlockRecipe.BP_QuestTaskPresentationBuilder_UnlockRecipe_C
class UBP_QuestTaskPresentationBuilder_UnlockRecipe_C : public UBP_QuestTaskPresentationBuilder_Base_C
{
public:

	static class UClass* StaticClass();
	static class UBP_QuestTaskPresentationBuilder_UnlockRecipe_C* GetDefaultObj();

	void MakeTaskConditionPresentationData(class UConditionBehaviour* Condition, int32 CurrentValue, bool* bWasCreated, struct FQuestTaskConditionPresentationData* ConditionPresentationData, class UBP_ConditionBehaviour_Skill_Unlocked_C* K2Node_DynamicCast_AsBP_Condition_Behaviour_Skill_Unlocked, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FSkillPresentationData& CallFunc_GetSkillPresentationData_ReturnValue, class FText CallFunc_FormatTaskName_ReturnValue, const struct FQuestTaskConditionPresentationData& K2Node_MakeStruct_QuestTaskConditionPresentationData);
};

}


