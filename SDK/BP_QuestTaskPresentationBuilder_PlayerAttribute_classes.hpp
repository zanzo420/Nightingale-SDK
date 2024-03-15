#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x48 - 0x48)
// BlueprintGeneratedClass BP_QuestTaskPresentationBuilder_PlayerAttribute.BP_QuestTaskPresentationBuilder_PlayerAttribute_C
class UBP_QuestTaskPresentationBuilder_PlayerAttribute_C : public UBP_QuestTaskPresentationBuilder_Base_C
{
public:

	static class UClass* StaticClass();
	static class UBP_QuestTaskPresentationBuilder_PlayerAttribute_C* GetDefaultObj();

	void GetConditionTextAndIcon(class UConditionPlayerAttribute* PlayerAttributeCondition, class FText* Result, TSoftObjectPtr<class UTexture2D>* Icon, class UAttributeUIDataRegistry* DataRegistry, const struct FGameplayAttributeUIData& CallFunc_TryGetAttributeUIData_OutData, enum class EGetResult CallFunc_TryGetAttributeUIData_OutBranches, const class FString& CallFunc_GetDebugStringFromGameplayAttribute_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_FormatTaskName_ReturnValue);
	void GetTargetValue(class UConditionPlayerAttribute* PlayerAttributeCondition, int32* TargetValue, enum class EAttributeThresholdType ThresholdType, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_FFloor_A_ImplicitCast);
	void MakePlayerAttributeConditionData(class UConditionPlayerAttribute* PlayerAttributeCondition, int32 CurrentValue, bool* Success, struct FQuestTaskConditionPresentationData* QuestTaskConditionPresentationData, int32 TargetValue, class UAttributeUIDataRegistry* DataRegistry, int32 CallFunc_GetTargetValue_TargetValue, class FText CallFunc_GetConditionTextAndIcon_Result, TSoftObjectPtr<class UTexture2D> CallFunc_GetConditionTextAndIcon_Icon, const struct FQuestTaskConditionPresentationData& K2Node_MakeStruct_QuestTaskConditionPresentationData);
	void MakeTaskConditionPresentationData(class UConditionBehaviour* Condition, int32 CurrentValue, bool* bWasCreated, struct FQuestTaskConditionPresentationData* ConditionPresentationData, class UAttributeUIDataRegistry* DataRegistry, class UConditionPlayerAttribute* K2Node_DynamicCast_AsCondition_Player_Attribute, bool K2Node_DynamicCast_bSuccess, bool CallFunc_MakePlayerAttributeConditionData_Success, const struct FQuestTaskConditionPresentationData& CallFunc_MakePlayerAttributeConditionData_QuestTaskConditionPresentationData);
};

}


