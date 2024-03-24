#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B0 (0x4F8 - 0x348)
// WidgetBlueprintGeneratedClass WBP_GuideBook_Thumb.WBP_GuideBook_Thumb_C
class UWBP_GuideBook_Thumb_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_appear;                                       // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_0;                                          // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_Root;                                       // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          CantCraftRetainerBox;                              // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Highlight;                                         // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          HoverState;                                        // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_card_shadow;                                   // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_cardicon;                                      // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_HaveCrafted;                                   // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_isRevealedButUnknown;                          // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_newstate;                                      // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_state_selected;                                // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_state_selected_1;                              // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_state_selected_2;                              // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_SelectedState;                             // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Tracking;                                       // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt__;                                             // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Traits;                                         // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNWXMenuDataEntry*                     MenuDataEntry;                                     // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedIsEntryUnlocked;                             // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_451E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ThumbDoubleClick;                                  // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSoftObjectPtr<class UTexture2D>             Tooltip_CardImage;                                 // 0x400(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ThumbRightClicked;                                 // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ThumbLeftClicked;                                  // 0x438(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  ToolTip_Name;                                      // 0x448(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          ClickedEventTag;                                   // 0x460(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DMI_CardSaturation;                                // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         HasNewState_IsObservable;                          // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_451F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_GuideBookComponent_C*              GuideBookComponent;                                // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_GenericTooltip_C*                 TestTootip;                                        // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DMI_NewState;                                      // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          RightClickEvent_Tag;                               // 0x490(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnTilePressed;                                     // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSoftClassPtr<class UNWXMenuDataEntry>       CraftingEntryClass;                                // 0x4A8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UNWXMenuDataEntry>       StructureEntryClass;                               // 0x4D0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_GuideBook_Thumb_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	void UnbindHudGoalTrackingEvent(class UBP_HUDGoalTrackingComponent_C* HudGoalTrackingComponent, class ANWXPlayerController* PlayerController, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_HUDGoalTrackingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue);
	void BindHudGoalTrackingEvent(class UBP_HUDGoalTrackingComponent_C* HudGoalTrackingComponent, class ANWXPlayerController* PlayerController, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsObjectOfClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsObjectOfClass_ReturnValue_1, class UBP_HUDGoalTrackingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue);
	void RefreshNewState(bool HasNewState_IsObservable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateTraitIcons(const TArray<class UStructureTraitCollectionAsset*>& LTraitCollections, const TArray<class UStructureTraitTypeUIData*>& LTraitTypes, const struct FVector2D& Temp_struct_Variable, class UStructureTraitCollectionAsset* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UStructureTraitCollectionAsset* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Array_IsValidIndex_ReturnValue_1, class UWBP_sw_StructureTrait_C* CallFunc_Create_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UWBP_sw_StructureTrait_C* CallFunc_Create_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FVector2D& Temp_struct_Variable_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UBP_MenuDataEntry_Building_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Building, bool K2Node_DynamicCast_bSuccess, TArray<class UStructureTraitCollectionAsset*>& CallFunc_GetTraitTypes_ReturnValue);
	void OnInventoryUpdated(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity);
	void UpdateCraftableCosmeticBox(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UBP_MenuDataEntry_Crafting_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCraftable_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void GetMenuDataEntry(class UNWXMenuDataEntry** Entry);
	void UnbindFromEvents(class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TScriptInterface<class IItemContainer> CallFunc_GetEssencePouch_Container, bool CallFunc_GetEssencePouch_ReturnValue, class UNWXMenuDataEntryObservedStateTracker* CallFunc_GetStateTracker_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5);
	void TryFocusOnWidget(bool CallFunc_IsSearching_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UNWXMenuDataEntry* CallFunc_GetLastSelectedEntryForCategory_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetCardIcon(bool CallFunc_IsValidSoftObjectReference_ReturnValue, enum class EEntryProgressionStates CallFunc_GetState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void TryInitializeCraftingEntry(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent, TScriptInterface<class IItemContainer> CallFunc_GetEssencePouch_Container, bool CallFunc_GetEssencePouch_ReturnValue, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UBP_MenuDataEntry_Crafting_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting, bool K2Node_DynamicCast_bSuccess);
	void UpdateImage(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class EEntryProgressionStates Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class EEntryProgressionStates Temp_byte_Variable_9, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, enum class ESlateVisibility Temp_byte_Variable_13, enum class EEntryProgressionStates Temp_byte_Variable_14, float Temp_real_Variable, float Temp_real_Variable_1, float Temp_real_Variable_2, float Temp_real_Variable_3, enum class EEntryProgressionStates Temp_byte_Variable_15, enum class EEntryProgressionStates CallFunc_GetState_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, enum class EEntryProgressionStates CallFunc_GetState_ReturnValue_1, float K2Node_Select_Default_3);
	void OnObservationStateChanged(bool IsObservable);
	void CheckPinnedState(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPinned_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateSelectedCosmetic(bool ShowOutline, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void OnThumbSelected(const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue, class UNWXMenuDataEntryObservedStateTracker* CallFunc_GetStateTracker_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void CheckEntryUnlocked(struct FSkillDataReference& UnlockedSkill, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue);
	void SetupGeneralCardCosmetics(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_2, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, enum class EEntryProgressionStates CallFunc_GetState_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_CanViewDetails_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UNWXMenuDataEntryObservedStateTracker* CallFunc_GetStateTracker_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsObservable_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const struct FLinearColor& K2Node_Select_Default_1, const struct FLinearColor& K2Node_Select_Default_2);
	struct FEventReply OnInputConfirm(const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnMouseButtonDown_Border(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1);
	struct FEventReply OnMouseDoubleClick_Border(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	class UWidget* CreateTooltipWidget(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue_1, class FText CallFunc_GetDisplayName_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue_1, bool CallFunc_CanViewDetails_ReturnValue);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void Destruct();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnEntryReleased();
	void Construct();
	void ExecuteUbergraph_WBP_GuideBook_Thumb(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_bIsSelected, bool K2Node_Event_bIsExpanded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_GetImage_IsValidReference, TSoftObjectPtr<class UTexture2D> CallFunc_GetImage_EntryImage, class UObject* K2Node_Event_ListItemObject, class UNWXMenuDataEntry* K2Node_DynamicCast_AsNWXMenu_Data_Entry, bool K2Node_DynamicCast_bSuccess, class UNWXMenuDataEntryObservedStateTracker* CallFunc_GetStateTracker_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue);
	void OnTilePressed__DelegateSignature(class UNWXMenuDataEntry* MenuDataEntry);
	void ThumbLeftClicked__DelegateSignature(class UNWXMenuDataEntry* MenuDataEntry);
	void ThumbRightClicked__DelegateSignature(class UNWXMenuDataEntry* MenuDataEntry);
	void ThumbDoubleClick__DelegateSignature(class UNWXMenuDataEntry* MenuDataEntry);
};

}


