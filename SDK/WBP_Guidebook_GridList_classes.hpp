#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x440 - 0x390)
// WidgetBlueprintGeneratedClass WBP_Guidebook_GridList.WBP_Guidebook_GridList_C
class UWBP_Guidebook_GridList_C : public UNWXGuideBookGridList
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Common_Button_Base_C*             CBU_ReadAll;                                       // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox;                                         // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Vb_PanelList;                                      // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GuideBook_GridList_FilterContainer_C* WBP_GuideBook_GridList_Filters;                    // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Gridlist_ThumbClicked;                             // 0x3B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Gridlist_ThumbDoubleClicked;                       // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Gridlist_ThumbHover;                               // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UNWXMenuDataEntry*                     LastSelectedEntryForCurrentCategory;               // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 WidgetPanels_Expanded;                             // 0x3F0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_Guidebook_ListPanel_C*            MatchingListPanel;                                 // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Gridlist_ListPanelCollapsedToggled;                // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Gridlist_TilePressedGamepad;                       // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWidget*                               MatchingListPanelFocusTarget;                      // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Guidebook_GridList_C* GetDefaultObj();

	class UWidget* DoCustomNavigation(enum class EUINavigation Navigation);
	void OnCustomNavigationStarted();
	void ScrollAndReturnLastSelectedEntry(class UWidget** OutFocusWidget, class UWBP_Guidebook_ListPanel_C* L_MatchingListPanel, class UNWXMenuDataEntry* L_LastSelectedEntry, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, class UNWXMenuDataEntry* CallFunc_GetLastSelectedEntryForCategory_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UWBP_Guidebook_ListPanel_C* K2Node_DynamicCast_AsWBP_Guidebook_List_Panel, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class UNWXMenuDataEntry* L_LastSelectedEntry, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UNWXMenuDataEntry* CallFunc_GetLastSelectedEntryForCategory_ReturnValue, class UNWXCommonUserWidget* K2Node_DynamicCast_AsNWXCommon_User_Widget, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_Guidebook_ListPanel_C* K2Node_DynamicCast_AsWBP_Guidebook_List_Panel, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue_1, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UListView* K2Node_DynamicCast_AsList_View, bool K2Node_DynamicCast_bSuccess_2, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	class UWidget* GetDefaultFocusWidget();
	void SetNextHeaderForChilds(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UWidget* CallFunc_Array_Get_Item_1, class UWBP_Guidebook_ListPanel_C* K2Node_DynamicCast_AsWBP_Guidebook_List_Panel, bool K2Node_DynamicCast_bSuccess, class UWBP_Guidebook_ListPanel_C* K2Node_DynamicCast_AsWBP_Guidebook_List_Panel_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void OnTilePressedGamepad();
	void UnbindFromListPanelEvents(class UWBP_Guidebook_ListPanel_C* LCurrentListPanel, const TArray<class UWidget*>& LAllListPanels, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UWidget* CallFunc_Array_Get_Item, class UWBP_Guidebook_ListPanel_C* K2Node_DynamicCast_AsWBP_Guidebook_List_Panel, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue);
	void GenerateListPanels(struct FUIGroupInfo& GroupInfo, TArray<class UNWXMenuDataEntry*>& Entries, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWBP_Guidebook_ListPanel_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_CheckIfPanelWasExpanded_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4);
	void InitializeReadAllButton(class UBP_GuideBookComponent_C* LGuideBook, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue_1, int32 CallFunc_GetNumObservableEntriesForCategory_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void OnEntryObservationStateUpdated(struct FGameplayTag& CategoryTag, int32 HasNewEntries, bool CallFunc_Greater_IntInt_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
	void UpdateReadAllButtonStatus(struct FGameplayTag& NewCategory, int32 CallFunc_GetNumObservableEntriesForCategory_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void OnListPanelCollapsedToggled(bool IsGroupExpanded, const struct FGameplayTag& GroupID, bool CallFunc_RemoveGameplayTag_ReturnValue);
	bool CheckIfPanelWasExpanded(const struct FUIGroupInfo& GroupInfo, bool CallFunc_HasTag_ReturnValue);
	void OnUsingGamepadChanged(bool bUsingGamepad, bool Temp_bool_Variable, enum class EDescendantScrollDestination Temp_byte_Variable, enum class EDescendantScrollDestination Temp_byte_Variable_1, enum class EDescendantScrollDestination K2Node_Select_Default);
	void RefreshMenu(struct FGameplayTag& Category, bool CallFunc_IsGameplayTagValid_ReturnValue, const struct FGameplayTag& CallFunc_GuideBookQuestCategoryTag_ReturnValue, bool CallFunc_NotEqual_GameplayTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnThumbDoubleClick(class UNWXMenuDataEntry* MenuDataEntry);
	void OnThumbClick(class UNWXMenuDataEntry* MenuDataEntry);
	void CheckForEmptyScreen(uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, const struct FLinearColor& Temp_struct_Variable, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FLinearColor& Temp_struct_Variable_1, class UWBP_BasicText_OneLine_C* CallFunc_Create_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, class UWBP_BasicText_OneLine_C* CallFunc_Create_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, class FText CallFunc_Format_ReturnValue_1, class UWBP_BasicText_OneLine_C* CallFunc_Create_ReturnValue_2, const struct FMargin& K2Node_MakeStruct_Margin_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const class FString& CallFunc_GetSearchString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_4, const class FString& CallFunc_GetSearchString_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, const struct FLinearColor& Temp_struct_Variable_2, uint8 CallFunc_MakeLiteralByte_ReturnValue_5, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_2);
	void ScrollToLastSelectedEntry();
	void Construct();
	void Destruct();
	void BndEvt__WBP_Guidebook_GridList_CBU_ReadAll_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void ExecuteUbergraph_WBP_Guidebook_GridList(int32 EntryPoint, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue_1, class UNWXMenuDataEntry* CallFunc_GetLastSelectedEntryForCategory_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item, class UWBP_Guidebook_ListPanel_C* K2Node_DynamicCast_AsWBP_Guidebook_List_Panel, bool K2Node_DynamicCast_bSuccess, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_GetIsEnabled_ReturnValue, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsSearching_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ECommonInputType K2Node_Event_CurrentInputType);
	void Gridlist_TilePressedGamepad__DelegateSignature();
	void Gridlist_ListPanelCollapsedToggled__DelegateSignature(bool IsGroupExpanded, const struct FGameplayTag& GroupID);
	void Gridlist_ThumbHover__DelegateSignature(bool Hover, class UNWXMenuDataEntry* MenuDataEntry);
	void Gridlist_ThumbDoubleClicked__DelegateSignature(class UNWXMenuDataEntry* MenuDataEntry);
	void Gridlist_ThumbClicked__DelegateSignature(class UNWXMenuDataEntry* MenuDataEntry);
};

}


