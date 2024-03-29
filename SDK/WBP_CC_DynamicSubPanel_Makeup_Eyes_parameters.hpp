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

// 0x88 (0x88 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.OnInputMethodChanged
struct UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  CurrentInputType;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FE7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               LDesiredFocusTarget;                               // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       NewLocalVar;                                       // 0x10(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FE9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x30(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWBP_CC_Appearance_CategoryButton_C*   K2Node_DynamicCast_AsWBP_CC_Appearance_Category_Button; // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FEA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_BP_GetDesiredFocusTarget_ReturnValue;     // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FEB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FEC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_cc_sw_Slider_1D_C*                K2Node_DynamicCast_AsWBP_Cc_Sw_Slider_1D;          // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_BP_GetDesiredFocusTarget_ReturnValue_1;   // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.BP_GetDesiredFocusTarget
struct UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       NewLocalVar_0;                                     // 0x8(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FEF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x28(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FF0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXCommonUserWidget*                  K2Node_DynamicCast_AsNWXCommon_User_Widget;        // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FF2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_BP_GetDesiredFocusTarget_ReturnValue;     // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.RefreshControlEnabled
struct UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_RefreshControlEnabled_Params
{
public:
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x430 (0x430 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.CollectPanelValues
struct UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_CollectPanelValues_Params
{
public:
	TMap<class FString, struct FCharacterCreateTelemetryValuePairs> OutValues;                                         // 0x0(0x50)(Parm, OutParm)
	class FString                                OutPanelName;                                      // 0x50(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	double                                       CurrentLinerColor2A;                               // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentLinerColor1A;                               // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CurrentLinerColor2;                                // 0x70(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CurrentLinerColor1;                                // 0x80(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CurrentLinerMask;                                  // 0x90(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentShadowColor2A;                              // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentShadowColor1A;                              // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CurrentShadowColor2;                               // 0xB0(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CurrentShadowColor1;                               // 0xC0(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CurrentShadowMask;                                 // 0xD0(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue;          // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue_1;        // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue_2;        // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_2;          // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue_3;        // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_3;          // 0x150(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_4;          // 0x160(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue_4;        // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs; // 0x180(0x20)(None)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue_5;        // 0x1A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_1; // 0x1B0(0x20)(None)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_5;          // 0x1D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_2; // 0x1E0(0x20)(None)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_6;          // 0x200(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_3; // 0x210(0x20)(None)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_7;          // 0x230(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue_6;        // 0x240(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_4; // 0x250(0x20)(None)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_5; // 0x270(0x20)(None)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue_7;        // 0x290(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_6; // 0x2A0(0x20)(None)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_8;          // 0x2C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_7; // 0x2D0(0x20)(None)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_9;          // 0x2F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_8; // 0x300(0x20)(None)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_10;         // 0x320(0x10)(ZeroConstructor, HasGetValueTypeHash)
	double                                       CallFunc_GetMakeupAlpha_Alpha;                     // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_11;         // 0x338(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FCharacterCreateTelemetryValuePairs   K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_9; // 0x348(0x20)(None)
	double                                       CallFunc_GetMakeupAlpha_Alpha_1;                   // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, struct FCharacterCreateTelemetryValuePairs> K2Node_MakeMap_Map;                                // 0x370(0x50)(None)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data;                       // 0x3C0(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_1;                     // 0x3D0(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_2;                     // 0x3E0(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_3;                     // 0x3F0(0x10)(NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetMakeupAlpha_Alpha_2;                   // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetMakeupAlpha_Alpha_3;                   // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_4;                     // 0x410(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_5;                     // 0x420(0x10)(NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.CacheStartingPanelValues
struct UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_CacheStartingPanelValues_Params
{
public:
	double                                       CallFunc_GetMakeupAlpha_Alpha;                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetMakeupAlpha_Alpha_1;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data;                       // 0x10(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_1;                     // 0x20(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_2;                     // 0x30(0x10)(NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetMakeupAlpha_Alpha_2;                   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetMakeupAlpha_Alpha_3;                   // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_3;                     // 0x50(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_4;                     // 0x60(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_5;                     // 0x70(0x10)(NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.UpdateUIFromPersistence
struct UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_UpdateUIFromPersistence_Params
{
public:
	TArray<struct FDataTableRowHandle>           CallFunc_GetDataTableRowHandles_RowHandles;        // 0x0(0x10)(ReferenceParm)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data;                       // 0x10(0x10)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FFE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetMakeupAlpha_Alpha;                     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetMakeupAlpha_Alpha_1;                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_1;                     // 0x38(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_2;                     // 0x48(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_GetMakeupData_Data_3;                     // 0x58(0x10)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast; // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1; // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.SetMakeupMask
struct UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_SetMakeupMask_Params
{
public:
	enum class EMakeupType                       Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FFF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_cc_sw_MakeupPicker_C*             CurrentMakeupWidget;                               // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.UpdateMakeup_EyeShadow
struct UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_UpdateMakeup_EyeShadow_Params
{
public:
	class UWBP_cc_sw_MakeupPicker_C*             CurrentMakeupWidget;                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDataTableRowHandle>           CallFunc_GetDataTableRowHandles_RowHandles;        // 0x8(0x10)(ReferenceParm)
	struct FDataTableRowHandle                   CallFunc_Array_Get_Item;                           // 0x18(0x10)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7000[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast_1; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetMakeupAlphaOverride_NewAlpha_ImplicitCast_2; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.PreConstruct
struct UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16 (0x16 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_EyeShadow_ColourA_K2Node_ComponentBoundEvent_11_CC_ColorSwatch_Selected__DelegateSignature
struct UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_EyeShadow_ColourA_K2Node_ComponentBoundEvent_11_CC_ColorSwatch_Selected__DelegateSignature_Params
{
public:
	struct FDataTableRowHandle                   ColorID;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        GridIndex;                                         // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ColorSwatch_;                                      // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RgbSwatch___Disable_tints;                         // 0x15(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16 (0x16 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_EyeShadow_ColourB_K2Node_ComponentBoundEvent_12_CC_ColorSwatch_Selected__DelegateSignature
struct UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_EyeShadow_ColourB_K2Node_ComponentBoundEvent_12_CC_ColorSwatch_Selected__DelegateSignature_Params
{
public:
	struct FDataTableRowHandle                   ColorID;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        GridIndex;                                         // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ColorSwatch_;                                      // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RgbSwatch___Disable_tints;                         // 0x15(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16 (0x16 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_EyeShadow_GlitterColor_K2Node_ComponentBoundEvent_13_CC_ColorSwatch_Selected__DelegateSignature
struct UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_EyeShadow_GlitterColor_K2Node_ComponentBoundEvent_13_CC_ColorSwatch_Selected__DelegateSignature_Params
{
public:
	struct FDataTableRowHandle                   ColorID;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        GridIndex;                                         // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ColorSwatch_;                                      // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RgbSwatch___Disable_tints;                         // 0x15(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_Slider_EyeShadow_GlitterIntensity_K2Node_ComponentBoundEvent_14_ED_SliderValueChanged__DelegateSignature
struct UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_Slider_EyeShadow_GlitterIntensity_K2Node_ComponentBoundEvent_14_ED_SliderValueChanged__DelegateSignature_Params
{
public:
	double                                       Slider_Value;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_Slider_EyeShadow_Intensity_K2Node_ComponentBoundEvent_15_ED_SliderValueChanged__DelegateSignature
struct UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_Slider_EyeShadow_Intensity_K2Node_ComponentBoundEvent_15_ED_SliderValueChanged__DelegateSignature_Params
{
public:
	double                                       Slider_Value;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_StylePicker_K2Node_ComponentBoundEvent_0_PickerEntryUpdated__DelegateSignature
struct UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_BndEvt__WBP_CC_DynamicSubPanel_Makeup_Eyes_StylePicker_K2Node_ComponentBoundEvent_0_PickerEntryUpdated__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.OnAddedToFocusPath
struct UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.OnRemovedFromFocusPath
struct UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0xE8 (0xE8 - 0x0)
// Function WBP_CC_DynamicSubPanel_Makeup_Eyes.WBP_CC_DynamicSubPanel_Makeup_Eyes_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel_Makeup_Eyes
struct UWBP_CC_DynamicSubPanel_Makeup_Eyes_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel_Makeup_Eyes_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7009[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetDesiredFocusTarget_ReturnValue;        // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_700A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BreakVector2D_X;                          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_700B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x30(0x18)(None)
	struct FDataTableRowHandle                   K2Node_ComponentBoundEvent_ColorID_2;              // 0x48(0x10)(NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_GridIndex_2;            // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_ColorSwatch__2;         // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_2; // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_700C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_ComponentBoundEvent_ColorID_1;              // 0x60(0x10)(NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_GridIndex_1;            // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_ColorSwatch__1;         // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints_1; // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_700D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_ComponentBoundEvent_ColorID;                // 0x78(0x10)(NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_GridIndex;              // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_ColorSwatch_;           // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints; // 0x8D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_700E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_ComponentBoundEvent_Slider_Value_1;         // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_Slider_Value;           // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7010[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           CallFunc_GetDataTableRowHandles_RowHandles;        // 0xB0(0x10)(ReferenceParm)
	int32                                        K2Node_ComponentBoundEvent_Index;                  // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                           K2Node_Event_InFocusEvent_1;                       // 0xC8(0x8)(NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7011[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0xD4(0x8)(NoDestructor)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue_1;             // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7012[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


