#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x418 - 0x340)
// WidgetBlueprintGeneratedClass WBP_UIK_MenuTabs.WBP_UIK_MenuTabs_C
class UWBP_UIK_MenuTabs_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               BU_DN;                                             // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               BU_UP;                                             // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ButtonBox_Horz;                                    // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ButtonBox_Vert;                                    // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_No_Text_C*          CBU_Next;                                          // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_No_Text_C*          CBU_Previous;                                      // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               TMP_BUNext;                                        // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               TMP_BUPrevious;                                    // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher;                                    // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                          TabArray;                                          // 0x390(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            TabSelected;                                       // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        ActiveIndex;                                       // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         UseVerticalLayout;                                 // 0x3B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class ESlateVisibility                  ArrowButtonVis;                                    // 0x3B5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_33BE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          HighlightedColour;                                 // 0x3B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          TextColor;                                         // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          TextColorHovered;                                  // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class E_UI_ButtonTypes                  TabStyle;                                          // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_33BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            ButtonTab_BGImage;                                 // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                TabSkin_Widget;                                    // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FDataTableRowHandle                   AudioEvent_Table;                                  // 0x400(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ButtonStyle;                                       // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_UIK_MenuTabs_C* GetDefaultObj();

	void IsValidInitialActiveIndex(bool* IsValid, int64 CallFunc_Conv_IntToInt64_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void UnbindFromTabEvents(const TArray<class UWidget*>& LChildrenWidgets, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_Button_Tab_C* K2Node_DynamicCast_AsWBP_Button_Tab, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UPanelWidget* K2Node_Select_Default, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue);
	void UpdateEnabledState(const TArray<class UWidget*>& LChildrenWidgets, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_IntInt_ReturnValue, class UCommonButtonBase* K2Node_DynamicCast_AsCommon_Button_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelWidget* K2Node_Select_Default, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue);
	struct FEventReply OnInputPrevious(const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FGameplayTag& CallFunc_SelectedLeftEventTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 K2Node_MathExpression_ReturnValue, class FText CallFunc_Array_Get_Item);
	struct FEventReply OnInputNext(const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FGameplayTag& CallFunc_SelectedLeftEventTag_ReturnValue, class FText CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue);
	void OnTabSelected(class FText Text, int32 Index);
	void SelectTab(int32 TabIndex, const TArray<class UWidget*>& NewLocalVar_0);
	void RefreshTabBox(class UWBP_Common_Button_Base_C* NewLocalVar, class UWBP_Button_Tab_C* LButtonTab, class UWBP_Button_Tab_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FMargin& K2Node_MakeStruct_Margin, class UPanelWidget* K2Node_Select_Default, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelWidget* K2Node_Select_Default_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void BndEvt__TMP_BURight_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__TMP_BULeft_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BU_UP_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BU_DN_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_UIK_MenuTabs_CBU_Next_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_UIK_MenuTabs_CBU_Previous_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_UIK_MenuTabs(int32 EntryPoint, const struct FEventReply& CallFunc_OnInputPrevious_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default, const struct FEventReply& CallFunc_OnInputNext_ReturnValue, const struct FEventReply& CallFunc_OnInputPrevious_ReturnValue_1, const struct FEventReply& CallFunc_OnInputPrevious_ReturnValue_2, const struct FEventReply& CallFunc_OnInputNext_ReturnValue_1, bool CallFunc_IsValidInitialActiveIndex_IsValid, bool K2Node_Event_IsDesignTime, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, const struct FEventReply& CallFunc_OnInputNext_ReturnValue_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
	void TabSelected__DelegateSignature(class FText SelectedTabName, int32 ActiveTab);
};

}


