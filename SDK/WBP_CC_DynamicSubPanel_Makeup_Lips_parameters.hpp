#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x80 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Lips.WBP_CC_DynamicSubPanel_Makeup_Lips_C.OnInputMethodChanged
struct UWBP_CC_DynamicSubPanel_Makeup_Lips_C_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  CurrentInputType;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               LDesiredFocusTarget;                               // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       LSBChildren;                                       // 0x10(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CC_Appearance_CategoryButton_C*   K2Node_DynamicCast_AsWBP_CC_Appearance_Category_Button; // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_BP_GetDesiredFocusTarget_ReturnValue;     // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x58(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWBP_cc_sw_Slider_1D_C*                K2Node_DynamicCast_AsWBP_Cc_Sw_Slider_1D;          // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_240[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_BP_GetDesiredFocusTarget_ReturnValue_1;   // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Lips.WBP_CC_DynamicSubPanel_Makeup_Lips_C.BP_GetDesiredFocusTarget
struct UWBP_CC_DynamicSubPanel_Makeup_Lips_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       LSBChildren;                                       // 0x8(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_242[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x30(0x10)(ReferenceParm, ContainsInstancedReference)
	class UNWXCommonUserWidget*                  K2Node_DynamicCast_AsNWXCommon_User_Widget;        // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_244[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_BP_GetDesiredFocusTarget_ReturnValue;     // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_245[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Lips.WBP_CC_DynamicSubPanel_Makeup_Lips_C.RefreshWidgetControlENabled
