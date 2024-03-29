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

// 0xC2 (0xC2 - 0x0)
// Function WBP_Redemption_Screen.WBP_Redemption_Screen_C.OnClaimRedemptionResponseReceivedHandler
struct UWBP_Redemption_Screen_C_OnClaimRedemptionResponseReceivedHandler_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_778A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                RewardName;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetRedemptionId_ReturnValue;              // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_778B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRedemptionEntry                      CallFunc_GetCurrentRedemptionEntry_CurrentRedemptionEntry; // 0x30(0x80)(None)
	class FString                                CallFunc_GetRedemptionId_ReturnValue_1;            // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x86 (0x86 - 0x0)
// Function WBP_Redemption_Screen.WBP_Redemption_Screen_C.UpdateDetailsPanel
struct UWBP_Redemption_Screen_C_UpdateDetailsPanel_Params
{
public:
	struct FRedemptionEntry                      RedemptionEntry;                                   // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         LIsRedemptionValid;                                // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRedemptionValid_ReturnValue;            // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x83(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x85(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function WBP_Redemption_Screen.WBP_Redemption_Screen_C.OnEntryDoubleClickedHandler
struct UWBP_Redemption_Screen_C_OnEntryDoubleClickedHandler_Params
{
public:
	struct FRedemptionEntry                      RedemptionEntry;                                   // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x80 (0x80 - 0x0)
// Function WBP_Redemption_Screen.WBP_Redemption_Screen_C.OnEntryHoveredHandler
struct UWBP_Redemption_Screen_C_OnEntryHoveredHandler_Params
{
public:
	struct FRedemptionEntry                      RedemptionEntry;                                   // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x80 (0x80 - 0x0)
// Function WBP_Redemption_Screen.WBP_Redemption_Screen_C.OnEntrySelectedHandler
struct UWBP_Redemption_Screen_C_OnEntrySelectedHandler_Params
{
public:
	struct FRedemptionEntry                      RedemptionEntry;                                   // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xD1 (0xD1 - 0x0)
// Function WBP_Redemption_Screen.WBP_Redemption_Screen_C.OnCurrentRedemptionsUpdatedHandler
struct UWBP_Redemption_Screen_C_OnCurrentRedemptionsUpdatedHandler_Params
{
public:
	TArray<struct FRedemptionEntry>              LCurrentRedemptions;                               // 0x0(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7792[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Redemption_Entry_C*               CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7793[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRedemptionEntry                      CallFunc_Array_Get_Item;                           // 0x30(0x80)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7795[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRedemptionEntry>              CallFunc_GetCurrentRedemptions_ReturnValue;        // 0xB8(0x10)(ReferenceParm)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0xC8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue;                // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function WBP_Redemption_Screen.WBP_Redemption_Screen_C.SetupEntryBindings
struct UWBP_Redemption_Screen_C_SetupEntryBindings_Params
{
public:
	class UWBP_Redemption_Entry_C*               EntryWidget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x28(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x38(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_Redemption_Screen.WBP_Redemption_Screen_C.InitializeDesignerPreview
struct UWBP_Redemption_Screen_C_InitializeDesignerPreview_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7799[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_779A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Redemption_Entry_C*               CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Redemption_Screen.WBP_Redemption_Screen_C.BndEvt__WBP_Rewards_Screen_CBU_Close_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
struct UWBP_Redemption_Screen_C_BndEvt__WBP_Rewards_Screen_CBU_Close_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x64 (0x64 - 0x0)
// Function WBP_Redemption_Screen.WBP_Redemption_Screen_C.ExecuteUbergraph_WBP_Redemption_Screen
struct UWBP_Redemption_Screen_C_ExecuteUbergraph_WBP_Redemption_Screen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_779E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_779F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x30(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x40(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x54(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


