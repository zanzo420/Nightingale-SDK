#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4A8 (0x7F0 - 0x348)
// WidgetBlueprintGeneratedClass WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C
class UWBP_Crafting_RecipeMold_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Scale_Reset;                                  // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_slots_4;                                      // 0x358(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_slots_2;                                      // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_slots_3;                                      // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_slots_1;                                      // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Scale_Mold;                                   // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_AutofillSlots;                                 // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Ov_Ingredient_Slot1;                               // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Ov_Ingredient_Slot2;                               // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Ov_Ingredient_Slot3;                               // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Ov_Ingredient_Slot4;                               // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Ov_Tooltip_Spot;                                   // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CraftingItem_Preview_Stats_C*     Preview_DynamicResults;                            // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Crafting_RecipeMoldSlot_C*        Slot1;                                             // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Crafting_RecipeMoldSlot_C*        Slot2;                                             // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Crafting_RecipeMoldSlot_C*        Slot3;                                             // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Crafting_RecipeMoldSlot_C*        Slot4;                                             // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Stage;                                             // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Vb_Slots;                                          // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemTooltip_C*                    WBP_ItemTooltip;                                   // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnMoldUpdated;                                     // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        ActiveSlotIndex;                                   // 0x400(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F9E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               SlottedIngredients;                                // 0x408(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UWBP_Crafting_RecipeMoldSlot_C*> Slots;                                             // 0x418(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	uint8                                        Pad_8F9F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCraftingRecipeReference              ActiveRecipeID;                                    // 0x430(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FCraftingConstraintSlot>       ActiveRecipeSlots;                                 // 0x4A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	enum class E_Crafting_MoldSteps              SlotMoldState;                                     // 0x4B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FA0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMoldIngredientListShown;                         // 0x4B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        DesiredQuantity;                                   // 0x4C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FA1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMoldIngredientSlotted;                           // 0x4D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UNWXMenuDataEntry*                     CurrentlyDisplayedEntry;                           // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasSlotChanged;                                   // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8FA2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CraftingItemEntry;                                 // 0x4F0(0x2F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                CraftingStation;                                   // 0x7E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWBP_Crafting_IngredientList_C*        IngredientListWidget;                              // 0x7E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Crafting_RecipeMold_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget(class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item);
	void IsIngredientListOpen(bool* IsOpen, bool CallFunc_IsValid_ReturnValue);
	void OnMoldSlotHovered(const struct FInventoryEntry& DisplayedInventoryItem, const struct FInventoryEntry& FilterInventoryItem, bool IsHovering, class UWBP_ItemTooltip_C* CallFunc_Create_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
	void OnIngredientListEntryHovered(const struct FInventoryEntry& InventoryEntry, bool IsHovered, const TArray<struct FInventoryEntry>& LSlottedIngredients, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, int32 CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled, int32 CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots, enum class EGetResult CallFunc_GetNumberOfRecipeSlotsFilled_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class EGetResult CallFunc_TryGenerateCraftingPreview_Branches, TArray<struct FInventoryEntry>& CallFunc_TryGenerateCraftingPreview_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void UpdateConstraintSatisfiedWidgets(const TArray<int32>& LUnmetSlots, class UBP_MenuDataEntry_Crafting_C* LMenuDataEnty, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FInventoryEntry& CallFunc_GetDisplayedIngredient_Ingredient, const struct FInventoryEntry& CallFunc_GetDisplayedIngredient_Ingredient_1, const struct FInventoryEntry& CallFunc_GetDisplayedIngredient_Ingredient_2, const struct FInventoryEntry& CallFunc_GetDisplayedIngredient_Ingredient_3, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FCraftingRecipe& CallFunc_GetCraftingRecipeData_ReturnValue, const struct FCraftingRecipe& CallFunc_GetCraftingRecipeData_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UBP_MenuDataEntry_Crafting_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting, bool K2Node_DynamicCast_bSuccess, TArray<int32>& CallFunc_CalculateMissingSlots_OutUnmetSlots);
	void SetDetailSwitcher(bool bShow, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void Update_Preview_Without_Comparison(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, int32 CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled, int32 CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots, enum class EGetResult CallFunc_GetNumberOfRecipeSlotsFilled_Branches, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class EGetResult CallFunc_TryGenerateCraftingPreview_Branches, TArray<struct FInventoryEntry>& CallFunc_TryGenerateCraftingPreview_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1);
	void UpdateDetails(const struct FInventoryEntry& Entry, bool Compare_Previous, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void On_Screen_State_Updated(enum class ECraftingScreenState NewScreenState);
	void OnMoldAnimationFinished(bool CallFunc_IsInAnySelectionState_IsInAnySelectionState);
	void InitializeDefaultSlotIndex(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, bool CallFunc_BooleanAND_ReturnValue, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void OnIngredientListClosed(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue, int32 CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled, int32 CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots, enum class EGetResult CallFunc_GetNumberOfRecipeSlotsFilled_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item);
	void UnbindFromIngredientListEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
	void OnIngredientFocusReceived(const struct FInventoryEntry& InventoryEntry);
	void OnIngredientListEntrySelected(const struct FInventoryEntry& InventoryEntry);
	void IsItemImprovementSlot(int32 Slot, bool* IsImprovementSlot, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void OnItemAddedOrRemoved(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void DeinitializeBindings(class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent_1, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue);
	void InitializeBindings(class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent_1, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue);
	void TryFillSlotWithItemEntry(int32 SlotIndex, bool* IsSlotUpdated, bool CallFunc_IsItemImprovementSlot_IsImprovementSlot, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, class UNWXMenuDataEntryItem* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item, bool K2Node_DynamicCast_bSuccess, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue);
	void RemoveSlotBindings(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	class UWidget* GetDefaultFocusWidget(class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item);
	void IsInAnySelectionState(bool* IsInAnySelectionState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void GetState(enum class E_Crafting_MoldSteps* State);
	void SetState(enum class E_Crafting_MoldSteps NewState, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void SetupSlotBindings(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<class UWBP_Crafting_RecipeMoldSlot_C*>& K2Node_MakeArray_Array);
	void FillSlot(const struct FInventoryEntry& Item, int32& SlotIndex, bool FillWithNotify, class UWBP_Crafting_RecipeMoldSlot_C* ChangedSlot, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesMatchPreviousIngredient_bMatches, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item);
	void IngredientSelection(int32 SlotIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void UpdateCosmetics();
	void UpdateCraftingPreview(bool ComparePrevious, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UBP_CraftingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_CraftingStationComponent_C* CallFunc_GetActiveCraftingStation_ActiveCraftingStation, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, enum class EGetResult CallFunc_TryGenerateCraftingPreview_Branches, TArray<struct FInventoryEntry>& CallFunc_TryGenerateCraftingPreview_ReturnValue, int32 CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled, int32 CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots, enum class EGetResult CallFunc_GetNumberOfRecipeSlotsFilled_Branches, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4);
	void Refresh();
	void CancelSelection(enum class E_Crafting_MoldSteps NewState, bool CallFunc_IsInAnySelectionState_IsInAnySelectionState);
	void UpdateDesiredQuantity(int32 NewQuantity, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Refresh_Slots_for_Active_Recipe(class UNWXMenuDataEntryCrafting* LCraftingCreationComponent, class UNWXMenuDataEntryCrafting* ActiveCraftingEntry, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, class UNWXMenuDataEntryCrafting* CallFunc_GetStateDependantCraftingEntry_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FCraftingRecipe& CallFunc_GetCraftingRecipeData_ReturnValue);
	void RefreshSlotsTypeAndConstraints(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void FillUpgradeSlots(const TArray<struct FInstancedItemAttributeModifier>& Modifiers, const struct FInventoryEntry& SlottedIngredient, int32 Temp_int_Variable, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, class UNWXMenuDataEntryItem* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item, bool K2Node_DynamicCast_bSuccess, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue);
	void FillSlotWithLargestStack(const struct FCraftingConstraintSlot& SlotConstraints, int32 SlotIndex, const struct FInventoryEntry& L_IngToSlot, int32 L_StackCount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingConstraints, TArray<struct FInventoryEntry>& CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingSlotType, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void AutoFillSlots(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_TryFillSlotWithItemEntry_IsSlotUpdated, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_TryFillSlotWithItemEntry_IsSlotUpdated_1, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FCraftingConstraintSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void BuildTooltipFromItemEntry(const struct FInventoryEntry& ItemEntry);
	void PlayScaleAnimation(enum class EUMGSequencePlayMode PlayMode, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void CheckSlots(bool* SlotsFull, bool Failed, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, bool CallFunc_IsConstraintMet_IsConstraintMet, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void OnSlotClicked(const struct FCraftingConstraintSlot& SlotConstraints, int32 SlotIndex, class UWBP_Crafting_IngredientList_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable, class UOverlay* K2Node_Select_Default, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
	void ClearAllSlots(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void EnableAllSlots(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetDisplayedIngredients(TArray<struct FInventoryEntry>* DisplayedIngredients, const TArray<struct FInventoryEntry>& Ingredients, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FInventoryEntry& CallFunc_GetDisplayedIngredient_Ingredient, int32 CallFunc_Array_Add_ReturnValue);
	void GetSlottedIngredients(TArray<struct FInventoryEntry>* SlottedItems, const TArray<struct FInventoryEntry>& ReturnArray);
	void UpdateDisplayedEntry(class UNWXMenuDataEntry* Entry, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent_1, class UNWXMenuDataEntryCrafting* CallFunc_GetStateDependantCraftingEntry_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FCraftingRecipeReference& CallFunc_GetCraftingRecipeAssetReference_ReturnValue);
	void Construct();
	void Destruct();
	void BndEvt__WBP_Crafting_RecipeMold_CBU_AutofillSlots_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void OnUsingGamepadChanged_1(bool bUsingGamepad);
	void ExecuteUbergraph_WBP_Crafting_RecipeMold(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, int32 CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled, int32 CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots, enum class EGetResult CallFunc_GetNumberOfRecipeSlotsFilled_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_bUsingGamepad, bool CallFunc_Not_PreBool_ReturnValue_1);
	void OnMoldIngredientSlotted__DelegateSignature();
	void OnMoldIngredientListShown__DelegateSignature(bool Shown);
	void OnMoldUpdated__DelegateSignature();
};

}


