#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x258 (0x5A0 - 0x348)
// WidgetBlueprintGeneratedClass WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C
class UWBP_sw_ContractDetailPane_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_Paper;                                      // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Quest;                                         // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Track_Add;                                     // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Track_Remove;                                  // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonHierarchicalScrollBox*          CommonScrollBox;                                   // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_424;                                         // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_taskBanner;                                    // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Requirements;                                      // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RichTextBlock_description;                         // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Tasks;                                             // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          TrackButtonBox;                                    // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_ContractHeader;                                // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_contractType;                                  // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_essence;                                       // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_essenceCostValue;                              // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_essenceLabel_qualifyingtypes;                  // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_essenceLabel_qualifyingtypes_1;                // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_objectivesPlaceholder;                         // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_requiredTasksLabel;                            // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_requiredTasksLabel_1;                          // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_rewardslabel;                                  // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Details_Rewards;                                // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Vb_TaskBox;                                        // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_Contract_StateType              ContractState;                                     // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_52D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x410(0xB0)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         IsJournal;                                         // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_52D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            QuestAccepted;                                     // 0x4C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsExchange;                                        // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFaction                          Faction;                                           // 0x4D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsShop;                                            // 0x4DA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_52D2[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FShopOfferPresentation                ShopOffer;                                         // 0x4E0(0xC0)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWBP_sw_ContractDetailPane_C* GetDefaultObj();

	void UntrackQuest(class UBP_HUDGoalTrackingComponent_C* HudGoalComponent, class UQuestTrackerComponent* QuestTracker, class ANWXPlayerController* PlayerController, class FName Quest, const struct FQuestAssetReference& QuestReference, bool CallFunc_IsValid_ReturnValue, class UQuestTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, class FName CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue, bool CallFunc_RemoveQuestTrack_bWasRemoved, class UBP_HUDGoalTrackingComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue);
	void TrackQuest(class UBP_HUDGoalTrackingComponent_C* HudGoalComponent, class ANWXPlayerController* PlayerController, class UQuestTrackerComponent* QuestTracker, class FName Quest, bool CallFunc_IsValid_ReturnValue, class UQuestTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_AddQuestTrack_bWasAdded, class UBP_HUDGoalTrackingComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue, class FName CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue);
	void ShopPurchaseResponse(int32 TransactionID, enum class EShopTransactionResponse TransactionResponse, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void SetIsShopAndShopOffer(bool IsShop, const struct FShopOfferPresentation& ShopOffer);
	void RequestPurchase(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class UShopPurchaserComponent* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IShopInteractionModel> CallFunc_GetShopInteractionSessionModel_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_RequestPurchase_ReturnValue);
	void UpdateButtonEnabled(class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, bool CallFunc_CanTaskBeHandedIn_ReturnValue);
	void GetInstanceIdsandQuantitiesfromEntries(TArray<struct FInventoryEntry>& Entries, TArray<struct FInventoryEntryIdAndQuantity>* InstanceIdsAndQuantities, const TArray<struct FInventoryEntryIdAndQuantity>& OutInstanceIdsAndQuantities, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FInventoryEntryIdAndQuantity& K2Node_MakeStruct_InventoryEntryIdAndQuantity, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void ShouldOpenItemSelectWindow(struct FPlayerTask& Task, TArray<struct FInventoryEntry>& AllQuestItems, bool* ShouldOpenWindow, const TArray<struct FItemConstraint>& AllItemConstraints, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FItemConstraint& CallFunc_Array_Get_Item, TArray<struct FItemConstraint>& CallFunc_GetTaskItemConstraints_OutItemConstraints, TArray<struct FInventoryEntry>& CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint, TArray<struct FInventoryEntry>& CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnItemsConfirmed(class UWBP_ContractReturn_ItemSelect_C* ItemSelectWidget, TScriptInterface<class IQuestTrackerInterface> QuestTrackerInterface, TArray<struct FInventoryEntryIdAndQuantity>& CallFunc_GetSelectedItemIdAndQuantities_IdAndQuantities);
	void OnItemSelectWindowClosed(class UNWXCommonWindowWidget* Window, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_ContractReturn_ItemSelect_C* K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void SubmitItems(TArray<struct FInventoryEntryIdAndQuantity>& ItemIdAndQuantities, TScriptInterface<class IQuestTrackerInterface> QuestTrackerInterface, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue);
	void HandleItemTurnIn(const struct FPlayerTask& Task, const TArray<struct FInventoryEntry>& PotentialInventoryItems, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, class UWBP_ContractReturn_ItemSelect_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, bool CallFunc_ShouldOpenItemSelectWindow_ShouldOpenWindow, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<struct FInventoryEntryIdAndQuantity>& CallFunc_GetInstanceIdsandQuantitiesfromEntries_InstanceIdsAndQuantities, TArray<struct FInventoryEntry>& CallFunc_GetTaskTurnInItemsFromPlayerInventory_OutInventoryItems, bool CallFunc_GetTaskTurnInItemsFromPlayerInventory_ReturnValue);
	void CompleteQuest(const struct FPlayerTask& PlayerTask, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, bool CallFunc_DoesTaskNeedItemsToTurnIn_ReturnValue);
	void AcceptQuest(TScriptInterface<class IQuestTrackerInterface> QuestTrackerInterface, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue_1, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue_1, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue_1);
	void UpdateGoalTrackingButtons(class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, bool CallFunc_FindQuestHUDVisibilityFromTask_ReturnValue, const struct FQuestPresentationData& CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData, bool CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue);
	void HandleBGPaperStyle(class UTexture2D* L_RewardPreviewIcon, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_3, class UTexture2D* Temp_object_Variable, bool Temp_bool_Variable_4, enum class ESlateBrushDrawType Temp_byte_Variable_4, enum class ESlateBrushDrawType Temp_byte_Variable_5, bool Temp_bool_Variable_5, const struct FQuestPresentationData& CallFunc_MakeQuestPresentationDataFromShopOfferPresentation_OutQuestPresentationData, const struct FQuestRewardPresentationData& CallFunc_Array_Get_Item, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class FText K2Node_Select_Default, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility K2Node_Select_Default_1, class FText K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3, const struct FQuestPresentationData& CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData, bool CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue, class UTexture2D* K2Node_Select_Default_4, const struct FQuestRewardPresentationData& CallFunc_Array_Get_Item_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, enum class ESlateBrushDrawType K2Node_Select_Default_5, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void SetTaskProgressAndContractState(const struct FOngoingTaskProgress& NewTaskProgress, enum class E_Contract_StateType NewContractState);
	void SetTaskProgress(const struct FOngoingTaskProgress& NewTaskProgress);
	void GetTaskProgress(struct FOngoingTaskProgress* TaskProgress);
	void SetContractState(enum class E_Contract_StateType NewContractState);
	void GetContractState(enum class E_Contract_StateType* ContractState);
	void RefreshButton(bool Temp_bool_Variable, class FText Temp_text_Variable, enum class E_Contract_StateType Temp_byte_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, bool Temp_bool_Variable_1, class FText Temp_text_Variable_7, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2);
	void Show_Rewards(const TArray<struct FDataTableRowHandle>& Reward_Values_LOCAL, const TArray<enum class E_UI_QuestRewardFormating>& Reward_Keys_LOCAL, const TArray<int32>& Reward_Quantity_LOCAL, TMap<enum class E_UI_QuestRewardFormating, struct FDataTableRowHandle> Reward_Table_LOCAL, class UWBP_QuestRewardEntry_C* CallFunc_Create_ReturnValue, TMap<enum class E_UI_QuestRewardFormating, struct FDataTableRowHandle> K2Node_MakeVariable_MakeVariableOutput, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FQuestPresentationData& CallFunc_MakeQuestPresentationDataFromShopOfferPresentation_OutQuestPresentationData, const struct FQuestRewardPresentationData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_QuestRewardEntry_C* CallFunc_Create_ReturnValue_1, const struct FQuestPresentationData& CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData, bool CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FQuestRewardPresentationData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1);
	void Show_Progress_States(bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void SetupTaskInfo(const struct FOngoingTaskProgress& TaskProgress, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class UWBP_sw_QuestTaskEntry_C* CallFunc_Create_ReturnValue, class FText Temp_text_Variable_3, class FText CallFunc_Conv_IntToText_ReturnValue, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, const struct FQuestTaskPresentationData& CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData, bool CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue, enum class EFaction Temp_byte_Variable, const struct FQuestTaskConditionPresentationData& CallFunc_Array_Get_Item, class FText K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, const struct FQuestTaskPresentationData& CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData_1, bool CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void Setup_Static_Data(const struct FQuestPresentationData& QuestPresentationData, bool Temp_bool_Variable, const struct FQuestPresentationData& CallFunc_MakeQuestPresentationDataFromShopOfferPresentation_OutQuestPresentationData, const struct FQuestPresentationData& CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData, bool CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue, const struct FQuestRewardPresentationData& CallFunc_Array_Get_Item, bool Temp_bool_Variable_1, class FText K2Node_Select_Default, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, bool CallFunc_CanTaskBeHandedIn_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FQuestRewardPresentationData& CallFunc_Array_Get_Item_1, class FText K2Node_Select_Default_1);
	void SetupQuestDetails(const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue, const struct FQuest& CallFunc_GetQuestDataFromQuestAssetReference_OutData, bool CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue);
	void Construct();
	void Refresh_SW_ContractDetailPane();
	void BndEvt__WBP_sw_ContractDetailPane_CBU_Track_Add_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_sw_ContractDetailPane_CBU_Track_Remove_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_sw_ContractDetailPane_CBU_Quest_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Destruct();
	void ExecuteUbergraph_WBP_sw_ContractDetailPane(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
	void QuestAccepted__DelegateSignature(const struct FOngoingTaskProgress& Accepted, enum class E_Contract_StateType Contract_State);
};

}


