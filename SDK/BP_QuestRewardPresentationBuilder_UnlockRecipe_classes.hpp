#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_QuestRewardPresentationBuilder_UnlockRecipe.BP_QuestRewardPresentationBuilder_UnlockRecipe_C
class UBP_QuestRewardPresentationBuilder_UnlockRecipe_C : public UQuestRewardPresentationDataBuilder
{
public:

	static class UClass* StaticClass();
	static class UBP_QuestRewardPresentationBuilder_UnlockRecipe_C* GetDefaultObj();

	bool MakeQuestRewardPresentationData(class URewardBehaviour* RewardBehaviour, struct FQuestRewardPresentationData* OutPresentationData, class UBP_RewardBehaviour_Technique_C* K2Node_DynamicCast_AsBP_Reward_Behaviour_Technique, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FSkillPresentationData& CallFunc_GetSkillPresentationData_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FQuestRewardPresentationData& K2Node_MakeStruct_QuestRewardPresentationData);
};

}


