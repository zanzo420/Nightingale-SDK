#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2E0 (0x620 - 0x340)
// WidgetBlueprintGeneratedClass WBP_Shop_JobBoard_ScreenSpace.WBP_Shop_JobBoard_ScreenSpace_C
class UWBP_Shop_JobBoard_ScreenSpace_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ContractAcceptedFeedback;                          // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_FactionStore_Exchanges;                     // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_InnerFrame;                                 // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_JobDetails;                                 // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_JobList_Quests;                             // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_WoodFrame_1;                                // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_ContractDetailPane_C*          DetailPane_Contracts;                              // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     GridAvailable;                                     // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     GridReady;                                         // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_FlowerBackground;                            // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_QualityGem_BottomLeft;                       // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_QualityGem_BottomRight;                      // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_QualityGem_TopLeft;                          // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_QualityGem_TopRight;                         // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_StainedGlass_Left;                           // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_StainedGlass_Right;                          // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                StageSize;                                         // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_FactionStoreHeader;                            // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_leftHeader_1;                                  // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_FactionExchangeList;                            // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_NoExchangesAvailable;                           // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_QuestsToAccept;                                 // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Ready;                                          // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Ready_1;                                        // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Global_Notification_C*            WBP_Global_Notification_C_0;                       // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_GridEntryItem_C*               WBP_sw_GridEntryItem;                              // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_GridEntryItem_C*               WBP_sw_GridEntryItem_1;                            // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_GridEntryItem_C*               WBP_sw_GridEntryItem_2;                            // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_GridEntryItem_C*               WBP_sw_GridEntryItem_3;                            // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_FactionList;                        // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_FactionRequirements;                // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_QuestsOrExchanges;                  // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                NPC_Actor;                                         // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AQuestGiverSession*                    QuestGiverSession;                                 // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88E1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOngoingTaskProgress                  TaskProgressSticky;                                // 0x460(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class E_Contract_StateType              TaskProgressStateSticky;                           // 0x510(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GridIndex_Ready_Sticky;                            // 0x514(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GridIndex_Available_Sticky;                        // 0x518(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFactionStoreListView;                            // 0x51C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFaction                          Faction;                                           // 0x51D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88E3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UShopPurchaserComponent*               ShopPurchaserComponent;                            // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IShopInteractionModel> ShopInteractionSession;                            // 0x528(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuid>                         AvailableShopOffers;                               // 0x538(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FShopOfferPresentation                ShopOfferSticky;                                   // 0x548(0xD8)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_Shop_JobBoard_ScreenSpace_C* GetDefaultObj();

	void ShopOfferHovered(bool Hovered, const struct FShopOfferPresentation& ShopOffer, bool CallFunc_IsValidOfferId_ReturnValue);
	void ShopOfferSelected(int32 Grid_Index, const struct FShopOfferPresentation& ShopOffer, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess);
	void PopulateShopOffers(const struct FShopOfferPresentation& LShopOffer, int32 GridWidth, class UWBP_JobBoard_QuestGrid_Entry_C* JobBoardQuestEntry, int32 QuestIndex, class UWBP_JobBoard_QuestGrid_Entry_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FGuid& CallFunc_Array_Get_Item, const struct FShopOfferPresentation& CallFunc_MakePresentationData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<struct FGuid>& CallFunc_GetAvailableOffers_OutAvailableOffers, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue);
	void SetFaction(bool Temp_bool_Variable, enum class EFaction Temp_byte_Variable, enum class EFaction Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class EFaction Temp_byte_Variable_2, bool Temp_bool_Variable_2, enum class EFaction Temp_byte_Variable_3, bool Temp_bool_Variable_3, enum class EFaction Temp_byte_Variable_4, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, bool Temp_bool_Variable_4, enum class EFaction Temp_byte_Variable_5, const struct FGameplayTag& Temp_struct_Variable_4, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, enum class EFaction K2Node_Select_Default, enum class EFaction K2Node_Select_Default_1, bool CallFunc_ActorHasTag_ReturnValue_2, bool CallFunc_ActorHasTag_ReturnValue_3, enum class EFaction K2Node_Select_Default_2, enum class EFaction K2Node_Select_Default_3, bool CallFunc_ActorHasTag_ReturnValue_4, enum class EFaction K2Node_Select_Default_4);
	void WIP_RefreshFactionEmptyListType(int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EFaction Temp_byte_Variable_2, uint8 CallFunc_GetValidValue_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1);
	void RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void SetupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void HandleIfListIsEmpty(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UWBP_BasicText_OneLine_C* CallFunc_Create_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, int32 K2Node_Select_Default, class FText Temp_text_Variable, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1);
	void RefreshBoardStyle(bool CallFunc_IsQuestGiverFactionExchange_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	class UWidget* GetDefaultFocusWidget(class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1, class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue);
	struct FEventReply FocusDefaultWidget(const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_2, bool CallFunc_HasAnyChildren_ReturnValue_1, bool CallFunc_HasAnyChildren_ReturnValue_2);
	void SetGridPanelQuestEntriesToUnselected(class UPanelWidget* GridPanelWidget, int32 IndexToIgnore, class UWidget* CurrentChildWidget, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_JobBoard_QuestGrid_Entry_C* K2Node_DynamicCast_AsWBP_Job_Board_Quest_Grid_Entry, bool K2Node_DynamicCast_bSuccess);
	void ResetQuestBoard(class UNWXWindowWidget* Window);
	void Cleanup();
	void SetupShop(TScriptInterface<class IShopInteractionModel>& ShopInteractionModel, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void RefreshList(const struct FEventReply& CallFunc_FocusDefaultWidget_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UShopProviderComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CallCreatureKilled(const struct FDataTableRowHandle& Creature_Information, const struct FGameplayTagContainer& CreatureTagContainer, const struct FGameplayTagContainer& KillerTagContainer);
	void CallGiveTag(const struct FGameplayTag& Gameplay_Tag);
	void CallStructureBlueprintPlaced(const struct FDataTableRowHandle& StructureDataHandle);
	void CallResourceHarvested(const struct FInventoryEntry& ItemEntry, int32 Amount);
	void CallStructureCompleted(class AActor* Owning_Actor, int32 Piece_Id);
	void CallItemDeposited_InWorldContainer(const struct FItemDataReference& ItemRowHandle, int32 Quantity, const struct FGameplayTag& ContainerTag);
	void CallWeakpointHit(const struct FGameplayTagContainer& WeakpointType, const struct FGameplayTagContainer& CreatureTags, const struct FHitResult& HitResult);
	void CallOnSpellCast(TSoftObjectPtr<class UTechniqueDataAsset> SpellCast);
	void CallOnGlyphRevealed();
	void CallFishCaught(struct FFish& CaughtFish);
	void CallOnInteractedWithPlayer(class APawn* InteractingPawn);
	void Construct();
	void Destruct();
	void BndEvt__DetailPane_Contracts_K2Node_ComponentBoundEvent_0_QuestAccepted__DelegateSignature(const struct FOngoingTaskProgress& Accepted, enum class E_Contract_StateType Contract_State);
	void ExecuteUbergraph_WBP_Shop_JobBoard_ScreenSpace(int32 EntryPoint, const struct FDataTableRowHandle& K2Node_Event_Creature_Information, const struct FGameplayTagContainer& K2Node_Event_CreatureTagContainer, const struct FGameplayTagContainer& K2Node_Event_KillerTagContainer, const struct FGameplayTag& K2Node_Event_Gameplay_Tag, const struct FDataTableRowHandle& K2Node_Event_StructureDataHandle, const struct FInventoryEntry& K2Node_Event_ItemEntry, int32 K2Node_Event_Amount, class AActor* K2Node_Event_Owning_Actor, int32 K2Node_Event_Piece_ID, const struct FItemDataReference& K2Node_Event_ItemRowHandle, int32 K2Node_Event_Quantity, const struct FGameplayTag& K2Node_Event_ContainerTag, const struct FGameplayTagContainer& K2Node_Event_WeakpointType, const struct FGameplayTagContainer& K2Node_Event_CreatureTags, const struct FHitResult& K2Node_Event_HitResult, TSoftObjectPtr<class UTechniqueDataAsset> K2Node_Event_SpellCast, const struct FFish& K2Node_Event_CaughtFish, class APawn* K2Node_Event_InteractingPawn, const struct FOngoingTaskProgress& K2Node_ComponentBoundEvent_Accepted, enum class E_Contract_StateType K2Node_ComponentBoundEvent_Contract_State, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class UShopPurchaserComponent* CallFunc_GetComponentByClass_ReturnValue);
};

}