struct UWBP_CC_DynamicSubPanel_Makeup_Lips_C_RefreshWidgetControlENabled_Params
{
public:
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Lips.WBP_CC_DynamicSubPanel_Makeup_Lips_C.PopulateStylePicker
struct UWBP_CC_DynamicSubPanel_Makeup_Lips_C_PopulateStylePicker_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           CallFunc_GetDataTableRowHandles_RowHandles;        // 0x28(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x270 (0x270 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Lips.WBP_CC_DynamicSubPanel_Makeup_Lips_C.CollectPanelValues
struct UWBP_CC_DynamicSubPanel_Makeup_Lips_C_CollectPanelValues_Params
{
public:
	TMap<class FString, struct FCharacterCreateTelemetryValuePairs> OutValues;                                         // 0x0(0x50)(Parm, OutParm)
	class FString                                OutPanelName;                                      // 0x50(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	double                                       CurrentColor2A;                                    // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentColor1A;                                    // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CurrentColor2;                                     // 0x70(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CurrentColor1;                                     // 0x80(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CurrentMask;                                       // 0x90(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs; // 0xC0(0x20)(None)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_2;          // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_3;          // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_1; // 0x100(0x20)(None)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_4;          // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue;          // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_5;          // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_2; // 0x150(0x20)(None)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue_1;        // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_3; // 0x180(0x20)(None)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue_2;        // 0x1A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue_3;        // 0x1B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	double                                       CallFunc_GetMakeupAlpha_Alpha;                     // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_4; // 0x1C8(0x20)(None)
	TMap<class FString, struct FCharacterCreateTelemetryValuePairs> K2Node_MakeMap_Map;                                // 0x1E8(0x50)(None)
	double                                       CallFunc_GetMakeupAlpha_Alpha_1;                   // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data;                       // 0x240(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_1;                     // 0x250(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_2;                     // 0x260(0x10)(NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Lips.WBP_CC_DynamicSubPanel_Makeup_Lips_C.CacheStartingPanelValues
struct UWBP_CC_DynamicSubPanel_Makeup_Lips_C_CacheStartingPanelValues_Params
{
public:
	double                                       CallFunc_GetMakeupAlpha_Alpha;                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetMakeupAlpha_Alpha_1;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data;                       // 0x10(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_1;                     // 0x20(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_2;                     // 0x30(0x10)(NoDestructor, HasGetValueTypeHash)
};

// 0x7C (0x7C - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Lips.WBP_CC_DynamicSubPanel_Makeup_Lips_C.UpdateUIFromPersistence
struct UWBP_CC_DynamicSubPanel_Makeup_Lips_C_UpdateUIFromPersistence_Params
{
public:
	TArray<struct FDataTableRowHandle>           CallFunc_GetDataTableRowHandles_RowHandles;        // 0x0(0x10)(ReferenceParm)
	double                                       CallFunc_GetLipGloss_OutLipGloss;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data;                       // 0x18(0x10)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetMakeupAlpha_Alpha;                     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetMakeupAlpha_Alpha_1;                   // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_1;                     // 0x40(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_2;                     // 0x50(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_3;                     // 0x60(0x10)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast; // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1; // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_2; // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Lips.WBP_CC_DynamicSubPanel_Makeup_Lips_C.UpdateMakeup
struct UWBP_CC_DynamicSubPanel_Makeup_Lips_C_UpdateMakeup_Params
{
public:
	class UWBP_cc_sw_MakeupPicker_C*             CurrentMakeupWidget;                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDataTableRowHandle>           CallFunc_GetDataTableRowHandles_RowHandles;        // 0x8(0x10)(ReferenceParm)
	struct FDataTableRowHandle                   CallFunc_Array_Get_Item;                           // 0x18(0x10)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_261[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SetLipGlossOverride_NewLipGloss_ImplicitCast; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast_1; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast_2; // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16 (0x16 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Lips.WBP_CC_DynamicSubPanel_Makeup_Lips_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Lips_EyeShadow_ColourA_K2Node_ComponentBoundEvent_3_CC_ColorSwatch_Selected__DelegateSignature
struct UWBP_CC_DynamicSubPanel_Makeup_Lips_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Lips_EyeShadow_ColourA_K2Node_ComponentBoundEvent_3_CC_ColorSwatch_Selected__DelegateSignature_Params
{
public:
	struct FDataTableRowHandle                   ColorID;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        GridIndex;                                         // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ColorSwatch_;                                      // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RgbSwatch___Disable_tints;                         // 0x15(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16 (0x16 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Lips.WBP_CC_DynamicSubPanel_Makeup_Lips_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Lips_EyeShadow_ColourB_K2Node_ComponentBoundEvent_4_CC_ColorSwatch_Selected__DelegateSignature
struct UWBP_CC_DynamicSubPanel_Makeup_Lips_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Lips_EyeShadow_ColourB_K2Node_ComponentBoundEvent_4_CC_ColorSwatch_Selected__DelegateSignature_Params
{
public:
	struct FDataTableRowHandle                   ColorID;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        GridIndex;                                         // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ColorSwatch_;                                      // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RgbSwatch___Disable_tints;                         // 0x15(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16 (0x16 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Lips.WBP_CC_DynamicSubPanel_Makeup_Lips_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Lips_EyeShadow_GlitterColor_K2Node_ComponentBoundEvent_5_CC_ColorSwatch_Selected__DelegateSignature
struct UWBP_CC_DynamicSubPanel_Makeup_Lips_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Lips_EyeShadow_GlitterColor_K2Node_ComponentBoundEvent_5_CC_ColorSwatch_Selected__DelegateSignature_Params
{
public:
	struct FDataTableRowHandle                   ColorID;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        GridIndex;                                         // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ColorSwatch_;                                      // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RgbSwatch___Disable_tints;                         // 0x15(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Lips.WBP_CC_DynamicSubPanel_Makeup_Lips_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Lips_Slider_EyeShadow_GlitterIntensity_K2Node_ComponentBoundEvent_7_ED_SliderValueChanged__DelegateSignature
struct UWBP_CC_DynamicSubPanel_Makeup_Lips_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Lips_Slider_EyeShadow_GlitterIntensity_K2Node_ComponentBoundEvent_7_ED_SliderValueChanged__DelegateSignature_Params
{
public:
	double                                       Slider_Value;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Lips.WBP_CC_DynamicSubPanel_Makeup_Lips_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Lips_Slider_EyeShadow_Intensity_K2Node_ComponentBoundEvent_8_ED_SliderValueChanged__DelegateSignature
struct UWBP_CC_DynamicSubPanel_Makeup_Lips_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Lips_Slider_EyeShadow_Intensity_K2Node_ComponentBoundEvent_8_ED_SliderValueChanged__DelegateSignature_Params
{
public:
	double                                       Slider_Value;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Lips.WBP_CC_DynamicSubPanel_Makeup_Lips_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Lips_Lipstick_Gloss1_K2Node_ComponentBoundEvent_0_ED_SliderValueChanged__DelegateSignature
struct UWBP_CC_DynamicSubPanel_Makeup_Lips_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Lips_Lipstick_Gloss1_K2Node_ComponentBoundEvent_0_ED_SliderValueChanged__DelegateSignature_Params
{
public:
	double                                       Slider_Value;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Lips.WBP_CC_DynamicSubPanel_Makeup_Lips_C.PreConstruct
struct UWBP_CC_DynamicSubPanel_Makeup_Lips_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Lips.WBP_CC_DynamicSubPanel_Makeup_Lips_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Lips_WBP_CC_sw_PickerButton_K2Node_ComponentBoundEvent_1_PickerEntryUpdated__DelegateSignature
struct UWBP_CC_DynamicSubPanel_Makeup_Lips_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Lips_WBP_CC_sw_PickerButton_K2Node_ComponentBoundEvent_1_PickerEntryUpdated__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Lips.WBP_CC_DynamicSubPanel_Makeup_Lips_C.OnAddedToFocusPath
struct UWBP_CC_DynamicSubPanel_Makeup_Lips_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Lips.WBP_CC_DynamicSubPanel_Makeup_Lips_C.OnRemovedFromFocusPath
struct UWBP_CC_DynamicSubPanel_Makeup_Lips_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Lips.WBP_CC_DynamicSubPanel_Makeup_Lips_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel_Makeup_Lips
struct UWBP_CC_DynamicSubPanel_Makeup_Lips_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel_Makeup_Lips_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_271[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetDesiredFocusTarget_ReturnValue;        // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_X;                          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_ComponentBoundEvent_ColorID_2;              // 0x20(0x10)(NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_GridIndex_2;            // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_ColorSwatch__2;         // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_2; // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_273[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_ComponentBoundEvent_ColorID_1;              // 0x38(0x10)(NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_GridIndex_1;            // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_ColorSwatch__1;         // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_1; // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_275[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_ComponentBoundEvent_ColorID;                // 0x50(0x10)(NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_GridIndex;              // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_ColorSwatch_;           // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints; // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_277[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_ComponentBoundEvent_Slider_Value_2;         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_Slider_Value_1;         // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_Slider_Value;           // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_279[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Index;                  // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                           K2Node_Event_InFocusEvent_1;                       // 0x88(0x8)(NoDestructor)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x94(0x8)(NoDestructor)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue_1;             // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


