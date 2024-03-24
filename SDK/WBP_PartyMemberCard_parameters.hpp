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

// 0x10 (0x10 - 0x0)
// Function WBP_PartyMemberCard.WBP_PartyMemberCard_C.OnReportConfirmationClose
struct UWBP_PartyMemberCard_C_OnReportConfirmationClose_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x230 (0x230 - 0x0)
// Function WBP_PartyMemberCard.WBP_PartyMemberCard_C.OnReportSubmit
struct UWBP_PartyMemberCard_C_OnReportSubmit_Params
{
public:
	class FString                                L_ReportReason;                                    // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x38(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_1;                              // 0x48(0x18)(ConstParm)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x60(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x78(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0xC8(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0xE0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xF8(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x148(0x50)(HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_2;                              // 0x198(0x18)(ConstParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1B0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1C0(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1D8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x1E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x1F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x200(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Popup_General_C*                  CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x208(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController; // 0x210(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ReportPlayer_ReturnValue;                 // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CB0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetSelectedOption_ReturnValue;            // 0x220(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_PartyMemberCard.WBP_PartyMemberCard_C.OnReportCancel
struct UWBP_PartyMemberCard_C_OnReportCancel_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x130 (0x130 - 0x0)
// Function WBP_PartyMemberCard.WBP_PartyMemberCard_C.OnSubContextMenuEntrySelected
struct UWBP_PartyMemberCard_C_OnSubContextMenuEntrySelected_Params
{
public:
	struct FGameplayTag                          UIGameplayTag;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(ConstParm)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CB3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMutePlayerSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_1;                              // 0x30(0x18)(ConstParm)
	bool                                         CallFunc_UnMutePlayer_ReturnValue;                 // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MutePlayer_ReturnValue;                   // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CB4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x50(0x18)(None)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x70(0x50)(HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xC8(0x10)(ReferenceParm)
	class UWBP_Popup_Dropdown_C*                 CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0xD8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xE0(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xF8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x108(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_2;                              // 0x118(0x18)(ConstParm)
};

// 0xA4 (0xA4 - 0x0)
// Function WBP_PartyMemberCard.WBP_PartyMemberCard_C.OpenSubContextMenu
struct UWBP_PartyMemberCard_C_OpenSubContextMenu_Params
{
public:
	TArray<struct FDataTableRowHandle>           L_MenuEntries;                                     // 0x0(0x10)(Edit, BlueprintVisible)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CB8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable;                                // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_1;                              // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CBA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_GetMousePositionOnViewport_ReturnValue;   // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNWXLocalPlayer*                       CallFunc_GetOwningLocalPlayer_ReturnValue;         // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x50(0x18)(None)
	class UWBP_SubContextMenu_C*                 CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x70(0x10)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsPlayerMuted_IsMuted;                 // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CBB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Select_Default;                             // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle_1;            // 0x90(0x10)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function WBP_PartyMemberCard.WBP_PartyMemberCard_C.GetIsPlayerMuted
struct UWBP_PartyMemberCard_C_GetIsPlayerMuted_Params
{
public:
	bool                                         IsMuted;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CBD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMutePlayerSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerMuted_ReturnValue;                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x178 (0x178 - 0x0)
// Function WBP_PartyMemberCard.WBP_PartyMemberCard_C.FocusDefaultWidget
struct UWBP_PartyMemberCard_C_FocusDefaultWidget_Params
{
public:
	struct FEventReply                           ReturnValue;                                       // 0x0(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0xB8(0xB8)(None)
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x170(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1B0 (0x1B0 - 0x0)
// Function WBP_PartyMemberCard.WBP_PartyMemberCard_C.OnFocusReceived
struct UWBP_PartyMemberCard_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_FocusDefaultWidget_ReturnValue;           // 0xF8(0xB8)(None)
};

// 0x10 (0x10 - 0x0)
// Function WBP_PartyMemberCard.WBP_PartyMemberCard_C.Update State
struct UWBP_PartyMemberCard_C_Update_State_Params
{
public:
	struct FS_CharacterStateEntry                MostRecentState;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PartyMemberCard.WBP_PartyMemberCard_C.BndEvt__WBP_PartyMemberCard_CBU_Kick_Player_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
struct UWBP_PartyMemberCard_C_BndEvt__WBP_PartyMemberCard_CBU_Kick_Player_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PartyMemberCard.WBP_PartyMemberCard_C.BndEvt__WBP_PartyMemberCard_CBU_Travel_To_Button_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
struct UWBP_PartyMemberCard_C_BndEvt__WBP_PartyMemberCard_CBU_Travel_To_Button_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PartyMemberCard.WBP_PartyMemberCard_C.BndEvt__WBP_PartyMemberCard_CBU_Invite_To_Realm_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
struct UWBP_PartyMemberCard_C_BndEvt__WBP_PartyMemberCard_CBU_Invite_To_Realm_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PartyMemberCard.WBP_PartyMemberCard_C.BndEvt__WBP_PartyMemberCard_CBU_ContextMenu_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
struct UWBP_PartyMemberCard_C_BndEvt__WBP_PartyMemberCard_CBU_ContextMenu_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x634 (0x634 - 0x0)
// Function WBP_PartyMemberCard.WBP_PartyMemberCard_C.ExecuteUbergraph_WBP_PartyMemberCard
struct UWBP_PartyMemberCard_C_ExecuteUbergraph_WBP_PartyMemberCard_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FCeil_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CCB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x20(0x18)(None)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CCC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_CharacterStateEntry                K2Node_CustomEvent_MostRecentState;                // 0x40(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x50(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_1;                              // 0x68(0x18)(None)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CCD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPartyComponentBase*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue_1;                    // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CCE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetFloatAttribute_ReturnValue;            // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CCF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerState_C*                     K2Node_DynamicCast_AsBP_Player_State;              // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CD0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_CharacterStateEntry                CallFunc_Array_Get_Item;                           // 0xB8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CD1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Character_C*                       K2Node_DynamicCast_AsBP_Character;                 // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1; // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CD2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetFloatAttribute_ReturnValue_1;          // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_2; // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CD3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetFloatAttribute_ReturnValue_2;          // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue;                        // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue_1;                      // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x100(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x150(0x50)(HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1A8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1B8(0x18)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CD4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1D4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CD5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x1E8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x200(0x50)(HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x250(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x258(0x10)(ReferenceParm)
	class UPartyComponentBase*                   CallFunc_GetComponentByClass_ReturnValue_1;        // 0x268(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x270(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x288(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x2A0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x2B0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x2C8(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x318(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x328(0x18)(None)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x340(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFilteredPlayerNameByPersistentId_FilteredPlayerName; // 0x350(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x360(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x378(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x390(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x3A0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x3B8(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_3;                          // 0x408(0x10)(ReferenceParm)
	class FText                                  Temp_text_Variable_4;                              // 0x418(0x18)(ConstParm)
	class FText                                  CallFunc_Format_ReturnValue_3;                     // 0x430(0x18)(None)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue_2;            // 0x448(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPartyComponentBase*                   CallFunc_GetComponentByClass_ReturnValue_2;        // 0x450(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x458(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue_1;            // 0x460(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFeatureFlagEnabled_ReturnValue;         // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CD6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_5;                              // 0x470(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0x488(0x18)(None)
	class FText                                  Temp_text_Variable_7;                              // 0x4A0(0x18)(None)
	class FText                                  Temp_text_Variable_8;                              // 0x4B8(0x18)(None)
	class FText                                  Temp_text_Variable_9;                              // 0x4D0(0x18)(None)
	class FText                                  Temp_text_Variable_10;                             // 0x4E8(0x18)(None)
	class FText                                  Temp_text_Variable_11;                             // 0x500(0x18)(None)
	enum class E_CharacterGameStatus             Temp_byte_Variable_4;                              // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CD7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_12;                             // 0x520(0x18)(ConstParm)
	class FText                                  K2Node_Select_Default;                             // 0x538(0x18)(None)
	class FText                                  Temp_text_Variable_13;                             // 0x550(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_14;                             // 0x568(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_15;                             // 0x580(0x18)(ConstParm)
	class ULocalPlayer*                          CallFunc_GetOwningLocalPlayer_ReturnValue;         // 0x598(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Popup_General_C*                  CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x5A0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetOwningLocalPlayer_ReturnValue_1;       // 0x5A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Popup_General_C*                  CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1; // 0x5B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetOwningLocalPlayer_ReturnValue_2;       // 0x5B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Popup_General_C*                  CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2; // 0x5C0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x5C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CD8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_3;               // 0x5D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_2;               // 0x5D8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_1;               // 0x5E0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x5E8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetLocalPlayerPersistentId_PlayerId;      // 0x5F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x600(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x601(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CD9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FCeil_A_ImplicitCast;                     // 0x608(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_Value_ImplicitCast;       // 0x610(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Round_A_ImplicitCast;                     // 0x618(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_InRangeB_ImplicitCast;    // 0x620(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Round_A_ImplicitCast_1;                   // 0x628(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x630(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


