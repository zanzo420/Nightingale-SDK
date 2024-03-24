#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_QuestRewardPresentationBuilder_ItemReward.BP_QuestRewardPresentationBuilder_ItemReward_C
// (None)

class UClass* UBP_QuestRewardPresentationBuilder_ItemReward_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_QuestRewardPresentationBuilder_ItemReward_C");

	return Clss;
}


// BP_QuestRewardPresentationBuilder_ItemReward_C BP_QuestRewardPresentationBuilder_ItemReward.Default__BP_QuestRewardPresentationBuilder_ItemReward_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_QuestRewardPresentationBuilder_ItemReward_C* UBP_QuestRewardPresentationBuilder_ItemReward_C::GetDefaultObj()
{
	static class UBP_QuestRewardPresentationBuilder_ItemReward_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_QuestRewardPresentationBuilder_ItemReward_C*>(UBP_QuestRewardPresentationBuilder_ItemReward_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_QuestRewardPresentationBuilder_ItemReward.BP_QuestRewardPresentationBuilder_ItemReward_C.MakeQuestRewardPresentationData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URewardBehaviour*            RewardBehaviour                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FQuestRewardPresentationDataOutPresentationData                                              (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_RewardBehaviour_Item_C*  K2Node_DynamicCast_AsBP_Reward_Behaviour_Item                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_CreateNewItemEntry_NewEntry                             (None)
// enum class EGetResult              CallFunc_CreateNewItemEntry_OutBranch                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_ReturnValue                                 (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetItemIcon_ReturnValue                                 (UObjectWrapper, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemDescription_ReturnValue                          (None)
// struct FQuestRewardPresentationDataK2Node_MakeStruct_QuestRewardPresentationData                    (None)

bool UBP_QuestRewardPresentationBuilder_ItemReward_C::MakeQuestRewardPresentationData(class URewardBehaviour* RewardBehaviour, struct FQuestRewardPresentationData* OutPresentationData, class UBP_RewardBehaviour_Item_C* K2Node_DynamicCast_AsBP_Reward_Behaviour_Item, bool K2Node_DynamicCast_bSuccess, const struct FInventoryEntry& CallFunc_CreateNewItemEntry_NewEntry, enum class EGetResult CallFunc_CreateNewItemEntry_OutBranch, class FText CallFunc_GetItemName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_ReturnValue, class FText CallFunc_GetItemDescription_ReturnValue, const struct FQuestRewardPresentationData& K2Node_MakeStruct_QuestRewardPresentationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestRewardPresentationBuilder_ItemReward_C", "MakeQuestRewardPresentationData");

	Params::UBP_QuestRewardPresentationBuilder_ItemReward_C_MakeQuestRewardPresentationData_Params Parms{};

	Parms.RewardBehaviour = RewardBehaviour;
	Parms.K2Node_DynamicCast_AsBP_Reward_Behaviour_Item = K2Node_DynamicCast_AsBP_Reward_Behaviour_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CreateNewItemEntry_NewEntry = CallFunc_CreateNewItemEntry_NewEntry;
	Parms.CallFunc_CreateNewItemEntry_OutBranch = CallFunc_CreateNewItemEntry_OutBranch;
	Parms.CallFunc_GetItemName_ReturnValue = CallFunc_GetItemName_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemIcon_ReturnValue = CallFunc_GetItemIcon_ReturnValue;
	Parms.CallFunc_GetItemDescription_ReturnValue = CallFunc_GetItemDescription_ReturnValue;
	Parms.K2Node_MakeStruct_QuestRewardPresentationData = K2Node_MakeStruct_QuestRewardPresentationData;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPresentationData != nullptr)
		*OutPresentationData = std::move(Parms.OutPresentationData);

	return Parms.ReturnValue;

}

}


