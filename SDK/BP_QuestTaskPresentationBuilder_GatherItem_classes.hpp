#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x48 - 0x48)
// BlueprintGeneratedClass BP_QuestTaskPresentationBuilder_GatherItem.BP_QuestTaskPresentationBuilder_GatherItem_C
class UBP_QuestTaskPresentationBuilder_GatherItem_C : public UBP_QuestTaskPresentationBuilder_Base_C
{
public:

	static class UClass* StaticClass();
	static class UBP_QuestTaskPresentationBuilder_GatherItem_C* GetDefaultObj();

	void MakeTaskConditionPresentationData(class UConditionBehaviour* Condition, int32 CurrentValue, bool* bWasCreated, struct FQuestTaskConditionPresentationData* ConditionPresentationData, int32 TargetValue, const struct FQuestTaskConditionPresentationData& CurrentPresentationData, const struct FQuestTaskConditionPresentationData& K2Node_MakeStruct_QuestTaskConditionPresentationData, class UBP_ConditionBehaviour_Item_Acquired_Constraint_C* K2Node_DynamicCast_AsBP_Condition_Behaviour_Item_Acquired_Constraint, bool K2Node_DynamicCast_bSuccess, const struct FItemConstraintPresentationData& CallFunc_GetItemConstraintUIData_OutPresentationData, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue, class FText CallFunc_FormatTaskName_ReturnValue);
};

}


