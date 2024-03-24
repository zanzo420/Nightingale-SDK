#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_QuestRewardPresentationBuilder_ItemReward.BP_QuestRewardPresentationBuilder_ItemReward_C
class UBP_QuestRewardPresentationBuilder_ItemReward_C : public UQuestRewardPresentationDataBuilder
{
public:

	static class UClass* StaticClass();
	static class UBP_QuestRewardPresentationBuilder_ItemReward_C* GetDefaultObj();

	bool MakeQuestRewardPresentationData(class URewardBehaviour* RewardBehaviour, struct FQuestRewardPresentationData* OutPresentationData, class UBP_RewardBehaviour_Item_C* K2Node_DynamicCast_AsBP_Reward_Behaviour_Item, bool K2Node_DynamicCast_bSuccess, const struct FInventoryEntry& CallFunc_CreateNewItemEntry_NewEntry, enum class EGetResult CallFunc_CreateNewItemEntry_OutBranch, class FText CallFunc_GetItemName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_ReturnValue, class FText CallFunc_GetItemDescription_ReturnValue, const struct FQuestRewardPresentationData& K2Node_MakeStruct_QuestRewardPresentationData);
};

}


