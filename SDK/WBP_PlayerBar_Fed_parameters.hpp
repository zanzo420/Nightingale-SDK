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

// 0x18 (0x18 - 0x0)
// Function WBP_PlayerBar_Fed.WBP_PlayerBar_Fed_C.Get Tool Tip Widget
struct UWBP_PlayerBar_Fed_C_Get_Tool_Tip_Widget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_FedBar_Tooltip_C*                 CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function WBP_PlayerBar_Fed.WBP_PlayerBar_Fed_C.UnbindEvents
struct UWBP_PlayerBar_Fed_C_UnbindEvents_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXAttributeSet*                      CallFunc_GetAttributeSet_AttributeSet;             // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_456C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x24(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function WBP_PlayerBar_Fed.WBP_PlayerBar_Fed_C.OnFedChanged
struct UWBP_PlayerBar_Fed_C_OnFedChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4573[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FedFloatPercent;                                   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Get_Starving_Threshold_Percentage_StarvingThreshold; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4574[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetPlayerAttributeValue_Success;          // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4575[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetPlayerAttributeValue_Value;            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetPlayerAttributeValue_Success_1;        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4576[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetPlayerAttributeValue_Value_1;          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SafeDivide_ReturnValue;                   // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function WBP_PlayerBar_Fed.WBP_PlayerBar_Fed_C.GetAttributeSet
struct UWBP_PlayerBar_Fed_C_GetAttributeSet_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXAttributeSet*                      AttributeSet;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXCharacter*                         K2Node_DynamicCast_AsNWXCharacter;                 // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_PlayerBar_Fed.WBP_PlayerBar_Fed_C.OnClientReadyHandler
struct UWBP_PlayerBar_Fed_C_OnClientReadyHandler_Params
{
public:
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXAttributeSet*                      CallFunc_GetAttributeSet_AttributeSet;             // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function WBP_PlayerBar_Fed.WBP_PlayerBar_Fed_C.OnConstructHandler
struct UWBP_PlayerBar_Fed_C_OnConstructHandler_Params
{
public:
	class AGameStateBase*                        UncastGameState;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ABP_GameState_C*                       K2Node_DynamicCast_AsBP_Game_State;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsReady_Ready;                            // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4581[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4582[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function WBP_PlayerBar_Fed.WBP_PlayerBar_Fed_C.GetPlayerAttributeValue
struct UWBP_PlayerBar_Fed_C_GetPlayerAttributeValue_Params
{
public:
	struct FGameplayAttribute                    Stat;                                              // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x38(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4585[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Value;                                             // 0x40(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 LOwningPlayerPawn;                                 // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4586[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetFloatAttribute_ReturnValue;            // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_Value_ImplicitCast;          // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PlayerBar_Fed.WBP_PlayerBar_Fed_C.OnPawnPossessedAndReady
struct UWBP_PlayerBar_Fed_C_OnPawnPossessedAndReady_Params
{
public:
	class APawn*                                 NewPawn;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PlayerBar_Fed.WBP_PlayerBar_Fed_C.OnPawnUnpossessed
struct UWBP_PlayerBar_Fed_C_OnPawnUnpossessed_Params
{
public:
	class APawn*                                 OldPawn;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_PlayerBar_Fed.WBP_PlayerBar_Fed_C.ExecuteUbergraph_WBP_PlayerBar_Fed
struct UWBP_PlayerBar_Fed_C_ExecuteUbergraph_WBP_PlayerBar_Fed_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4589[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 K2Node_Event_OldPawn;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 K2Node_Event_NewPawn;                              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


