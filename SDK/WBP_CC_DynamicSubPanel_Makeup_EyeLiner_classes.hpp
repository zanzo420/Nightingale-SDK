#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x558 - 0x480)
// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_Makeup_EyeLiner.WBP_CC_DynamicSubPanel_Makeup_EyeLiner_C
class UWBP_CC_DynamicSubPanel_Makeup_EyeLiner_C : public UWBP_CC_DynamicSubPanel__Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CC_Appearance_CategoryButton_C*   EyeLiner_ColourA;                                  // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_Appearance_CategoryButton_C*   EyeLiner_ColourB;                                  // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_Appearance_CategoryButton_C*   EyeLiner_GlitterColour;                            // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox;                                         // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_Slider_1D_C*                Slider_EyeLiner_Glitter_Intensity;                 // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_Slider_1D_C*                Slider_EyeLiner_Intensity;                         // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_sw_PickerButton_C*             StylePicker;                                       // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_PanelHeader_C*              WBP_cc_sw_PanelHeader;                             // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PanelConfigButtons_C*             WBP_PanelConfigButtons;                            // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CachedShadowMask;                                  // 0x4D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CachedShadowColor1;                                // 0x4E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CachedShadowColor2;                                // 0x4F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       CachedShadowColor1A;                               // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CachedShadowColor2A;                               // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CachedLinerMask;                                   // 0x518(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CachedLinerColor1;                                 // 0x528(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CachedLinerColor2;                                 // 0x538(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       CachedLinerColor1A;                                // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CachedLinerColor2A;                                // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CC_DynamicSubPanel_Makeup_EyeLiner_C* GetDefaultObj();

	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType, const TArray<class UWidget*>& LSBChildren, class UWidget* LDesiredFocusTarget, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_CC_Appearance_CategoryButton_C* K2Node_DynamicCast_AsWBP_CC_Appearance_Category_Button, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_Array_Get_Item, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWBP_cc_sw_Slider_1D_C* K2Node_DynamicCast_AsWBP_Cc_Sw_Slider_1D, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue_1);
	class UWidget* BP_GetDesiredFocusTarget(const TArray<class UWidget*>& LSBChildren, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UNWXCommonUserWidget* K2Node_DynamicCast_AsNWXCommon_User_Widget, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void RefreshControlEnabled(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void PopulateStylePicker(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void UpdateMakeup(TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, double CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast, double CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast_1, double CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast_2);
	void CollectPanelValues(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>* OutValues, class FString* OutPanelName, double CurrentLinerColor2A, double CurrentLinerColor1A, const struct FDataTableRowHandle& CurrentLinerColor2, const struct FDataTableRowHandle& CurrentLinerColor1, const struct FDataTableRowHandle& CurrentLinerMask, double CurrentShadowColor2A, double CurrentShadowColor1A, const struct FDataTableRowHandle& CurrentShadowColor2, const struct FDataTableRowHandle& CurrentShadowColor1, const struct FDataTableRowHandle& CurrentShadowMask, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_3, const class FString& CallFunc_Conv_NameToString_ReturnValue_3, const class FString& CallFunc_Conv_NameToString_ReturnValue_4, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_4, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_5, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_5, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_6, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_3, const class FString& CallFunc_Conv_NameToString_ReturnValue_7, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_6, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_4, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_5, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_7, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_6, const class FString& CallFunc_Conv_NameToString_ReturnValue_8, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_7, const class FString& CallFunc_Conv_NameToString_ReturnValue_9, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_8, const class FString& CallFunc_Conv_NameToString_ReturnValue_10, double CallFunc_GetMakeupAlpha_Alpha, const class FString& CallFunc_Conv_NameToString_ReturnValue_11, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_9, double CallFunc_GetMakeupAlpha_Alpha_1, TMap<class FString, struct FCharacterCreateTelemetryValuePairs> K2Node_MakeMap_Map, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_1, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_2, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_3, double CallFunc_GetMakeupAlpha_Alpha_2, double CallFunc_GetMakeupAlpha_Alpha_3, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_4, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_5);
	void CacheStartingPanelValues(double CallFunc_GetMakeupAlpha_Alpha, double CallFunc_GetMakeupAlpha_Alpha_1, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_1, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_2, double CallFunc_GetMakeupAlpha_Alpha_2, double CallFunc_GetMakeupAlpha_Alpha_3, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_3, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_4, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_5);
	void UpdateUIFromPersistence(TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, double CallFunc_GetMakeupAlpha_Alpha, double CallFunc_GetMakeupAlpha_Alpha_1, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_1, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_2, const struct FDataTableRowHandle& CallFunc_GetMakeupData_Data_3, float CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast, float CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1);
	void SetMakeupMask(enum class EMakeupType Type, class UWBP_cc_sw_MakeupPicker_C* CurrentMakeupWidget);
	void Construct();
	void ResetPanelContent();
	void BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_EyeLiner_ColourA_K2Node_ComponentBoundEvent_8_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints);
	void BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_EyeLiner_ColourB_K2Node_ComponentBoundEvent_9_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints);
	void BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_EyeLiner_GlitterColour_K2Node_ComponentBoundEvent_10_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints);
	void BndEvt__WBP_CC_DynamicSubPanel_Makeup_EyeLiner_Slider_EyeLiner_Glitter_Intensity_K2Node_ComponentBoundEvent_13_ED_SliderValueChanged__DelegateSignature(double Slider_Value);
	void BndEvt__WBP_CC_DynamicSubPanel_Makeup_EyeLiner_Slider_EyeLiner_Intensity_B_K2Node_ComponentBoundEvent_15_ED_SliderValueChanged__DelegateSignature(double Slider_Value);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_CC_DynamicSubPanel_Makeup_EyeLiner_StylePicker_K2Node_ComponentBoundEvent_1_PickerEntryUpdated__DelegateSignature(int32 Index);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void BndEvt__WBP_CC_DynamicSubPanel_Makeup_EyeLiner_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_2_OnResetSelected__DelegateSignature();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ExecuteUbergraph_WBP_CC_DynamicSubPanel_Makeup_EyeLiner(int32 EntryPoint, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID_2, int32 K2Node_ComponentBoundEvent_GridIndex_2, bool K2Node_ComponentBoundEvent_ColorSwatch__2, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_2, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID_1, int32 K2Node_ComponentBoundEvent_GridIndex_1, bool K2Node_ComponentBoundEvent_ColorSwatch__1, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_1, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID, int32 K2Node_ComponentBoundEvent_GridIndex, bool K2Node_ComponentBoundEvent_ColorSwatch_, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints, double K2Node_ComponentBoundEvent_Slider_Value_1, double K2Node_ComponentBoundEvent_Slider_Value, bool K2Node_Event_IsDesignTime, int32 K2Node_ComponentBoundEvent_Index, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_IsUsingGamepad_ReturnValue_1, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
};

}


