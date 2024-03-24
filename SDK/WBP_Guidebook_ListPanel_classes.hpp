#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x430 - 0x348)
// WidgetBlueprintGeneratedClass WBP_Guidebook_ListPanel.WBP_Guidebook_ListPanel_C
class UWBP_Guidebook_ListPanel_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTileView*                             Grid;                                              // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             List;                                              // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GuideBook_ListPanel_Header_C*     WBP_GuideBook_ListPanel_Header;                    // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      WS_ListView;                                       // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ListPanel_ThumbClicked;                            // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ListPanel_ThumbDoubleClicked;                      // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FUIGroupInfo                          GroupInfo;                                         // 0x390(0x20)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class UNWXMenuDataEntry*>             AllEntriesInPanel;                                 // 0x3B0(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         ExpandedPanel;                                     // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_8DE3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ListPanel_GroupCollapsedToggled;                   // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                             ThumbnailSize;                                     // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ThumbnailSizeGlossary;                             // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ListPanel_TilePressedGamepad;                      // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_GuideBookComponent_C*              Guidebook;                                         // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UListView*                             ActiveView;                                        // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           NextHeader;                                        // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ListPanel_CustomNavigatingStarted;                 // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_Guidebook_ListPanel_C* GetDefaultObj();

	class UWidget* ListCustomNavigation(enum class EUINavigation Navigation, int32 LNewIndex, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue_1, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
	void UseHorizontalView(struct FGameplayTag& InCategoryTag, bool* bResult, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess);
	class UWidget* BP_GetDesiredFocusTarget(const TArray<class UUserWidget*>& L_CachedEntryWidgets, class UNWXMenuDataEntry* L_LastSelectedEntry, int32 Temp_int_Array_Index_Variable, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, class UWBP_GuideBook_HorizontalThumb_C* K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb, bool K2Node_DynamicCast_bSuccess, class UWBP_GuideBook_Thumb_C* K2Node_DynamicCast_AsWBP_Guide_Book_Thumb, bool K2Node_DynamicCast_bSuccess_1, class UNWXMenuDataEntry* CallFunc_GetMenuDataEntry_Entry, class UNWXMenuDataEntry* CallFunc_GetMenuDataEntry_Entry_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue_1, class UUserWidget* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsEmpty_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, class UNWXMenuDataEntry* CallFunc_GetLastSelectedEntryForCategory_ReturnValue);
	class UWidget* DoCustomNavigation(enum class EUINavigation Navigation, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item);
	class UWidget* GridCustomNavigation(enum class EUINavigation Navigation, int32 ElementsInGridRow, int32 NewIndex, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Multiply_IntInt_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue_1, class UUserWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, class ANWXPlayerController* CallFunc_GetNWXPlayerController_ReturnValue, bool CallFunc_HasUserFocus_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2);
	void Initialize(const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, bool CallFunc_UseHorizontalView_bResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook, float CallFunc_SetEntryWidth_NewWidth_ImplicitCast, float CallFunc_SetEntryHeight_NewHeight_ImplicitCast);
	void OnTilePressedGamepad(class UNWXMenuDataEntry* MenuDataEntry);
	class UWidget* GetListPanelFocusWidget(TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue_1, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void Try_Set_Thumbnail_Size_for_Glossary(bool Temp_bool_Variable, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, const struct FVector2D& K2Node_Select_Default);
	void RefreshPanelVis(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void TogglePanelDisplay(bool CallFunc_Not_PreBool_ReturnValue);
	void OnEntryGenerated(class UUserWidget* Widget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_GuideBook_HorizontalThumb_C* K2Node_DynamicCast_AsWBP_Guide_Book_Horizontal_Thumb, bool K2Node_DynamicCast_bSuccess, class UWBP_GuideBook_Thumb_C* K2Node_DynamicCast_AsWBP_Guide_Book_Thumb, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_UseHorizontalView_bResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4);
	void OnEntryReleased(class UUserWidget* Widget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_GuideBook_Thumb_C* K2Node_DynamicCast_AsWBP_Guide_Book_Thumb, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void AddEntriesToPanel();
	void GetEntriesInPanel(TArray<class UNWXMenuDataEntry*>* MenuDataEntries);
	void OnThumbDoubleClick(class UNWXMenuDataEntry* MenuDataEntry);
	void OnThumbClicked(class UNWXMenuDataEntry* MenuDataEntry);
	void Construct();
	void Destruct();
	void BndEvt__WBP_Guidebook_ListPanel_WBP_GuideBook_ListPanel_Header_K2Node_ComponentBoundEvent_0_OnHeaderClicked__DelegateSignature();
	void BndEvt__WBP_Guidebook_ListPanel_Grid_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
	void BndEvt__WBP_Guidebook_ListPanel_List_K2Node_ComponentBoundEvent_3_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
	void ExecuteUbergraph_WBP_Guidebook_ListPanel(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* K2Node_ComponentBoundEvent_Widget_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUserWidget* K2Node_ComponentBoundEvent_Widget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
	void ListPanel_CustomNavigatingStarted__DelegateSignature();
	void ListPanel_TilePressedGamepad__DelegateSignature();
	void ListPanel_GroupCollapsedToggled__DelegateSignature(bool GroupExpanded, const struct FGameplayTag& GroupTag);
	void ListPanel_ThumbDoubleClicked__DelegateSignature(class UNWXMenuDataEntry* MenuDataEntry);
	void ListPanel_ThumbClicked__DelegateSignature(class UNWXMenuDataEntry* MenuDataEntry);
};

}


