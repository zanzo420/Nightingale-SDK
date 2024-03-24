#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x398 (0x850 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_SubContextShortcutMenu.WBP_SubContextShortcutMenu_C
class UWBP_SubContextShortcutMenu_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_MissingEssence;                               // 0x4C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Cancel;                                        // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ReqsBox;                                           // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Cost_repairCost;                               // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_essenceResult;                                 // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_SkillMissing;                                  // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_ButtonBox;                                      // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Vb_ExtractResultsCost;                             // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Vb_RepaireRequirements;                            // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Component_SoftEdge_Divider_C*     WBP_Component_SoftEdge_Divider;                    // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Component_SoftEdge_Divider_C*     WBP_Component_SoftEdge_Divider_1;                  // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SubContextShortcut_Entry_C*       WBP_SubContextShortcut_Entry;                      // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SubContextShortcut_Entry_C*       WBP_SubContextShortcut_Entry_1;                    // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SubContextShortcut_Entry_C*       WBP_SubContextShortcut_Entry_3;                    // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_212;                                // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FDataTableRowHandle>           ShortcutContextEntryArray;                         // 0x538(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            ContextMenuEntrySelected;                          // 0x548(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	uint8                                        Pad_2F67[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       SelectedItemEntry;                                 // 0x560(0x2F0)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWBP_SubContextShortcutMenu_C* GetDefaultObj();

	void Initialize(int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UWBP_SubContextShortcut_Entry_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, const struct FS_SubContextMenuOptionEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_2);
	void UpdateApply(class UUserWidget* Widget, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue, bool CallFunc_CheckCanApply_CanApply, class FText CallFunc_CheckCanApply_FailReason);
	void CheckCanApply(bool* CanApply, class FText* FailReason, const struct FInventoryEntry& LCurrentItem, enum class EActionType LCurrentActionType, const struct FCraftingRecipeReference& LCurrentRecipe, const struct FCraftingRecipeReference& LPerkRecipe, const struct FCraftingRecipeReference& LSpellRecipe, TScriptInterface<class IItemContainer> LContainer, const struct FCraftingRecipeReference& LInfuseRecipe, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, enum class EActionType Temp_byte_Variable, bool Temp_bool_Variable, enum class EActionType Temp_byte_Variable_1, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, enum class EActionType Temp_byte_Variable_2, const struct FCraftingRecipeReference& Temp_struct_Variable, int32 Temp_int_Array_Index_Variable, class FText Temp_text_Variable_7, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CanApplySpell_CanApply, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_DoesPlayerHaveRecipe_ReturnValue, bool CallFunc_CanEnchantItem_CanEnchant, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_CanSlotPerkOnItem_ReturnValue, bool CallFunc_CanSlotSpellOnItem_ReturnValue, bool CallFunc_CanSlotInfusionOnItem_ReturnValue, bool K2Node_Select_Default, enum class EActionType Temp_byte_Variable_3, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, enum class EActionType CallFunc_GetInventoryActionType_Type, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, const struct FInventoryEntry& CallFunc_Array_Get_Item, const struct FCraftingRecipeReference& K2Node_Select_Default_3, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array, bool CallFunc_CanCraftRecipe_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue);
	bool CanRepair(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_CanItemBeRepaired_ReturnValue);
	bool CanBeExtracted(class APawn* Pawn, class UInventoryComponentBase* InventoryComponent, class ANWXPlayerController* PlayerController, double CostOfHopePerItemQuantity, float CurrentHope, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_CanItemBeExtracted_ReturnValue);
	void CheckRepairEnabled(class UWidget* Self2, float Temp_real_Variable, float Temp_real_Variable_1, bool Temp_bool_Variable, bool CallFunc_CanRepair_ReturnValue, float K2Node_Select_Default);
	void CheckExtractEnabled(class UWidget* ShortcutEntryWidget, bool Temp_bool_Variable, float Temp_real_Variable, float Temp_real_Variable_1, bool CallFunc_CanBeExtracted_ReturnValue, float K2Node_Select_Default);
	void UpdateRepair(int32 AvailableRepairEssences, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, enum class ESlateVisibility Temp_byte_Variable, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetAvailableRepairEssenceCount_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_CanRepair_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool Temp_bool_Variable_1, int32 CallFunc_GetRequiredEssencesForItemRepair_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ESlateVisibility K2Node_Select_Default_1, class FText CallFunc_Format_ReturnValue);
	void UpdateExtraction(int32 CallFunc_GetEssenceCountYieldForExtraction_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void WBP_SubContextShortcutMenu_AutoGenFunc(const struct FGameplayTag& GameplayTag, bool Hovered, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable, enum class ESlateVisibility K2Node_Select_Default, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, int32 K2Node_Select_Default_1);
	void FocusDefaultWidget(bool CallFunc_IsUsingGamepad_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue);
	void OnButtonSelected(const struct FGameplayTag& UI_Button_Shortcut_Tag, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_CanRepair_ReturnValue, bool CallFunc_CanBeExtracted_ReturnValue);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void Construct();
	void BndEvt__WBP_SubContextShortcutMenu_WBP_Cancel_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_SubContextShortcutMenu(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_SubContextShortcut_Entry_C* K2Node_DynamicCast_AsWBP_Sub_Context_Shortcut_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue);
	void ContextMenuEntrySelected__DelegateSignature(const struct FGameplayTag& MenuTag);
};

}


