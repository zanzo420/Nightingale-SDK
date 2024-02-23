#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x71 (0x561 - 0x4F0)
// WidgetBlueprintGeneratedClass WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C
class UWBP_Inv_StructureTransfer_C : public UNWXStructureTransfer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_RevealFuel;                                   // 0x4F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_CompletionBlocked;                            // 0x500(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackgroundBlur*                       blockingBlur;                                      // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             but_Sort;                                          // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_BulkTransfer;                                  // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_SingleTransfer;                                // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Draggable_DropTarget_C*           DropTarget_Inventory;                              // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Draggable_DropTarget_C*           DropTarget_Structure;                              // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StoragePanel_C*                   Inventory;                                         // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Structure_FuelIndicator_C*        WBP_Structure_FuelIndicator;                       // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StructureTranfser_StructureRequirements_C* WBP_StructureTranfser_StructureRequirements;       // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Popup_InvItemSplitter_C*          SplitterWidget;                                    // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_StructureFuelComponent_C*          FuelComponent;                                     // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsShiftDown;                                       // 0x560(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Inv_StructureTransfer_C* GetDefaultObj();

	void CREATEDELEGATE_PROXYFUNCTION_3(struct FInventoryEntry& InventoryEntry);
	void CREATEDELEGATE_PROXYFUNCTION_2(struct FInventoryEntry& InventoryEntry);
	void CREATEDELEGATE_PROXYFUNCTION_1(struct FInventoryEntry& InventoryEntry);
	void CREATEDELEGATE_PROXYFUNCTION_0(struct FInventoryEntry& InventoryEntry);
	void Enable_Inventory_Input_Action_Icon(bool Enable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, int32 CallFunc_Array_Length_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_sw_GridEntryItem_C* K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item, bool K2Node_DynamicCast_bSuccess);
	class UWidget* DoCustomNavigation_LeftInventoryToButtons(enum class EUINavigation Navigation, bool Temp_bool_Variable, bool CallFunc_GetIsEnabled_ReturnValue, class UWidget* K2Node_Select_Default);
	void OnQueueEntryDoubleClicked(const struct FInventoryEntry& InventoryEntry, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_GetChildAt_IsValid, class UWidget* CallFunc_GetChildAt_ItemWidget, bool CallFunc_Greater_IntInt_ReturnValue);
	class UWidget* DoCustomNavigation_LeftToGridInventory(enum class EUINavigation Navigation, bool CallFunc_HasEntries_HasEntries, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, bool CallFunc_Array_IsValidIndex_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item);
	class UWidget* DoCustomNavigation_RightToLeft(enum class EUINavigation Navigation, class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue);
	class UWidget* DoCustomNavigation_LeftToRight(enum class EUINavigation Navigation, class UWidget* ResultFocus, class UWidget* Temp_object_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_GetChildAt_IsValid, class UWidget* CallFunc_GetChildAt_ItemWidget, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UWBP_sw_GridEntryItem_C* K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item, bool K2Node_DynamicCast_bSuccess, const struct FInventoryEntry& CallFunc_GetInventoryEntry_InventoryEntry, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, class UWidget* K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasFocusedDescendants_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(bool Temp_bool_Variable, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, const struct FInventoryEntry& CallFunc_GetSelectedEntry_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item, bool CallFunc_TryGetEntryWidget_IsEntryFound, class UWBP_sw_GridEntryItem_C* CallFunc_TryGetEntryWidget_GridEntryWidget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, class UWidget* K2Node_Select_Default);
	void OnEntryDoubleClicked(struct FInventoryEntry& InventoryEntry);
	void UpdateTimeChange(bool EnableDisplay, bool IsIncreasingTime, const struct FInventoryEntry& InventoryEntry, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsStructureComplete_ReturnValue);
	void OnPanelUpdated();
	void InitializeButtons(enum class EEntrySortOrder CallFunc_GetCurrentSortOrder_ReturnValue);
	void InitializeFuelPanelReference();
	void OnItemHovered(bool IsHovered, struct FInventoryEntry& InventoryEntry, enum class ETooltipSource TooltipSource);
	void OnQueueEntryDragged(const struct FInventoryEntry& InventoryEntry, bool IsDragging, bool CallFunc_CanAcceptEntry_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateDropTarget(bool ShouldDisplayDropTarget, class UWBP_Draggable_DropTarget_C* DropTarget, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void OnSplitterWindowClosed(class UNWXCommonWindowWidget* Window, class UWBP_Popup_InvItemSplitter_C* K2Node_DynamicCast_AsWBP_Popup_Inv_Item_Splitter, bool K2Node_DynamicCast_bSuccess);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FInputEvent& CallFunc_GetInputEventFromKeyEvent_ReturnValue, bool CallFunc_InputEvent_IsShiftDown_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FInputEvent& CallFunc_GetInputEventFromKeyEvent_ReturnValue, bool CallFunc_InputEvent_IsShiftDown_ReturnValue);
	void OpenSplitterWindow(struct FInventoryEntry& InventoryEntry, int32 MaxQuantityOverride, enum class ESplittingUnits SplittingUnits, bool IsTransferToStructure, bool CallFunc_Greater_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWBP_Popup_InvItemSplitter_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FText Temp_text_Variable);
	void HandleTransferToInventoryOnDrop(const struct FInventoryEntry& Entry, const struct FInventoryEntry& EmptyEntry);
	void HandleTransferToStructureOnDrop(const struct FInventoryEntry& Entry, const struct FInventoryEntry& EmptyEntry);
	void InitializeFuelIndicatorWidget(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_BindDelegate_OnAppliedFuelItemsChanged_self_CastInput, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IBPI_SchematicInterfaces_C> K2Node_DynamicCast_AsBPI_Schematic_Interfaces, bool K2Node_DynamicCast_bSuccess, class UBP_StructureFuelComponent_C* CallFunc_GetFuelComponent_FuelComponent);
	void InitializeStructureRequirementsWidget(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsStructureComplete_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnFuelChanged(TArray<struct FInventoryEntry>& AppliedFuelItems, bool CallFunc_HasFocusedDescendants_ReturnValue, bool CallFunc_GetChildAt_IsValid, class UWidget* CallFunc_GetChildAt_ItemWidget, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FInventoryEntry>& CallFunc_GetNonBurningInventoryEntries_NonBurningEntries, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_HasFocusedDescendants_ReturnValue_1, bool CallFunc_IsDrainingFuel_ReturnValue);
	void OnSchematicStateUpdated();
	void OnItemDragged(enum class ELoadoutSlotType Slot, bool Display, const struct FInventoryEntry& Item, const struct FInventoryEntry& CallFunc_GetSelectedEntry_ReturnValue, bool CallFunc_CanAddEntry_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnStructureDestroyed(class AActor* DestroyedActor);
	void ConfirmItem(bool IsTransferToStructure, struct FInventoryEntry& InventoryEntry, bool CallFunc_GetIsEnabled_ReturnValue, const struct FInventoryEntry& CallFunc_GetSelectedEntry_ReturnValue, TScriptInterface<class IStructureResourceManagerOwnerInterface> K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface, bool K2Node_DynamicCast_bSuccess, TArray<struct FStructureResourceRequirements>& CallFunc_GetTotalResourceRequirementsForCurrentState_TotalRequirements, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetQuantityRemaining_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Min_ReturnValue, int32 K2Node_Select_Default, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsStructureComplete_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	class UWidget* GetDefaultFocusWidget(class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue);
	void OnStructureTransferButtonTop(const struct FInventoryEntry& InventoryEntry);
	void OnStructureTransferButtonLeft(const struct FInventoryEntry& InventoryEntry);
	struct FEventReply OnInputContext(int32 ContextIndex, bool K2Node_SwitchInteger_CmpSuccess, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void RefreshIsCharacterBlockingStructure(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateSortingButtonText(enum class EEntrySortOrder SortOrder, class UWBP_button_base_C* ButtonReference, class FText CallFunc_GetSortOrderName_ReturnValue);
	void InitializeStructureActor(class ANWXPlayerController* PlayerController, class UStructureEventsObject* LStructureEventsObject, TScriptInterface<class IControllerInteractionInterface> CallFunc_GetLastInteractedActor_self_CastInput, class AActor* CallFunc_GetLastInteractedActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class ANWXStructure* K2Node_DynamicCast_AsNWXStructure, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureEventInterface> K2Node_DynamicCast_AsStructure_Event_Interface, bool K2Node_DynamicCast_bSuccess_1, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4);
	void InitializeInventoryPanel(class UBP_InventoryComponent_C* LInventoryComponent, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent, TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IItemContainer> CallFunc_GetDefaultContainer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue);
	void OnSelectedEntryUpdated();
	void OnResourcesRemoved(struct FStructureRemoveResourcesContext& RemovedResourcesContext);
	void OnResourceAdded(struct FStructureAddResourcesContext& AddResourcesContext);
	void OnStructureCompleted(class UObject* Structure, TSubclassOf<class UWidgetInventoryEntryFilter> LStructureConstraintFilter, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDragDropping_ReturnValue);
	void UnbindEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_UnbindDelegate_OnAppliedFuelItemsChanged_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class ANWXStructure* K2Node_DynamicCast_AsNWXStructure, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, TScriptInterface<class IStructureEventInterface> K2Node_DynamicCast_AsStructure_Event_Interface, bool K2Node_DynamicCast_bSuccess_1, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void Construct();
	void Destruct();
	void OnInternalOpened();
	void BndEvt__WBP_Inv_StructureTransfer_DropTarget_Structure_K2Node_ComponentBoundEvent_3_DragDropped_Item__DelegateSignature(class UDragDropOperation* Payload);
	void BndEvt__WBP_Inv_StructureTransfer_DropTarget_Inventory_K2Node_ComponentBoundEvent_4_DragDropped_Item__DelegateSignature(class UDragDropOperation* Payload);
	void BndEvt__WBP_Inv_StructureTransfer_WBP_StructureTranfser_StructureRequirements_K2Node_ComponentBoundEvent_2_OnCloseButtonSelected__DelegateSignature();
	void BndEvt__WBP_Inv_StructureTransfer_WBP_Structure_FuelIndicator_K2Node_ComponentBoundEvent_5_OnCloseButtonSelected__DelegateSignature();
	void BndEvt__WBP_Inv_StructureTransfer_but_Sort_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Inv_StructureTransfer_BU_CommonBulkTransfer_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Inv_StructureTransfer_BU_CommonSingleTransfer_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Inv_StructureTransfer_Inventory_K2Node_ComponentBoundEvent_10_OnPanelUpdated__DelegateSignature();
	void ExecuteUbergraph_WBP_Inv_StructureTransfer(int32 EntryPoint, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UDragDropOperation* K2Node_ComponentBoundEvent_Payload_1, class UDragOperation_Item_C* K2Node_DynamicCast_AsDrag_Operation_Item, bool K2Node_DynamicCast_bSuccess, class UDragDropOperation* K2Node_ComponentBoundEvent_Payload, class UDragOperation_Item_C* K2Node_DynamicCast_AsDrag_Operation_Item_1, bool K2Node_DynamicCast_bSuccess_1, const struct FInventoryEntry& CallFunc_GetSelectedEntry_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_HasFocusedDescendants_ReturnValue, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, bool CallFunc_TryGetEntryWidget_IsEntryFound, class UWBP_sw_GridEntryItem_C* CallFunc_TryGetEntryWidget_GridEntryWidget, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_TryGetEntryWidget_IsEntryFound_1, class UWBP_sw_GridEntryItem_C* CallFunc_TryGetEntryWidget_GridEntryWidget_1, bool K2Node_SwitchEnum_CmpSuccess);
};

}

