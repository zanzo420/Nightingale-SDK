#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// BlueprintGeneratedClass BP_QuestRewardPresentationBuilder_HopeGate.BP_QuestRewardPresentationBuilder_HopeGate_C
class UBP_QuestRewardPresentationBuilder_HopeGate_C : public UQuestRewardPresentationDataBuilder
{
public:
	class FText                                  Reward_Name;                                       // 0x28(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBP_QuestRewardPresentationBuilder_HopeGate_C* GetDefaultObj();

	bool MakeQuestRewardPresentationData(class URewardBehaviour* RewardBehaviour, struct FQuestRewardPresentationData* OutPresentationData, const struct FQuestRewardPresentationData& K2Node_MakeStruct_QuestRewardPresentationData);
};

}


