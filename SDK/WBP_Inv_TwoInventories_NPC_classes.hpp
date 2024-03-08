#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x578 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_Inv_TwoInventories_NPC.WBP_Inv_TwoInventories_NPC_C
class UWBP_Inv_TwoInventories_NPC_C : public UNWXTwoInventories
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Common_Button_Base_C*             CBU_InventoryLeft;                                 // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_InventoryRight;                                // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_WorldContainerLeft;                            // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_WorldContainerRight;                           // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Draggable_DropTarget_C*           DropTarget_Inventory;                              // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Draggable_DropTarget_C*           DropTarget_WorldContainer;                         // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StoragePanel_C*                   Inventory;                                         // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_LoadoutSlots_C*                NpcLoadoutWidget;                                  // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_LoadoutSlots_C*                PlayerLoadoutWidget;                               // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                StageSize;                                         // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          SubCanvasPanel;                                    // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToolBar_C*                        ToolbarMainhand;                                   // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToolBar_C*                        ToolbarOffhand;                                    // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NavBar_C*                         WBP_NavBar;                                        // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StoragePanel_C*                   WorldContainer;                                    // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                InventoryActor;                                    // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                WorldContainerActor;                               // 0x540(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWBP_Popup_InvItemSplitter_C*          SplitterWidgetRef;                                 // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_SubContextShortcutMenu_C*         ContextMenuRef;                                    // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_LoadoutComponent_C*                PlayerLoadout;                                     // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_LoadoutComponent_C*                NpcLoadout;                                        // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsShiftDown;                                       // 0x568(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_556E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_NavBar_C*                         Target;                                            // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Inv_TwoInventories_NPC_C* GetDefaultObj();

	void CREATEDELEGATE_PROXYFUNCTION_7(struct FInventoryEntry& InventoryEntry);
	void CREATEDELEGATE_PROXYFUNCTION_6(struct FInventoryEntry& InventoryEntry);
	void CREATEDELEGATE_PROXYFUNCTION_5(struct FInventoryEntry& InventoryEntry);
	void CREATEDELEGATE_PROXYFUNCTION_4(struct FInventoryEntry& InventoryEntry);
	void CREATEDELEGATE_PROXYFUNCTION_3(struct FInventoryEntry& InventoryEntry);
	void CREATEDELEGATE_PROXYFUNCTION_2(struct FInventoryEntry& InventoryEntry);
	void CREATEDELEGATE_PROXYFUNCTION_1(struct FInventoryEntry& InventoryEntry);
	void CREATEDELEGATE_PROXYFUNCTION_0(struct FInventoryEntry& InventoryEntry);
	void OnWorldContainerContextMenuClosed(class UNWXCommonWindowWidget* Window, bool CallFunc_TryGetEntryWidget_IsEntryFound, class UWBP_sw_GridEntryItem_C* CallFunc_TryGetEntryWidget_GridEntryWidget);
	void OnInventoryContextMenuClosed(class UNWXCommonWindowWidget* Window, bool CallFunc_TryGetEntryWidget_IsEntryFound, class UWBP_sw_GridEntryItem_C* CallFunc_TryGetEntryWidget_GridEntryWidget);
	class UWidget* DoCustomNavigationFromNavBar(enum class EUINavigation Navigation, class UWidget* CallFunc_GetChildAt_ReturnValue, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item, bool CallFunc_TryGetEntryWidget_IsEntryFound, class UWBP_sw_GridEntryItem_C* CallFunc_TryGetEntryWidget_GridEntryWidget, bool CallFunc_HasEntries_HasEntries, bool CallFunc_HasEntries_HasEntries_1, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries_1, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item_1, bool CallFunc_TryGetEntryWidget_IsEntryFound_1, class UWBP_sw_GridEntryItem_C* CallFunc_TryGetEntryWidget_GridEntryWidget_1);
	class UWidget* DoCustomNavigationToNavBar(enum class EUINavigation Navigation, class UWidget* CallFunc_GetChildAt_ReturnValue);
	void OnUpdateWorldContainer(bool CallFunc_IsUsingGamepad_ReturnValue);
	void OnUpdateInventory(bool CallFunc_IsUsingGamepad_ReturnValue);
	void GetLastSelectedEntryID(const struct FInventoryEntry& InventoryEntry, class UWBP_StoragePanel_C* TargetContainer, int32* LastSelectedEntryID, int32 L_EntryID, bool Temp_bool_True_if_break_was_hit_Variable, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_TryGetEntryWidget_IsEntryFound, class UWBP_sw_GridEntryItem_C* CallFunc_TryGetEntryWidget_GridEntryWidget, int32 Temp_int_Array_Index_Variable, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void TrySetFocusClosestToLastEntry(int32 LastSelectedEntryID, class UWBP_StoragePanel_C* TargetContainer, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1);
	void TrySetFocusOnInventoryEntry(class UWidget* CallFunc_GetChildAt_ReturnValue, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item, const struct FInventoryEntry& CallFunc_GetInventoryEntry_InventoryEntry, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries_1, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1);
	void TrySetFocusOnWorldContainerEntry(class UWidget* CallFunc_GetChildAt_ReturnValue, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item_1);
	class UWidget* DoCustomNavigationToGridInventoryItem(enum class EUINavigation Navigation, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, bool CallFunc_Array_IsValidIndex_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item);
	class UWidget* DoCustomNavigationToGridWorldContainerItem(enum class EUINavigation Navigation, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, bool CallFunc_Array_IsValidIndex_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item);
	class UWidget* BP_GetDesiredFocusTarget(TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries_1, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item_1, bool CallFunc_HasEntries_HasEntries, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_HasEntries_HasEntries_1);
	void HandleTransferToInventoryOnDrop(const struct FInventoryEntry& Entry);
	void HandleTransferToWorldContainerOnDrop(const struct FInventoryEntry& Entry);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FInputEvent& CallFunc_GetInputEventFromKeyEvent_ReturnValue, bool CallFunc_InputEvent_IsShiftDown_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FInputEvent& CallFunc_GetInputEventFromKeyEvent_ReturnValue, bool CallFunc_InputEvent_IsShiftDown_ReturnValue);
	void OnPlayerLoadoutChanged(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, int32 CallFunc_Array_Length_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FInventoryEntry& CallFunc_GetInventoryEntry_InventoryEntry);
	void CreateSubContextMenuWidget(bool IsItemEquipped, const struct FItemDataReference& ItemId, class UNWXStoragePanelWidget* StoragePanelWidget, class UWBP_SubContextShortcutMenu_C** SubContextMenuWidget, const struct FS_SubContextMenuOptionEntry& LCurrentMenu, const struct FDataTableRowHandle& LCurrentOptionHandle, const struct FItemDataReference& ItemId, const struct FGameplayTagContainer& LItemTags, const TArray<struct FDataTableRowHandle>& LContextOptions, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, const struct FGameplayTagContainer& CallFunc_GetItemTags_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_SubContextShortcutMenu_C* CallFunc_Create_ReturnValue, const struct FS_SubContextMenuOptionEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, bool CallFunc_HasAnyTags_ReturnValue_1, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetNumGameplayTagsInContainer_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_GetDefaultItemTraitsArray_Success, const struct FGameplayTagContainer& CallFunc_GetDefaultItemTraitsArray_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue);
	void IsItemEquipped(const struct FInventoryEntry& Item, class UBP_LoadoutComponent_C* Loadout, bool* IsItemEquipped, TArray<struct FLoadoutSlot>& CallFunc_GetLoadoutSlots_LoadoutSlots, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FLoadoutSlot& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnNpcLoadoutChanged(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, int32 CallFunc_Array_Length_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FInventoryEntry& CallFunc_GetInventoryEntry_InventoryEntry);
	void OnInventorySubContextMenuEntrySelected(const struct FGameplayTag& MenuTag, const struct FInventoryEntry& Item, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_TryGetEntryWidget_IsEntryFound, class UWBP_sw_GridEntryItem_C* CallFunc_TryGetEntryWidget_GridEntryWidget, class ABP_AnimCharacter_C* K2Node_DynamicCast_AsBP_Anim_Character, bool K2Node_DynamicCast_bSuccess);
	void OnInventoryOpenContextMenu(const struct FGameplayTag& MenuTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FInventoryEntry& CallFunc_GetSelectedEntry_ReturnValue);
	void InitializeLoadoutSlots(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UBP_LoadoutComponent_C* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_LoadoutComponent_C* CallFunc_GetComponentByClass_ReturnValue_1);
	void OnWorldContainerSubContextMenuEntrySelected(const struct FGameplayTag& MenuTag, const struct FInventoryEntry& Item, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UCompanionManagementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_TryGetEntryWidget_IsEntryFound, class UWBP_sw_GridEntryItem_C* CallFunc_TryGetEntryWidget_GridEntryWidget);
	void SetItemGridEntryPipVisibility(class UWBP_GenericContainer_C* Container, const struct FInventoryEntry& InventoryEntry, class UBP_LoadoutComponent_C* Loadout, bool IsPlayer, bool CallFunc_TryGetEntryWidget_IsEntryFound, class UWBP_sw_GridEntryItem_C* CallFunc_TryGetEntryWidget_GridEntryWidget, bool CallFunc_IsItemEquipped_IsItemEquipped);
	void OnWorldContainerOpenContextMenu(const struct FGameplayTag& MenuTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FInventoryEntry& CallFunc_GetSelectedEntry_ReturnValue);
	void OnWorldContainerConfirm(struct FItemDataReference& ItemId, bool IsEquipped, const TArray<struct FDataTableRowHandle>& LContextOptions, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FInventoryEntry& CallFunc_GetSelectedEntry_ReturnValue, bool CallFunc_TryGetEntryWidget_IsEntryFound, class UWBP_sw_GridEntryItem_C* CallFunc_TryGetEntryWidget_GridEntryWidget, bool CallFunc_IsItemEquipped_IsItemEquipped, const struct FVector2D& CallFunc_GetLocalPositionWithinReferenceWidget_ReturnValue, class UWBP_SubContextShortcutMenu_C* CallFunc_CreateSubContextMenuWidget_SubContextMenuWidget, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnWorldContainerButtonTop(const struct FInventoryEntry& InventoryEntry);
	void OnWorldContainerButtonLeft(const struct FInventoryEntry& InventoryEntry, const struct FInventoryEntry& CallFunc_GetSelectedEntry_ReturnValue);
	void FocusWorldContainerPanel();
	void Focus_Inventory_Panel();
	void OnInventoryConfirm(struct FItemDataReference& ItemId, bool IsEquipped, const TArray<struct FDataTableRowHandle>& LContextOptions, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FInventoryEntry& CallFunc_GetSelectedEntry_ReturnValue, bool CallFunc_TryGetEntryWidget_IsEntryFound, class UWBP_sw_GridEntryItem_C* CallFunc_TryGetEntryWidget_GridEntryWidget, bool CallFunc_IsItemEquipped_IsItemEquipped, const struct FVector2D& CallFunc_GetLocalPositionWithinReferenceWidget_ReturnValue, class UWBP_SubContextShortcutMenu_C* CallFunc_CreateSubContextMenuWidget_SubContextMenuWidget, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnInventoryButtonTop(const struct FInventoryEntry& InventoryEntry);
	void OnInventoryButtonLeft(const struct FInventoryEntry& InventoryEntry, const struct FInventoryEntry& CallFunc_GetSelectedEntry_ReturnValue);
	struct FEventReply OnInputPrevious(const struct FEventReply& CallFunc_OnInputNext_ReturnValue);
	struct FEventReply OnInputNext(const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_HasFocusedDescendants_ReturnValue, bool CallFunc_HasEntries_HasEntries, bool CallFunc_HasEntries_HasEntries_1);
	void OnSplitterClosed(class UNWXCommonWindowWidget* Window, class UWBP_Popup_InvItemSplitter_C* K2Node_DynamicCast_AsWBP_Popup_Inv_Item_Splitter, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void TryOpenWorldContainerSplitterMenuOnDrop(const struct FInventoryEntry& InventoryEntry, class UWBP_StoragePanel_C* StoragePanel, bool CallFunc_TryGetEntryWidget_IsEntryFound, class UWBP_sw_GridEntryItem_C* CallFunc_TryGetEntryWidget_GridEntryWidget, bool CallFunc_Not_PreBool_ReturnValue);
	void TryOpenInvSplitterMenuOnDrop(const struct FInventoryEntry& InventoryEntry, class UWBP_StoragePanel_C* StoragePanel, bool CallFunc_TryGetEntryWidget_IsEntryFound, class UWBP_sw_GridEntryItem_C* CallFunc_TryGetEntryWidget_GridEntryWidget, bool CallFunc_Not_PreBool_ReturnValue);
	void OpenWorldContainerItemSplitter(const struct FInventoryEntry& InventoryEntry, class FText Temp_text_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_Popup_InvItemSplitter_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, class ANWXHUDBase* CallFunc_GetLocalNWXHUD_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OpenInventoryItemSplitter(const struct FInventoryEntry& InventoryEntry, class FText Temp_text_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_Popup_InvItemSplitter_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, class ANWXHUDBase* CallFunc_GetLocalNWXHUD_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void UpdateSortButtonText(enum class EEntrySortOrder SortOrder, class UWBP_button_base_C* ButtonReference, class FText CallFunc_GetSortOrderName_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_button_base_C* K2Node_DynamicCast_AsWBP_Button_Base, bool K2Node_DynamicCast_bSuccess);
	void OnWorldContainerEntrySelected();
	void OnInventoryEntrySelected();
	void UnbindEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15);
	void InitializeButtons(bool CallFunc_HasEntries_HasEntries, enum class EEntrySortOrder CallFunc_GetCurrentSortOrder_ReturnValue);
	void InitializeWorldContainerPanel(class APlayerController* PlayerController, TScriptInterface<class IItemContainer> LDefaultContainer, class FText LVictorianName, class FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IControllerInteractionInterface> K2Node_DynamicCast_AsController_Interaction_Interface, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetLastInteractedActor_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_Creature_NPC_Villager_C* K2Node_DynamicCast_AsBP_Creature_NPC_Villager, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IItemContainer> CallFunc_GetDefaultContainer_ReturnValue, class FText CallFunc_GetNPCNameText_NPCName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, TScriptInterface<class IBPI_SchematicInterfaces_C> K2Node_DynamicCast_AsBPI_Schematic_Interfaces, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IItemContainer> CallFunc_GetInventoryContainerInterface_ContainerInterface, TScriptInterface<class ISchematicInfoInterface> K2Node_DynamicCast_AsSchematic_Info_Interface, bool K2Node_DynamicCast_bSuccess_4, class FText CallFunc_GetDisplayNameText_ReturnValue);
	void InitializeInventoryPanel(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7);
	void UpdatePanels(bool EnablePlayerInvetory, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue_1);
	void OnActorDestroyed(class AActor* DestroyedActor);
	void TransferItem(struct FInventoryEntry& InventoryEntry, class UNWXStoragePanelWidget* SourcePanel, class UNWXStoragePanelWidget* TargetPanel, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, class UBP_InventoryComponent_C* K2Node_DynamicCast_AsBP_Inventory_Component, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetFunctionName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void UpdateDropTargetVisibility(bool ShowDropTargets, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3);
	void BulkMoveToWorldContainer(const TArray<class UWBP_sw_GridEntryItem_C*>& CurrentEntries);
	void MoveItemToWorldContainer(struct FInventoryEntry& InventoryEntry, int32 L_LastSelectedEntryID, bool CallFunc_GetItemEquipmentSlotTag_bSuccess, const struct FGameplayTag& CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag, int32 CallFunc_GetLastSelectedEntryID_LastSelectedEntryID, bool CallFunc_MatchesTag_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TScriptInterface<class IToolbarAccessInterface> K2Node_DynamicCast_AsToolbar_Access_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue);
	void OnInventoryEntryDragged(enum class ELoadoutSlotType Slot, bool Display, const struct FInventoryEntry& Item, bool CallFunc_CanAcceptEntry_ReturnValue);
	void BulkMoveToInventory(const TArray<class UWBP_sw_GridEntryItem_C*>& CurrentEntries);
	void MoveItemToInventory(struct FInventoryEntry& InventoryEntry, int32 L_LastSelectedEntryID, int32 CallFunc_GetLastSelectedEntryID_LastSelectedEntryID);
	void OnWorldContainerEntryDragged(enum class ELoadoutSlotType Slot, bool Display, const struct FInventoryEntry& Item, bool CallFunc_CanAcceptEntry_ReturnValue);
	void BndEvt__WBP_Inv_TwoInventories_DropTarget_Right_K2Node_ComponentBoundEvent_0_DragDropped_Item__DelegateSignature(class UDragDropOperation* Payload);
	void BndEvt__WBP_Inv_TwoInventories_DropTarget_Left_K2Node_ComponentBoundEvent_1_DragDropped_Item__DelegateSignature(class UDragDropOperation* Payload);
	void BndEvt__WBP_Inv_TwoInventories_WBP_NavBar_K2Node_ComponentBoundEvent_5_CloseClicked__DelegateSignature();
	void BndEvt__WBP_Inv_TwoInventories_WBP_NavBar_K2Node_ComponentBoundEvent_7_NavBar_ButtonClicked__DelegateSignature(class FText ButtonLabel, int32 Index);
	void BndEvt__WBP_Inv_TwoInventories_NPC_New_ToolbarMainhand_K2Node_ComponentBoundEvent_8_Toolbar_DragStarted__DelegateSignature(class UDragDropOperation* DragDropOperation);
	void BndEvt__WBP_Inv_TwoInventories_NPC_New_ToolbarMainhand_K2Node_ComponentBoundEvent_13_Toolbar_Dropped__DelegateSignature();
	void BndEvt__WBP_Inv_TwoInventories_NPC_New_ToolbarOffhand_K2Node_ComponentBoundEvent_14_Toolbar_DragStarted__DelegateSignature(class UDragDropOperation* DragDropOperation);
	void BndEvt__WBP_Inv_TwoInventories_NPC_New_ToolbarOffhand_K2Node_ComponentBoundEvent_15_Toolbar_Dropped__DelegateSignature();
	void BndEvt__WBP_Inv_TwoInventories_NPC_ToolbarMainhand_K2Node_ComponentBoundEvent_9_Toolbar_DragCancelled__DelegateSignature(class UDragDropOperation* DragDropOperation);
	void BndEvt__WBP_Inv_TwoInventories_NPC_ToolbarOffhand_K2Node_ComponentBoundEvent_10_Toolbar_DragCancelled__DelegateSignature(class UDragDropOperation* DragDropOperation);
	void BndEvt__WBP_Inv_TwoInventories_NPC_BU_InventoryRight_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Inv_TwoInventories_NPC_BU_InventoryLeft_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void BndEvt__WBP_Inv_TwoInventories_NPC_BU_WorldContainerRight_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Inv_TwoInventories_NPC_BU_WorldContainerLeft_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void SetFocusAfterRefreshDelay(int32 LastSelectedEntryID, class UWBP_StoragePanel_C* TargetContainer);
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void ExecuteUbergraph_WBP_Inv_TwoInventories_NPC(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FInventoryEntry& CallFunc_GetSelectedEntry_ReturnValue, const struct FInventoryEntry& CallFunc_GetSelectedEntry_ReturnValue_1, class FText K2Node_ComponentBoundEvent_ButtonLabel, int32 K2Node_ComponentBoundEvent_Index, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class UDragDropOperation* K2Node_ComponentBoundEvent_Payload_1, class UDragOperation_Item_C* K2Node_DynamicCast_AsDrag_Operation_Item, bool K2Node_DynamicCast_bSuccess, class UDragDropOperation* K2Node_ComponentBoundEvent_Payload, class UDragOperation_Item_C* K2Node_DynamicCast_AsDrag_Operation_Item_1, bool K2Node_DynamicCast_bSuccess_1, class UDragDropOperation* K2Node_ComponentBoundEvent_DragDropOperation_3, class UDragOperation_Item_C* K2Node_DynamicCast_AsDrag_Operation_Item_2, bool K2Node_DynamicCast_bSuccess_2, class UDragDropOperation* K2Node_ComponentBoundEvent_DragDropOperation_2, class UDragOperation_Item_C* K2Node_DynamicCast_AsDrag_Operation_Item_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_GetItemEquipmentSlotTag_bSuccess, const struct FGameplayTag& CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_GetItemEquipmentSlotTag_bSuccess_1, const struct FGameplayTag& CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag_1, bool CallFunc_MatchesTag_ReturnValue_1, class UDragDropOperation* K2Node_ComponentBoundEvent_DragDropOperation_1, class UDragDropOperation* K2Node_ComponentBoundEvent_DragDropOperation, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, int32 K2Node_CustomEvent_LastSelectedEntryID, class UWBP_StoragePanel_C* K2Node_CustomEvent_TargetContainer, enum class ECommonInputType K2Node_Event_CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess);
};

}


