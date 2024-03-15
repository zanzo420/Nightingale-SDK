#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x60 - 0x30)
// BlueprintGeneratedClass BP_RewardBehaviour_TutorialModalPopup.BP_RewardBehaviour_TutorialModalPopup_C
class UBP_RewardBehaviour_TutorialModalPopup_C : public UBP_RewardBehaviour_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftObjectPtr<class UTutorialDataAsset_SlideDeck> TutorialData;                                      // 0x38(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_RewardBehaviour_TutorialModalPopup_C* GetDefaultObj();

	void LoadData(class UTutorialDataAsset_SlideDeck** LoadedData, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTutorialDataAsset_SlideDeck* K2Node_DynamicCast_AsTutorial_Data_Asset_Slide_Deck, bool K2Node_DynamicCast_bSuccess);
	void GrantHintPopupReward(class APlayerState* PlayerState, class UObject* ContextObject, class UTutorialDataAsset_SlideDeck* TutorialData, class UBP_TutorialComponent_C* CallFunc_GetComponentByClass_ReturnValue, const struct FGuid& CallFunc_GetUID_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue, const struct FMetricsEventAttr& K2Node_MakeStruct_MetricsEventAttr, TArray<struct FMetricsEventAttr>& K2Node_MakeArray_Array, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess);
	void ApplyReward(class APlayerState* PlayerState, class UObject* SenderContextObject);
	void ExecuteUbergraph_BP_RewardBehaviour_TutorialModalPopup(int32 EntryPoint, class UTutorialDataAsset_SlideDeck* CallFunc_LoadData_LoadedData, class APlayerState* K2Node_Event_PlayerState, class UObject* K2Node_Event_SenderContextObject);
};

}


