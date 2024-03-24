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

// 0xC (0xC - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.CREATEDELEGATE_PROXYFUNCTION_0
struct ABP_PlayerInputHandler_C_CREATEDELEGATE_PROXYFUNCTION_0_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	int32                                        Count;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.ChangeHeldItem
struct ABP_PlayerInputHandler_C_ChangeHeldItem_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EToolbarArrangement               Arrangement;                                       // 0x4(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8321[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IToolbarInputInterface> CallFunc_Client_SelectToolbarSlotByIndex_self_CastInput; // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD9 (0xD9 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.OpenToolbarRadial
struct ABP_PlayerInputHandler_C_OpenToolbarRadial_Params
{
public:
	class UInputAction*                          InputAction;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EToolbarArrangement               Arrangement;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_832C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TScriptInterface<class IRadialMenuInterface>> L_RadialArray;                                     // 0x10(0x10)(Edit, BlueprintVisible)
	class UToolbarRadialEntry*                   L_RadialEntry;                                     // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  L_PlayerController;                                // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_832D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UToolbarRadialEntry*                   CallFunc_SpawnObject_ReturnValue;                  // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_832E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IToolbarAccessInterface> CallFunc_FindToolbarArrangement_BP_self_CastInput; // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue;    // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x68(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IToolbarSlotEntryObjectInterface> CallFunc_GetSlotEntryObjectAtIndex_ReturnValue;    // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                        CallFunc_GetToolbarSize_ReturnValue;               // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8330[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IRadialMenuInterface> CallFunc_Array_Add_NewItem_CastInput;              // 0xA0(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8331[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_RadialMenuWidget_C*               CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0xB8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                          CallFunc_GetActiveKeysFromInputAction_OutKeys;     // 0xC0(0x10)(ReferenceParm)
	class ANWXPlayerController*                  CallFunc_GetPlayerController_ReturnValue;          // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_1;            // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.OpenDebugPlayerScreen
struct ABP_PlayerInputHandler_C_OpenDebugPlayerScreen_Params
{
public:
	struct FGameplayTag                          LWidgetLayer;                                      // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class UNWXCommonWindowWidget*                LFoundWidget;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_LiveDebugScreen_C*                CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x23 (0x23 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.Update Mapping Contexts
struct ABP_PlayerInputHandler_C_Update_Mapping_Contexts_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        Mapping_Context_Priority;                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_833D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UInputMappingContext*>          Mapping_Context_Array;                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.OnPossessedPawnChanged
struct ABP_PlayerInputHandler_C_OnPossessedPawnChanged_Params
{
public:
	class APawn*                                 OldPawn;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 NewPawn;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8340[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_AnimCharacter_C*                   K2Node_DynamicCast_AsBP_Anim_Character;            // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8342[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_AnimCharacter_C*                   K2Node_DynamicCast_AsBP_Anim_Character_1;          // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.OnPawnPossessed_Character
struct ABP_PlayerInputHandler_C_OnPawnPossessed_Character_Params
{
public:
	class ABP_AnimCharacter_C*                   PreviousCharacter;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_AnimCharacter_C*                   NewCharacter;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICharacterEmoteInterface> K2Node_DynamicCast_AsCharacter_Emote_Interface;    // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8348[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x34(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_834B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ICharacterEmoteInterface> CallFunc_BindTo_EmoteEndedDelegate_self_CastInput; // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x58(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x68(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICharacterEmoteInterface> CallFunc_UnbindFrom_EmoteEndedDelegate_self_CastInput; // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICharacterEmoteInterface> CallFunc_UnbindFrom_EmoteStartedDelegate_self_CastInput; // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.On Emote End
struct ABP_PlayerInputHandler_C_On_Emote_End_Params
{
public:
	class UEmoteDataAsset*                       Emote;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.On Emote Start
struct ABP_PlayerInputHandler_C_On_Emote_Start_Params
{
public:
	class UEmoteDataAsset*                       Emote;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UInputMappingContext*>          K2Node_MakeArray_Array;                            // 0x8(0x10)(ConstParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.OffhandAbility
struct ABP_PlayerInputHandler_C_OffhandAbility_Params
{
public:
	bool                                         bActionValue;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8356[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_ActionComponent_C*                 CallFunc_GetActionComponent_PlayerActionComponent; // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.GetActionComponent
struct ABP_PlayerInputHandler_C_GetActionComponent_Params
{
public:
	class UBP_ActionComponent_C*                 PlayerActionComponent;                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_835F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXCharacter*                         CallFunc_GetCharacter_ReturnValue;                 // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_ActionComponent_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x72 (0x72 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.OpenEmoteRadial
struct ABP_PlayerInputHandler_C_OpenEmoteRadial_Params
{
public:
	class UInputAction*                          InputAction;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8368[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_RadialMenuWidget_C*               CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICharacterEmoteInterface> CallFunc_GetEmoteRadialMenuEntries_self_CastInput; // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TScriptInterface<class IRadialMenuInterface>> CallFunc_GetEmoteRadialMenuEntries_OutEmoteRadialMenuEntries; // 0x30(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8369[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKey>                          CallFunc_GetActiveKeysFromInputAction_OutKeys;     // 0x48(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_836A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ICharacterEmoteInterface> CallFunc_IsUsingEmote_self_CastInput;              // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingEmote_ReturnValue;                 // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.StopAutorun
struct ABP_PlayerInputHandler_C_StopAutorun_Params
{
public:
	class ABP_Character_C*                       LCharacter;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_836B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Character_C*                       CallFunc_GetBPPlayerCharacter_BP_Player_Character; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.Sprint_Toggle
struct ABP_PlayerInputHandler_C_Sprint_Toggle_Params
{
public:
	bool                                         LActive;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_836D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Character_C*                       LCharacter;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_836E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Character_C*                       CallFunc_GetBPPlayerCharacter_BP_Player_Character; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.OnGameplayTagCountChangedHandler
struct ABP_PlayerInputHandler_C_OnGameplayTagCountChangedHandler_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        Count;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8371[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UInputMappingContext*>          K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm)
	TArray<class UInputMappingContext*>          K2Node_MakeArray_Array_1;                          // 0x20(0x10)(ReferenceParm)
	TArray<class UInputMappingContext*>          K2Node_MakeArray_Array_2;                          // 0x30(0x10)(ReferenceParm)
	TArray<class UInputMappingContext*>          K2Node_MakeArray_Array_3;                          // 0x40(0x10)(ReferenceParm)
};

// 0xA (0xA - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.OnBuildModeContextChangedHandler
struct ABP_PlayerInputHandler_C_OnBuildModeContextChangedHandler_Params
{
public:
	class UBP_BuildModeFeedbackData_C*           Data;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EBuildModeContext                 Mode;                                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.Quickbar_Toggle
struct ABP_PlayerInputHandler_C_Quickbar_Toggle_Params
{
public:
	class ANWXPlayerController*                  CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IToolbarInputInterface> CallFunc_Client_ToggleCurrentToolbarSlot_self_CastInput; // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x72 (0x72 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.Toggle Camera View
struct ABP_PlayerInputHandler_C_Toggle_Camera_View_Params
{
public:
	bool                                         ToThirdPerson;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8384[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Character_C*                       LCharacter;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UNWXGameUserSettings*                  CallFunc_GetNWXGameUserSettings_ReturnValue;       // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetNonGameplayThirdPersonEnabled_ReturnValue; // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8386[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXGameUserSettings*                  CallFunc_GetNWXGameUserSettings_ReturnValue_1;     // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGameplayThirdPersonEnabled_ReturnValue; // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8388[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXWorldSettings*                     CallFunc_GetWorldSettings_ReturnValue;             // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8389[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXGameUserSettings*                  CallFunc_GetNWXGameUserSettings_ReturnValue_2;     // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXGameUserSettings*                  CallFunc_GetNWXGameUserSettings_ReturnValue_3;     // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_838A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Character_C*                       CallFunc_GetBPPlayerCharacter_BP_Player_Character; // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.OpenBugReport
struct ABP_PlayerInputHandler_C_OpenBugReport_Params
{
public:
	TSubclassOf<class UObject>                   ClassType;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller_1; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IMenusComponentProviderInterface> CallFunc_GetMenusComponent_self_CastInput;         // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenusComponent*                       CallFunc_GetMenusComponent_ReturnValue;            // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IMenusComponentProviderInterface> CallFunc_GetMenusComponent_self_CastInput_1;       // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenusComponent*                       CallFunc_GetMenusComponent_ReturnValue_1;          // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNWXWindowWidget*                      CallFunc_GetCurrentlyOpenWindow_ReturnValue;       // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.DB_Toggle3rdPersonCamera
struct ABP_PlayerInputHandler_C_DB_Toggle3rdPersonCamera_Params
{
public:
	class ABP_PlayerController_C*                LController;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                   ClassType;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8391[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.DB_PictureInPicture
struct ABP_PlayerInputHandler_C_DB_PictureInPicture_Params
{
public:
	class ABP_PlayerController_C*                LController;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                   ClassType;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8398[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1B (0x1B - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.DB_ToggleFrameStats
struct ABP_PlayerInputHandler_C_DB_ToggleFrameStats_Params
{
public:
	class ABP_PlayerController_C*                LController;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                   ClassType;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsShippingBuild_ReturnValue;              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetHideFrameStats_ReturnValue;            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.HUD_ToggleHUDVisibility
struct ABP_PlayerInputHandler_C_HUD_ToggleHUDVisibility_Params
{
public:
	class ABP_PlayerController_C*                LController;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                   ClassType;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetPlayerController_ReturnValue;          // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                  CallFunc_GetHUD_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHUD_CommonNWX_C*                      K2Node_DynamicCast_AsHUD_Common_NWX;               // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.ToolbarPrevious
struct ABP_PlayerInputHandler_C_ToolbarPrevious_Params
{
public:
	enum class EToolbarArrangement               Arrangement;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                LController;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetPlayerController_ReturnValue;          // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IToolbarInputInterface> CallFunc_Client_SelectPreviousToolbarSlot_self_CastInput; // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.ToolbarNext
struct ABP_PlayerInputHandler_C_ToolbarNext_Params
{
public:
	enum class EToolbarArrangement               Arrangement;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                LController;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetPlayerController_ReturnValue;          // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IToolbarInputInterface> CallFunc_Client_SelectNextToolbarSlot_self_CastInput; // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.Quickbar_ByIndex
struct ABP_PlayerInputHandler_C_Quickbar_ByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                LController;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IToolbarInputInterface> CallFunc_Client_SelectToolbarSlotByIndex_self_CastInput; // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  CallFunc_GetPlayerController_ReturnValue_1;        // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IToolbarInputInterface> CallFunc_Client_SelectToolbarSlotByIndex_self_CastInput_1; // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.Open_DebugMenu
struct ABP_PlayerInputHandler_C_Open_DebugMenu_Params
{
public:
	class ABP_PlayerController_C*                LController;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                   ClassType;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.Chat_Command
struct ABP_PlayerInputHandler_C_Chat_Command_Params
{
public:
	TSubclassOf<class UObject>                   ClassType;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UNWXGameUserSettings*                  CallFunc_GetNWXGameUserSettings_ReturnValue;       // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       CallFunc_GetBPPlayerCharacter_BP_Player_Character; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EChatMode                         CallFunc_GetChatMode_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83AD[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_HUD_Manager_C>   CallFunc_Get_HUD_Manager_HUD_Manager;              // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.Chat_Focus
struct ABP_PlayerInputHandler_C_Chat_Focus_Params
{
public:
	bool                                         Focused;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UObject>                   ClassType;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UNWXGameUserSettings*                  CallFunc_GetNWXGameUserSettings_ReturnValue;       // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       CallFunc_GetBPPlayerCharacter_BP_Player_Character; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EChatMode                         CallFunc_GetChatMode_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83AF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_HUD_Manager_C>   CallFunc_Get_HUD_Manager_HUD_Manager;              // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x51 (0x51 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.OpenSocial_Screen
struct ABP_PlayerInputHandler_C_OpenSocial_Screen_Params
{
public:
	struct FGameplayTag                          LWidgetTag;                                        // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class UNWXCommonWindowWidget*                LInventoryWidget;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                   ClassType;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array;                            // 0x18(0x10)(ReferenceParm)
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetPlayerController_ReturnValue;          // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXCommonWindowWidget*                CallFunc_FindWindowInLayers_ReturnValue;           // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_GameplayMenus_C*                  CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.OpenMainMenu_EscapeScreen
struct ABP_PlayerInputHandler_C_OpenMainMenu_EscapeScreen_Params
{
public:
	class UNWXCommonWindowWidget*                LFoundWidget;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          LWidgetLayer;                                      // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                   ClassType;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array;                            // 0x20(0x10)(ReferenceParm)
	class UNWXCommonWindowWidget*                CallFunc_FindWindowInLayers_ReturnValue;           // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller_1; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_GameplayMenus_C*                  CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.OpenInventory_Screen
struct ABP_PlayerInputHandler_C_OpenInventory_Screen_Params
{
public:
	struct FGameplayTag                          LWidgetLayer;                                      // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class UNWXCommonWindowWidget*                LFoundWidget;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array;                            // 0x18(0x10)(ReferenceParm)
	class UNWXCommonWindowWidget*                CallFunc_FindWindowInLayers_ReturnValue;           // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller_1; // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_GameplayMenus_C*                  CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.OpenBookScreen_Crafting
struct ABP_PlayerInputHandler_C_OpenBookScreen_Crafting_Params
{
public:
	class UNWXCommonWindowWidget*                LFoundWidget;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          LWidgetLayer;                                      // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                   ClassType;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array;                            // 0x18(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXCommonWindowWidget*                CallFunc_FindWindowInLayers_ReturnValue;           // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller_1; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_GameplayMenus_C*                  CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.OpenBookScreen_Building
struct ABP_PlayerInputHandler_C_OpenBookScreen_Building_Params
{
public:
	class UNWXCommonWindowWidget*                LFoundWidget;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          LWidgetLayer;                                      // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                   ClassType;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array;                            // 0x20(0x10)(ReferenceParm)
	class UNWXCommonWindowWidget*                CallFunc_FindWindowInLayers_ReturnValue;           // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller_1; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_GameplayMenus_C*                  CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.OpenBookScreen_Quests
struct ABP_PlayerInputHandler_C_OpenBookScreen_Quests_Params
{
public:
	class UNWXCommonWindowWidget*                LFoundWidget;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          LWidgetLayer;                                      // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                   ClassType;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array;                            // 0x18(0x10)(ReferenceParm)
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXCommonWindowWidget*                CallFunc_FindWindowInLayers_ReturnValue;           // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller_1; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_GameplayMenus_C*                  CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.OpenBookScreen
struct ABP_PlayerInputHandler_C_OpenBookScreen_Params
{
public:
	struct FGameplayTag                          LWidgetLayer;                                      // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class UNWXCommonWindowWidget*                LFoundWidget;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm)
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXCommonWindowWidget*                CallFunc_FindWindowInLayers_ReturnValue;           // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83B6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller_1; // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_GameplayMenus_C*                  CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.OpenMapScreen
struct ABP_PlayerInputHandler_C_OpenMapScreen_Params
{
public:
	struct FGameplayTag                          LWidgetLayer;                                      // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class UNWXCommonWindowWidget*                LFoundWidget;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                   ClassType;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array;                            // 0x20(0x10)(ReferenceParm)
	class UNWXCommonWindowWidget*                CallFunc_FindWindowInLayers_ReturnValue;           // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller_1; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_GameplayMenus_C*                  CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.Ability3
struct ABP_PlayerInputHandler_C_Ability3_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LActive;                                           // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83B8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                LController;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.Ability2Held
struct ABP_PlayerInputHandler_C_Ability2Held_Params
{
public:
	class UInputAction*                          InputAction;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.Ability2
struct ABP_PlayerInputHandler_C_Ability2_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LActive;                                           // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83BB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                LController;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.Ability1Held
struct ABP_PlayerInputHandler_C_Ability1Held_Params
{
public:
	class UInputAction*                          Input_Action;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         LActive;                                           // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                LController;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.Ability1
struct ABP_PlayerInputHandler_C_Ability1_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LActive;                                           // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83BE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                LController;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.Secondary
struct ABP_PlayerInputHandler_C_Secondary_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                LController;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x10(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsStateActive_ReturnValue;                // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.Primary
struct ABP_PlayerInputHandler_C_Primary_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                LController;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x10(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsStateActive_ReturnValue;                // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InteractHeld
struct ABP_PlayerInputHandler_C_InteractHeld_Params
{
public:
	class UInputAction*                          InputAction;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.Interact
struct ABP_PlayerInputHandler_C_Interact_Params
{
public:
	bool                                         LActive;                                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                LController;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.Crouch
struct ABP_PlayerInputHandler_C_Crouch_Params
{
public:
	class ABP_Character_C*                       LCharacter;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Character_C*                       CallFunc_GetBPPlayerCharacter_BP_Player_Character; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.LookXAxis
struct ABP_PlayerInputHandler_C_LookXAxis_Params
{
public:
	double                                       Axis;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       LCharacter;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	double                                       LAxis;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Character_C*                       CallFunc_GetBPPlayerCharacter_BP_Player_Character; // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.LookYAxis
struct ABP_PlayerInputHandler_C_LookYAxis_Params
{
public:
	double                                       Axis;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       LCharacter;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	double                                       LAxis;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Character_C*                       CallFunc_GetBPPlayerCharacter_BP_Player_Character; // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.MoveXAxis
struct ABP_PlayerInputHandler_C_MoveXAxis_Params
{
public:
	double                                       Axis;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       LCharacter;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	double                                       LAxis;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Character_C*                       CallFunc_GetBPPlayerCharacter_BP_Player_Character; // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.MoveYAxis
struct ABP_PlayerInputHandler_C_MoveYAxis_Params
{
public:
	double                                       Axis;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LAxis;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       LCharacter;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMovementSpeedActive_ReturnValue;        // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Character_C*                       CallFunc_GetBPPlayerCharacter_BP_Player_Character; // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.Autorun
struct ABP_PlayerInputHandler_C_Autorun_Params
{
public:
	class ABP_Character_C*                       LCharacter;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Character_C*                       CallFunc_GetBPPlayerCharacter_BP_Player_Character; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.Sprint
struct ABP_PlayerInputHandler_C_Sprint_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LActive;                                           // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83CB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Character_C*                       LCharacter;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       CallFunc_GetBPPlayerCharacter_BP_Player_Character; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.Jump
struct ABP_PlayerInputHandler_C_Jump_Params
{
public:
	class ABP_Character_C*                       LCharacter;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Character_C*                       CallFunc_GetBPPlayerCharacter_BP_Player_Character; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.GetBPPlayerController
struct ABP_PlayerInputHandler_C_GetBPPlayerController_Params
{
public:
	class ABP_PlayerController_C*                BP_Player_Controller;                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerController_C*                K2Node_DynamicCast_AsBP_Player_Controller;         // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.GetBPPlayerCharacter
struct ABP_PlayerInputHandler_C_GetBPPlayerCharacter_Params
{
public:
	class ABP_Character_C*                       BP_Player_Character;                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXCharacter*                         CallFunc_GetCharacter_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       K2Node_DynamicCast_AsBP_Character;                 // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x82 (0x82 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.OnInitializeHandler
struct ABP_PlayerInputHandler_C_OnInitializeHandler_Params
{
public:
	class ANWXPlayerController*                  PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class IInterface>                Temp_class_Variable;                               // 0x8(0x8)(ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerState*                       CallFunc_GetPlayerState_ReturnValue;               // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                CallFunc_GetBPPlayerController_BP_Player_Controller; // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BuildModeFeedback_C> CallFunc_GetBuildModeFeedbackComponent_self_CastInput; // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_BuildModeFeedbackComponent_C*      CallFunc_GetBuildModeFeedbackComponent_Component;  // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_FindFirstImplementor_ReturnValue;         // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x64(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnhancedInputLocalPlayerSubsystem*    CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_EmoteWheel_K2Node_EnhancedInputActionEvent_87
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_EmoteWheel_K2Node_EnhancedInputActionEvent_87_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Shortcut_OpenBook_LastOpened_K2Node_EnhancedInputActionEvent_86
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Shortcut_OpenBook_LastOpened_K2Node_EnhancedInputActionEvent_86_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Shortcut_OpenDevDebugMenu_K2Node_EnhancedInputActionEvent_85
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Shortcut_OpenDevDebugMenu_K2Node_EnhancedInputActionEvent_85_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_DB_ToggleFlyCam_K2Node_EnhancedInputActionEvent_84
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_DB_ToggleFlyCam_K2Node_EnhancedInputActionEvent_84_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_DB_ToggleFlyCamNewLocation_K2Node_EnhancedInputActionEvent_83
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_DB_ToggleFlyCamNewLocation_K2Node_EnhancedInputActionEvent_83_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_DB_ToggleFrameStats_K2Node_EnhancedInputActionEvent_82
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_DB_ToggleFrameStats_K2Node_EnhancedInputActionEvent_82_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_DB_PictureInPicture_K2Node_EnhancedInputActionEvent_81
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_DB_PictureInPicture_K2Node_EnhancedInputActionEvent_81_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_DB_QuickDamageSelf_K2Node_EnhancedInputActionEvent_80
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_DB_QuickDamageSelf_K2Node_EnhancedInputActionEvent_80_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_DB_ToggleInfiniteStamina_K2Node_EnhancedInputActionEvent_79
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_DB_ToggleInfiniteStamina_K2Node_EnhancedInputActionEvent_79_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Jump_K2Node_EnhancedInputActionEvent_78
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Jump_K2Node_EnhancedInputActionEvent_78_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_PrimaryAction_K2Node_EnhancedInputActionEvent_77
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_PrimaryAction_K2Node_EnhancedInputActionEvent_77_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_PrimaryAction_K2Node_EnhancedInputActionEvent_76
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_PrimaryAction_K2Node_EnhancedInputActionEvent_76_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_SecondaryAction_K2Node_EnhancedInputActionEvent_75
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_SecondaryAction_K2Node_EnhancedInputActionEvent_75_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_SecondaryAction_K2Node_EnhancedInputActionEvent_74
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_SecondaryAction_K2Node_EnhancedInputActionEvent_74_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_MoveForward_K2Node_EnhancedInputActionEvent_73
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_MoveForward_K2Node_EnhancedInputActionEvent_73_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_MoveForward_K2Node_EnhancedInputActionEvent_72
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_MoveForward_K2Node_EnhancedInputActionEvent_72_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_MoveForward_K2Node_EnhancedInputActionEvent_71
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_MoveForward_K2Node_EnhancedInputActionEvent_71_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_MoveBackward_K2Node_EnhancedInputActionEvent_70
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_MoveBackward_K2Node_EnhancedInputActionEvent_70_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_MoveBackward_K2Node_EnhancedInputActionEvent_69
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_MoveBackward_K2Node_EnhancedInputActionEvent_69_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_MoveBackward_K2Node_EnhancedInputActionEvent_68
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_MoveBackward_K2Node_EnhancedInputActionEvent_68_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_MoveLeft_K2Node_EnhancedInputActionEvent_67
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_MoveLeft_K2Node_EnhancedInputActionEvent_67_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_MoveLeft_K2Node_EnhancedInputActionEvent_66
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_MoveLeft_K2Node_EnhancedInputActionEvent_66_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_MoveLeft_K2Node_EnhancedInputActionEvent_65
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_MoveLeft_K2Node_EnhancedInputActionEvent_65_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_MoveRight_K2Node_EnhancedInputActionEvent_64
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_MoveRight_K2Node_EnhancedInputActionEvent_64_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_MoveRight_K2Node_EnhancedInputActionEvent_63
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_MoveRight_K2Node_EnhancedInputActionEvent_63_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_MoveRight_K2Node_EnhancedInputActionEvent_62
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_MoveRight_K2Node_EnhancedInputActionEvent_62_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Jump_Keyboard_K2Node_EnhancedInputActionEvent_61
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Jump_Keyboard_K2Node_EnhancedInputActionEvent_61_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Sprint_K2Node_EnhancedInputActionEvent_60
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Sprint_K2Node_EnhancedInputActionEvent_60_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_AutoRun_K2Node_EnhancedInputActionEvent_59
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_AutoRun_K2Node_EnhancedInputActionEvent_59_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Shortcut_OpenMainMenu_K2Node_EnhancedInputActionEvent_58
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Shortcut_OpenMainMenu_K2Node_EnhancedInputActionEvent_58_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Ability1_K2Node_EnhancedInputActionEvent_57
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Ability1_K2Node_EnhancedInputActionEvent_57_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Ability2_K2Node_EnhancedInputActionEvent_56
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Ability2_K2Node_EnhancedInputActionEvent_56_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Ability3_K2Node_EnhancedInputActionEvent_55
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Ability3_K2Node_EnhancedInputActionEvent_55_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_ToggleHUDVisibilty_K2Node_EnhancedInputActionEvent_54
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_ToggleHUDVisibilty_K2Node_EnhancedInputActionEvent_54_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_ToggleSheathe_K2Node_EnhancedInputActionEvent_53
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_ToggleSheathe_K2Node_EnhancedInputActionEvent_53_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_ChatHotkey_FocusChat_K2Node_EnhancedInputActionEvent_52
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_ChatHotkey_FocusChat_K2Node_EnhancedInputActionEvent_52_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_ChatHotkey_FocusChat_K2Node_EnhancedInputActionEvent_51
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_ChatHotkey_FocusChat_K2Node_EnhancedInputActionEvent_51_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_ChatHotkey_FocusChat_K2Node_EnhancedInputActionEvent_50
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_ChatHotkey_FocusChat_K2Node_EnhancedInputActionEvent_50_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_ChatHotkey_Command_K2Node_EnhancedInputActionEvent_49
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_ChatHotkey_Command_K2Node_EnhancedInputActionEvent_49_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Crouch_K2Node_EnhancedInputActionEvent_48
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Crouch_K2Node_EnhancedInputActionEvent_48_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_LookYAxis_K2Node_EnhancedInputActionEvent_47
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_LookYAxis_K2Node_EnhancedInputActionEvent_47_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_LookXAxis_K2Node_EnhancedInputActionEvent_46
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_LookXAxis_K2Node_EnhancedInputActionEvent_46_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_MoveXAxis_K2Node_EnhancedInputActionEvent_45
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_MoveXAxis_K2Node_EnhancedInputActionEvent_45_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_MoveXAxis_K2Node_EnhancedInputActionEvent_44
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_MoveXAxis_K2Node_EnhancedInputActionEvent_44_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_MoveXAxis_K2Node_EnhancedInputActionEvent_43
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_MoveXAxis_K2Node_EnhancedInputActionEvent_43_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_MoveYAxis_K2Node_EnhancedInputActionEvent_42
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_MoveYAxis_K2Node_EnhancedInputActionEvent_42_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_MoveYAxis_K2Node_EnhancedInputActionEvent_41
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_MoveYAxis_K2Node_EnhancedInputActionEvent_41_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_MoveYAxis_K2Node_EnhancedInputActionEvent_40
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_MoveYAxis_K2Node_EnhancedInputActionEvent_40_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_LookUp_K2Node_EnhancedInputActionEvent_39
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_LookUp_K2Node_EnhancedInputActionEvent_39_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_LookDown_K2Node_EnhancedInputActionEvent_38
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_LookDown_K2Node_EnhancedInputActionEvent_38_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_LookLeft_K2Node_EnhancedInputActionEvent_37
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_LookLeft_K2Node_EnhancedInputActionEvent_37_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_LookRight_K2Node_EnhancedInputActionEvent_36
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_LookRight_K2Node_EnhancedInputActionEvent_36_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Quickbar_Select_0_K2Node_EnhancedInputActionEvent_35
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Quickbar_Select_0_K2Node_EnhancedInputActionEvent_35_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Quickbar_Select_1_K2Node_EnhancedInputActionEvent_34
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Quickbar_Select_1_K2Node_EnhancedInputActionEvent_34_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Quickbar_Select_2_K2Node_EnhancedInputActionEvent_33
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Quickbar_Select_2_K2Node_EnhancedInputActionEvent_33_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Quickbar_Select_3_K2Node_EnhancedInputActionEvent_32
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Quickbar_Select_3_K2Node_EnhancedInputActionEvent_32_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Quickbar_Select_4_K2Node_EnhancedInputActionEvent_31
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Quickbar_Select_4_K2Node_EnhancedInputActionEvent_31_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Quickbar_Select_5_K2Node_EnhancedInputActionEvent_30
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Quickbar_Select_5_K2Node_EnhancedInputActionEvent_30_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Quickbar_Select_6_K2Node_EnhancedInputActionEvent_29
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Quickbar_Select_6_K2Node_EnhancedInputActionEvent_29_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Quickbar_Select_7_K2Node_EnhancedInputActionEvent_28
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Quickbar_Select_7_K2Node_EnhancedInputActionEvent_28_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Quickbar_Select_8_K2Node_EnhancedInputActionEvent_27
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Quickbar_Select_8_K2Node_EnhancedInputActionEvent_27_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Quickbar_Select_9_K2Node_EnhancedInputActionEvent_26
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Quickbar_Select_9_K2Node_EnhancedInputActionEvent_26_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Shortcut_OpenBook_Recipes_K2Node_EnhancedInputActionEvent_25
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Shortcut_OpenBook_Recipes_K2Node_EnhancedInputActionEvent_25_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Shortcut_OpenBook_Quests_K2Node_EnhancedInputActionEvent_24
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Shortcut_OpenBook_Quests_K2Node_EnhancedInputActionEvent_24_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_ToggleBuildMode_K2Node_EnhancedInputActionEvent_23
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_ToggleBuildMode_K2Node_EnhancedInputActionEvent_23_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Shortcut_OpenSocial_K2Node_EnhancedInputActionEvent_22
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Shortcut_OpenSocial_K2Node_EnhancedInputActionEvent_22_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Interaction_K2Node_EnhancedInputActionEvent_21
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Interaction_K2Node_EnhancedInputActionEvent_21_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_InteractionHeld_K2Node_EnhancedInputActionEvent_20
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_InteractionHeld_K2Node_EnhancedInputActionEvent_20_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Ability2Held_K2Node_EnhancedInputActionEvent_19
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Ability2Held_K2Node_EnhancedInputActionEvent_19_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Ability2Released_K2Node_EnhancedInputActionEvent_18
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Ability2Released_K2Node_EnhancedInputActionEvent_18_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Shortcut_OpenBook_Building_K2Node_EnhancedInputActionEvent_17
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Shortcut_OpenBook_Building_K2Node_EnhancedInputActionEvent_17_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Shortcut_OpenBackpackInventory_K2Node_EnhancedInputActionEvent_16
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Shortcut_OpenBackpackInventory_K2Node_EnhancedInputActionEvent_16_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_ToggleThirdPerson_K2Node_EnhancedInputActionEvent_15
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_ToggleThirdPerson_K2Node_EnhancedInputActionEvent_15_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_SprintToggle_K2Node_EnhancedInputActionEvent_14
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_SprintToggle_K2Node_EnhancedInputActionEvent_14_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_OffhandAbility_K2Node_EnhancedInputActionEvent_13
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_OffhandAbility_K2Node_EnhancedInputActionEvent_13_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_OffhandAbility_K2Node_EnhancedInputActionEvent_12
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_OffhandAbility_K2Node_EnhancedInputActionEvent_12_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_CancelBuildMode_K2Node_EnhancedInputActionEvent_11
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_CancelBuildMode_K2Node_EnhancedInputActionEvent_11_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_VoipPushToTalkHeld_K2Node_EnhancedInputActionEvent_10
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_VoipPushToTalkHeld_K2Node_EnhancedInputActionEvent_10_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_VoipPushToTalkHeld_K2Node_EnhancedInputActionEvent_9
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_VoipPushToTalkHeld_K2Node_EnhancedInputActionEvent_9_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_ToolbarMainhand_Next_K2Node_EnhancedInputActionEvent_8
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_ToolbarMainhand_Next_K2Node_EnhancedInputActionEvent_8_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_ToolbarOffhand_Next_K2Node_EnhancedInputActionEvent_7
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_ToolbarOffhand_Next_K2Node_EnhancedInputActionEvent_7_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Ability1Held_K2Node_EnhancedInputActionEvent_6
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Ability1Held_K2Node_EnhancedInputActionEvent_6_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_DB_BugReport_K2Node_EnhancedInputActionEvent_5
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_DB_BugReport_K2Node_EnhancedInputActionEvent_5_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_Shortcut_OpenMapMenu_K2Node_EnhancedInputActionEvent_4
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_Shortcut_OpenMapMenu_K2Node_EnhancedInputActionEvent_4_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_ToolbarMainhand_SelectSlot_K2Node_EnhancedInputActionEvent_3
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_ToolbarMainhand_SelectSlot_K2Node_EnhancedInputActionEvent_3_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_ToolbarOffhand_SelectSlot_K2Node_EnhancedInputActionEvent_2
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_ToolbarOffhand_SelectSlot_K2Node_EnhancedInputActionEvent_2_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_ToolbarMainhand_Previous_K2Node_EnhancedInputActionEvent_1
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_ToolbarMainhand_Previous_K2Node_EnhancedInputActionEvent_1_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.InpActEvt_InputAction_ToolbarOffhand_Previous_K2Node_EnhancedInputActionEvent_0
struct ABP_PlayerInputHandler_C_InpActEvt_InputAction_ToolbarOffhand_Previous_K2Node_EnhancedInputActionEvent_0_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        ElapsedTime;                                       // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TriggeredTime;                                     // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.OnInitialize
struct ABP_PlayerInputHandler_C_OnInitialize_Params
{
public:
	class ANWXPlayerController*                  PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.OnGameplayTagCountChanged
struct ABP_PlayerInputHandler_C_OnGameplayTagCountChanged_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	int32                                        Count;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2221 (0x2221 - 0x0)
// Function BP_PlayerInputHandler.BP_PlayerInputHandler_C.ExecuteUbergraph_BP_PlayerInputHandler
struct ABP_PlayerInputHandler_C_ExecuteUbergraph_BP_PlayerInputHandler_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_841B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable;                                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_1;                              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_841C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_79;    // 0x28(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_79;    // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_79;  // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_79;   // 0x50(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_1;                            // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue;  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_841D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_2;                              // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_3;                              // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_2;                              // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_3;                              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_841E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_78;    // 0x90(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_78;    // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_78;  // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_78;   // 0xB8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_1; // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_841F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_2;                            // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_4;                              // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_4;                              // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_5;                              // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8420[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_5;                              // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_77;    // 0xF8(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_77;    // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_77;  // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_77;   // 0x120(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_76;    // 0x128(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_76;    // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_76;  // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_76;   // 0x150(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_2; // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_3; // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8421[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_3;                            // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_6;                              // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_6;                              // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_6;                              // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_7;                              // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8422[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_7;                              // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_7;                              // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_75;    // 0x1A0(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_75;    // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_75;  // 0x1C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_75;   // 0x1C8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_74;    // 0x1D0(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_74;    // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_74;  // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_74;   // 0x1F8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_4; // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_5; // 0x201(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8423[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_4;                            // 0x208(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_8;                              // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_8;                              // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_8;                              // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_9;                              // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8424[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_9;                              // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_9;                              // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_73;    // 0x248(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_73;    // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_73;  // 0x26C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_73;   // 0x270(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_72;    // 0x278(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_72;    // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_72;  // 0x29C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_72;   // 0x2A0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue; // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_1; // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_71;    // 0x2B8(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_71;    // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_71;  // 0x2DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_71;   // 0x2E0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_5;                            // 0x2E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_2; // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_10;                             // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_11;                             // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_10;                             // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_11;                             // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_11;                             // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_11;                             // 0x320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_10;                             // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_10;                             // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_12;                             // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_70;    // 0x340(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_70;    // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_70;  // 0x364(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_70;   // 0x368(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_3; // 0x370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_69;    // 0x378(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_69;    // 0x398(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_69;  // 0x39C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_69;   // 0x3A0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_68;    // 0x3A8(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_68;    // 0x3C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_68;  // 0x3CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_68;   // 0x3D0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_4; // 0x3D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_5; // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_6;                            // 0x3E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_13;                             // 0x3F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_13;                             // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_13;                             // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_13;                             // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_14;                             // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_15;                             // 0x418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_14;                             // 0x420(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_14;                             // 0x428(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_14;                             // 0x430(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_67;    // 0x438(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_67;    // 0x458(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_67;  // 0x45C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_67;   // 0x460(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_66;    // 0x468(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_66;    // 0x488(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_66;  // 0x48C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_66;   // 0x490(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_6; // 0x498(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_7; // 0x4A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_65;    // 0x4A8(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_65;    // 0x4C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_65;  // 0x4CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_65;   // 0x4D0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_7;                            // 0x4D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_8; // 0x4E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_16;                             // 0x4E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_17;                             // 0x4F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_16;                             // 0x4F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_17;                             // 0x500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_17;                             // 0x508(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_17;                             // 0x510(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_16;                             // 0x518(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_16;                             // 0x520(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_18;                             // 0x528(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_64;    // 0x530(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_64;    // 0x550(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_64;  // 0x554(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_64;   // 0x558(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_9; // 0x560(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_63;    // 0x568(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_63;    // 0x588(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_63;  // 0x58C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_63;   // 0x590(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_62;    // 0x598(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_62;    // 0x5B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_62;  // 0x5BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_62;   // 0x5C0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_10; // 0x5C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_11; // 0x5D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_8;                            // 0x5D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_19;                             // 0x5E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_19;                             // 0x5E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_19;                             // 0x5F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_19;                             // 0x5F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_20;                             // 0x600(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_21;                             // 0x608(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_20;                             // 0x610(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_20;                             // 0x618(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_20;                             // 0x620(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_61;    // 0x628(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_61;    // 0x648(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_61;  // 0x64C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_61;   // 0x650(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_9;                            // 0x658(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_6; // 0x660(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8425[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_22;                             // 0x668(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_23;                             // 0x670(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_22;                             // 0x678(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_23;                             // 0x680(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x688(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8426[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_60;    // 0x690(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_60;    // 0x6B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_60;  // 0x6B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_60;   // 0x6B8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_7; // 0x6C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8427[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_10;                           // 0x6C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_24;                             // 0x6D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_24;                             // 0x6D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_25;                             // 0x6E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_6;                              // 0x6E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8428[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_25;                             // 0x6F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_59;    // 0x6F8(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_59;    // 0x718(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_59;  // 0x71C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_59;   // 0x720(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_11;                           // 0x728(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_8; // 0x730(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8429[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_26;                             // 0x738(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_27;                             // 0x740(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_26;                             // 0x748(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_27;                             // 0x750(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_7;                              // 0x758(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_842A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_58;    // 0x760(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_58;    // 0x780(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_58;  // 0x784(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_58;   // 0x788(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_9; // 0x790(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_842B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_12;                           // 0x798(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_28;                             // 0x7A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_28;                             // 0x7A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_29;                             // 0x7B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_8;                              // 0x7B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_842C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_29;                             // 0x7C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_57;    // 0x7C8(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_57;    // 0x7E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_57;  // 0x7EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_57;   // 0x7F0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_13;                           // 0x7F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_10; // 0x800(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_842D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_30;                             // 0x808(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_31;                             // 0x810(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_30;                             // 0x818(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_31;                             // 0x820(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_9;                              // 0x828(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_842E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_56;    // 0x830(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_56;    // 0x850(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_56;  // 0x854(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_56;   // 0x858(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_11; // 0x860(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_842F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_14;                           // 0x868(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_32;                             // 0x870(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_32;                             // 0x878(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_33;                             // 0x880(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_10;                             // 0x888(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8430[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_33;                             // 0x890(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_55;    // 0x898(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_55;    // 0x8B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_55;  // 0x8BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_55;   // 0x8C0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_15;                           // 0x8C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_12; // 0x8D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8431[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_34;                             // 0x8D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_35;                             // 0x8E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_34;                             // 0x8E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_35;                             // 0x8F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_11;                             // 0x8F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8432[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_54;    // 0x900(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_54;    // 0x920(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_54;  // 0x924(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_54;   // 0x928(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_13; // 0x930(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8433[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_16;                           // 0x938(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_36;                             // 0x940(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_36;                             // 0x948(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_37;                             // 0x950(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_12;                             // 0x958(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8434[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_37;                             // 0x960(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_53;    // 0x968(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_53;    // 0x988(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_53;  // 0x98C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_53;   // 0x990(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_17;                           // 0x998(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_14; // 0x9A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8435[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_38;                             // 0x9A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_39;                             // 0x9B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_38;                             // 0x9B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_39;                             // 0x9C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_13;                             // 0x9C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8436[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_52;    // 0x9D0(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_52;    // 0x9F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_52;  // 0x9F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_52;   // 0x9F8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_15; // 0xA00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8437[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_51;    // 0xA08(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_51;    // 0xA28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_51;  // 0xA2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_51;   // 0xA30(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_50;    // 0xA38(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_50;    // 0xA58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_50;  // 0xA5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_50;   // 0xA60(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_16; // 0xA68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_17; // 0xA69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8438[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_18;                           // 0xA70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_40;                             // 0xA78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_40;                             // 0xA80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_40;                             // 0xA88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_40;                             // 0xA90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_41;                             // 0xA98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_14;                             // 0xAA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8439[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_41;                             // 0xAA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_41;                             // 0xAB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_41;                             // 0xAB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_49;    // 0xAC0(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_49;    // 0xAE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_49;  // 0xAE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_49;   // 0xAE8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_19;                           // 0xAF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_18; // 0xAF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_843A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_42;                             // 0xB00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_43;                             // 0xB08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_42;                             // 0xB10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_43;                             // 0xB18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_15;                             // 0xB20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_843B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_48;    // 0xB28(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_48;    // 0xB48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_48;  // 0xB4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_48;   // 0xB50(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_19; // 0xB58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_843C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_20;                           // 0xB60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_44;                             // 0xB68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_44;                             // 0xB70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_45;                             // 0xB78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_16;                             // 0xB80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_843D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_45;                             // 0xB88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_47;    // 0xB90(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_47;    // 0xBB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_47;  // 0xBB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_47;   // 0xBB8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_21;                           // 0xBC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_12; // 0xBC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_46;                             // 0xBD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_47;                             // 0xBD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_46;                             // 0xBE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_47;                             // 0xBE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_48;                             // 0xBF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_46;    // 0xBF8(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_46;    // 0xC18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_46;  // 0xC1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_46;   // 0xC20(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_13; // 0xC28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_22;                           // 0xC30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_49;                             // 0xC38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_49;                             // 0xC40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_50;                             // 0xC48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_51;                             // 0xC50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_50;                             // 0xC58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_45;    // 0xC60(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_45;    // 0xC80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_45;  // 0xC84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_45;   // 0xC88(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_44;    // 0xC90(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_44;    // 0xCB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_44;  // 0xCB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_44;   // 0xCB8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_14; // 0xCC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_15; // 0xCC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_43;    // 0xCD0(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_43;    // 0xCF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_43;  // 0xCF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_43;   // 0xCF8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_23;                           // 0xD00(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_16; // 0xD08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_52;                             // 0xD10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_53;                             // 0xD18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_52;                             // 0xD20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_53;                             // 0xD28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_53;                             // 0xD30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_53;                             // 0xD38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_52;                             // 0xD40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_52;                             // 0xD48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_54;                             // 0xD50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_42;    // 0xD58(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_42;    // 0xD78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_42;  // 0xD7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_42;   // 0xD80(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_17; // 0xD88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_41;    // 0xD90(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_41;    // 0xDB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_41;  // 0xDB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_41;   // 0xDB8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_40;    // 0xDC0(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_40;    // 0xDE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_40;  // 0xDE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_40;   // 0xDE8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_18; // 0xDF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_19; // 0xDF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_24;                           // 0xE00(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_55;                             // 0xE08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_55;                             // 0xE10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_55;                             // 0xE18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_55;                             // 0xE20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_56;                             // 0xE28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_57;                             // 0xE30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_56;                             // 0xE38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0xE40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_843E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_56;                             // 0xE48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_56;                             // 0xE50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_39;    // 0xE58(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_39;    // 0xE78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_39;  // 0xE7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_39;   // 0xE80(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_25;                           // 0xE88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_20; // 0xE90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_843F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_58;                             // 0xE98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_59;                             // 0xEA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_58;                             // 0xEA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_59;                             // 0xEB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_17;                             // 0xEB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8440[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_38;    // 0xEC0(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_38;    // 0xEE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_38;  // 0xEE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_38;   // 0xEE8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_21; // 0xEF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8441[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_26;                           // 0xEF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_60;                             // 0xF00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_60;                             // 0xF08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_61;                             // 0xF10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_18;                             // 0xF18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8442[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_61;                             // 0xF20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_37;    // 0xF28(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_37;    // 0xF48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_37;  // 0xF4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_37;   // 0xF50(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_27;                           // 0xF58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_22; // 0xF60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8443[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_62;                             // 0xF68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_63;                             // 0xF70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_62;                             // 0xF78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_63;                             // 0xF80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_19;                             // 0xF88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8444[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_36;    // 0xF90(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_36;    // 0xFB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_36;  // 0xFB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_36;   // 0xFB8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_23; // 0xFC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8445[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_28;                           // 0xFC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_64;                             // 0xFD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_64;                             // 0xFD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_65;                             // 0xFE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_20;                             // 0xFE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8446[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_65;                             // 0xFF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_35;    // 0xFF8(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_35;    // 0x1018(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_35;  // 0x101C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_35;   // 0x1020(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_29;                           // 0x1028(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_24; // 0x1030(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8447[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_66;                             // 0x1038(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_67;                             // 0x1040(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_66;                             // 0x1048(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_67;                             // 0x1050(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_21;                             // 0x1058(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8448[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_34;    // 0x1060(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_34;    // 0x1080(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_34;  // 0x1084(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_34;   // 0x1088(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_25; // 0x1090(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8449[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_30;                           // 0x1098(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_68;                             // 0x10A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_68;                             // 0x10A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_69;                             // 0x10B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_22;                             // 0x10B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_844A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_69;                             // 0x10C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_33;    // 0x10C8(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_33;    // 0x10E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_33;  // 0x10EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_33;   // 0x10F0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_31;                           // 0x10F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_26; // 0x1100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_844B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_70;                             // 0x1108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_71;                             // 0x1110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_70;                             // 0x1118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_71;                             // 0x1120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_23;                             // 0x1128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_844C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_32;    // 0x1130(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_32;    // 0x1150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_32;  // 0x1154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_32;   // 0x1158(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_27; // 0x1160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_844D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_32;                           // 0x1168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_72;                             // 0x1170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_72;                             // 0x1178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_73;                             // 0x1180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_24;                             // 0x1188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_844E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_73;                             // 0x1190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_31;    // 0x1198(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_31;    // 0x11B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_31;  // 0x11BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_31;   // 0x11C0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_33;                           // 0x11C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_28; // 0x11D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_844F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_74;                             // 0x11D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_75;                             // 0x11E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_74;                             // 0x11E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_75;                             // 0x11F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_25;                             // 0x11F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8450[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_30;    // 0x1200(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_30;    // 0x1220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_30;  // 0x1224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_30;   // 0x1228(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_29; // 0x1230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8451[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_34;                           // 0x1238(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_76;                             // 0x1240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_76;                             // 0x1248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_77;                             // 0x1250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_26;                             // 0x1258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8452[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_77;                             // 0x1260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_29;    // 0x1268(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_29;    // 0x1288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_29;  // 0x128C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_29;   // 0x1290(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_35;                           // 0x1298(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_30; // 0x12A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8453[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_78;                             // 0x12A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_79;                             // 0x12B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_78;                             // 0x12B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_79;                             // 0x12C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_27;                             // 0x12C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8454[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_28;    // 0x12D0(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_28;    // 0x12F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_28;  // 0x12F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_28;   // 0x12F8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_31; // 0x1300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8455[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_36;                           // 0x1308(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_80;                             // 0x1310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_80;                             // 0x1318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_81;                             // 0x1320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_28;                             // 0x1328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8456[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_81;                             // 0x1330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_27;    // 0x1338(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_27;    // 0x1358(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_27;  // 0x135C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_27;   // 0x1360(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_37;                           // 0x1368(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_32; // 0x1370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8457[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_82;                             // 0x1378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_83;                             // 0x1380(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_82;                             // 0x1388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_83;                             // 0x1390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_29;                             // 0x1398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8458[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_26;    // 0x13A0(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_26;    // 0x13C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_26;  // 0x13C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_26;   // 0x13C8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_33; // 0x13D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8459[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_38;                           // 0x13D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_84;                             // 0x13E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_84;                             // 0x13E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_85;                             // 0x13F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_30;                             // 0x13F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_845A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_85;                             // 0x1400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_25;    // 0x1408(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_25;    // 0x1428(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_25;  // 0x142C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_25;   // 0x1430(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_39;                           // 0x1438(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_34; // 0x1440(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_845B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_86;                             // 0x1448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_87;                             // 0x1450(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_86;                             // 0x1458(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_87;                             // 0x1460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_31;                             // 0x1468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_845C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_24;    // 0x1470(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_24;    // 0x1490(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_24;  // 0x1494(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_24;   // 0x1498(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_35; // 0x14A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_845D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_40;                           // 0x14A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_88;                             // 0x14B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_88;                             // 0x14B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_89;                             // 0x14C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_32;                             // 0x14C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_845E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_89;                             // 0x14D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_23;    // 0x14D8(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_23;    // 0x14F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_23;  // 0x14FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_23;   // 0x1500(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_41;                           // 0x1508(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_36; // 0x1510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_845F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_90;                             // 0x1518(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_91;                             // 0x1520(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_90;                             // 0x1528(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_91;                             // 0x1530(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_33;                             // 0x1538(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8460[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_22;    // 0x1540(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_22;    // 0x1560(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_22;  // 0x1564(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_22;   // 0x1568(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_37; // 0x1570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8461[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_42;                           // 0x1578(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_92;                             // 0x1580(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_92;                             // 0x1588(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_93;                             // 0x1590(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_34;                             // 0x1598(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8462[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_93;                             // 0x15A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_21;    // 0x15A8(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_21;    // 0x15C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_21;  // 0x15CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_21;   // 0x15D0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_43;                           // 0x15D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_38; // 0x15E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8463[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_94;                             // 0x15E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_95;                             // 0x15F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_94;                             // 0x15F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_95;                             // 0x1600(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_35;                             // 0x1608(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8464[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_20;    // 0x1610(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_20;    // 0x1630(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_20;  // 0x1634(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_20;   // 0x1638(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_39; // 0x1640(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8465[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_44;                           // 0x1648(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_96;                             // 0x1650(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_96;                             // 0x1658(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_97;                             // 0x1660(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_36;                             // 0x1668(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8466[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_97;                             // 0x1670(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_19;    // 0x1678(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_19;    // 0x1698(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_19;  // 0x169C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_19;   // 0x16A0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_45;                           // 0x16A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_40; // 0x16B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8467[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_98;                             // 0x16B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_99;                             // 0x16C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_98;                             // 0x16C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_99;                             // 0x16D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_37;                             // 0x16D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8468[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_18;    // 0x16E0(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_18;    // 0x1700(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_18;  // 0x1704(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_18;   // 0x1708(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_41; // 0x1710(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8469[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_46;                           // 0x1718(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_100;                            // 0x1720(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_100;                            // 0x1728(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_101;                            // 0x1730(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_38;                             // 0x1738(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_846A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_101;                            // 0x1740(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_17;    // 0x1748(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_17;    // 0x1768(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_17;  // 0x176C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_17;   // 0x1770(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_47;                           // 0x1778(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_42; // 0x1780(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_846B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_102;                            // 0x1788(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_103;                            // 0x1790(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_102;                            // 0x1798(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_103;                            // 0x17A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_39;                             // 0x17A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_40;                             // 0x17A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_846C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_16;    // 0x17B0(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_16;    // 0x17D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_16;  // 0x17D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_16;   // 0x17D8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_48;                           // 0x17E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_43; // 0x17E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_846D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_104;                            // 0x17F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_105;                            // 0x17F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_104;                            // 0x1800(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_105;                            // 0x1808(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_41;                             // 0x1810(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_846E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_15;    // 0x1818(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_15;    // 0x1838(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_15;  // 0x183C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_15;   // 0x1840(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_44; // 0x1848(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_846F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_49;                           // 0x1850(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_106;                            // 0x1858(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_106;                            // 0x1860(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_107;                            // 0x1868(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_42;                             // 0x1870(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8470[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_107;                            // 0x1878(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_14;    // 0x1880(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_14;    // 0x18A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_14;  // 0x18A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_14;   // 0x18A8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_50;                           // 0x18B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_45; // 0x18B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8471[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_108;                            // 0x18C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_109;                            // 0x18C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_108;                            // 0x18D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_109;                            // 0x18D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_43;                             // 0x18E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8472[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_13;    // 0x18E8(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_13;    // 0x1908(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_13;  // 0x190C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_13;   // 0x1910(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_46; // 0x1918(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8473[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_12;    // 0x1920(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_12;    // 0x1940(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_12;  // 0x1944(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_12;   // 0x1948(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_51;                           // 0x1950(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_47; // 0x1958(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8474[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_110;                            // 0x1960(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_111;                            // 0x1968(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_110;                            // 0x1970(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_111;                            // 0x1978(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_111;                            // 0x1980(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_110;                            // 0x1988(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_44;                             // 0x1990(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8475[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_11;    // 0x1998(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_11;    // 0x19B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_11;  // 0x19BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_11;   // 0x19C0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_48; // 0x19C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8476[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_52;                           // 0x19D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_112;                            // 0x19D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_112;                            // 0x19E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_113;                            // 0x19E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_45;                             // 0x19F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8477[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_113;                            // 0x19F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_10;    // 0x1A00(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_10;    // 0x1A20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_10;  // 0x1A24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_10;   // 0x1A28(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_9;     // 0x1A30(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_9;     // 0x1A50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_9;   // 0x1A54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_9;    // 0x1A58(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_49; // 0x1A60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_50; // 0x1A61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8478[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_53;                           // 0x1A68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_114;                            // 0x1A70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_114;                            // 0x1A78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_114;                            // 0x1A80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_115;                            // 0x1A88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_46;                             // 0x1A90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8479[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_115;                            // 0x1A98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_115;                            // 0x1AA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGlobalAudioSubsystem*                 CallFunc_GetEngineSubsystem_ReturnValue;           // 0x1AA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_8;     // 0x1AB0(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_8;     // 0x1AD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_8;   // 0x1AD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_8;    // 0x1AD8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_51; // 0x1AE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_847A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_54;                           // 0x1AE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_116;                            // 0x1AF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_116;                            // 0x1AF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_117;                            // 0x1B00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_47;                             // 0x1B08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_847B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_117;                            // 0x1B10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_7;     // 0x1B18(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_7;     // 0x1B38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_7;   // 0x1B3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_7;    // 0x1B40(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_55;                           // 0x1B48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_52; // 0x1B50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_847C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_118;                            // 0x1B58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_119;                            // 0x1B60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_118;                            // 0x1B68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_119;                            // 0x1B70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_48;                             // 0x1B78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_847D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_6;     // 0x1B80(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_6;     // 0x1BA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_6;   // 0x1BA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_6;    // 0x1BA8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_53; // 0x1BB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_847E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_56;                           // 0x1BB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_120;                            // 0x1BC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_120;                            // 0x1BC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_121;                            // 0x1BD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_49;                             // 0x1BD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_847F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_121;                            // 0x1BE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_5;     // 0x1BE8(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_5;     // 0x1C08(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_5;   // 0x1C0C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_5;    // 0x1C10(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_57;                           // 0x1C18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_54; // 0x1C20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8480[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_122;                            // 0x1C28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_123;                            // 0x1C30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_122;                            // 0x1C38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_123;                            // 0x1C40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_50;                             // 0x1C48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8481[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_4;     // 0x1C50(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_4;     // 0x1C70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_4;   // 0x1C74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_4;    // 0x1C78(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_55; // 0x1C80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8482[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_58;                           // 0x1C88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_124;                            // 0x1C90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_124;                            // 0x1C98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_125;                            // 0x1CA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_51;                             // 0x1CA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8483[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_125;                            // 0x1CB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_3;     // 0x1CB8(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_3;     // 0x1CD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_3;   // 0x1CDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_3;    // 0x1CE0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_59;                           // 0x1CE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_56; // 0x1CF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8484[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_126;                            // 0x1CF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_127;                            // 0x1D00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_126;                            // 0x1D08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_127;                            // 0x1D10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_52;                             // 0x1D18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8485[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_2;     // 0x1D20(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_2;     // 0x1D40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_2;   // 0x1D44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_2;    // 0x1D48(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_57; // 0x1D50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8486[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_60;                           // 0x1D58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_128;                            // 0x1D60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_128;                            // 0x1D68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_129;                            // 0x1D70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_53;                             // 0x1D78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8487[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_129;                            // 0x1D80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_1;     // 0x1D88(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_1;     // 0x1DA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_1;   // 0x1DAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_1;    // 0x1DB0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_61;                           // 0x1DB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_58; // 0x1DC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8488[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_130;                            // 0x1DC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_131;                            // 0x1DD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_130;                            // 0x1DD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_131;                            // 0x1DE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_54;                             // 0x1DE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8489[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue;       // 0x1DF0(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime;       // 0x1E10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime;     // 0x1E14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction;      // 0x1E18(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_59; // 0x1E20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_848A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_62;                           // 0x1E28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_132;                            // 0x1E30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_132;                            // 0x1E38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_133;                            // 0x1E40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_55;                             // 0x1E48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_848B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_133;                            // 0x1E50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_HUD_Manager_C>   CallFunc_Get_HUD_Manager_HUD_Manager;              // 0x1E58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_56;                             // 0x1E68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_848C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_134;                            // 0x1E70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_135;                            // 0x1E78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_HUD_Manager_C>   CallFunc_Get_HUD_Manager_HUD_Manager_1;            // 0x1E80(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCardNotificationQueueEmpty_bIsEmpty;    // 0x1E90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_848D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputAction*                          Temp_object_Variable_63;                           // 0x1E98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_81;    // 0x1EA0(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_81;    // 0x1EC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_81;  // 0x1EC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_81;   // 0x1EC8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_135;                            // 0x1ED0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_134;                            // 0x1ED8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_60; // 0x1EE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_848E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  CallFunc_GetPlayerController_ReturnValue;          // 0x1EE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetPlayerController_ReturnValue_1;        // 0x1EF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetPlayerController_ReturnValue_2;        // 0x1EF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  K2Node_Event_PlayerController;                     // 0x1F00(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_57;                             // 0x1F08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_848F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_136;                            // 0x1F10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_137;                            // 0x1F18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_64;                           // 0x1F20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_82;    // 0x1F28(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_82;    // 0x1F48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_82;  // 0x1F4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_82;   // 0x1F50(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_137;                            // 0x1F58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_136;                            // 0x1F60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_61; // 0x1F68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_58;                             // 0x1F69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8490[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_138;                            // 0x1F70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_139;                            // 0x1F78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_65;                           // 0x1F80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_83;    // 0x1F88(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_83;    // 0x1FA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_83;  // 0x1FAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_83;   // 0x1FB0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_139;                            // 0x1FB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_138;                            // 0x1FC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_62; // 0x1FC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_59;                             // 0x1FC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8491[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_140;                            // 0x1FD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_141;                            // 0x1FD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_66;                           // 0x1FE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_84;    // 0x1FE8(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_84;    // 0x2008(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_84;  // 0x200C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_84;   // 0x2010(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_60;                             // 0x2018(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8492[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_141;                            // 0x2020(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_140;                            // 0x2028(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_63; // 0x2030(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8493[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_142;                            // 0x2038(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_143;                            // 0x2040(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_67;                           // 0x2048(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_85;    // 0x2050(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_85;    // 0x2070(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_85;  // 0x2074(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_85;   // 0x2078(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_143;                            // 0x2080(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_142;                            // 0x2088(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_64; // 0x2090(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_61;                             // 0x2091(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8494[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBuildingInterface>   K2Node_DynamicCast_AsBuilding_Interface;           // 0x2098(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8495[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBuildingInterface>   K2Node_DynamicCast_AsBuilding_Interface_1;         // 0x20B0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x20C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8496[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_144;                            // 0x20C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_145;                            // 0x20D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_68;                           // 0x20D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBuildingInterface>   K2Node_DynamicCast_AsBuilding_Interface_2;         // 0x20E0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x20F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlacing_ReturnValue;                    // 0x20F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8497[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBuildingInterface>   K2Node_DynamicCast_AsBuilding_Interface_3;         // 0x20F8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x2108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8498[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_86;    // 0x2110(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_86;    // 0x2130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_86;  // 0x2134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_86;   // 0x2138(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_145;                            // 0x2140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_144;                            // 0x2148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_65; // 0x2150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8499[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          K2Node_CustomEvent_Tag;                            // 0x2154(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Count;                          // 0x215C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFeatureFlagStatus                CallFunc_FeatureFlagBranch_Result;                 // 0x2160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_849A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_80;    // 0x2168(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_80;    // 0x2188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_80;  // 0x218C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_80;   // 0x2190(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable;                                // 0x2198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_1;                              // 0x21A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_66; // 0x21A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_62;                             // 0x21A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_849B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable_146;                            // 0x21B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_147;                            // 0x21B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x21C0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x21D0(0x8)(NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Temp_object_Variable_69;                           // 0x21D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInputActionValue                     K2Node_EnhancedInputActionEvent_ActionValue_87;    // 0x21E0(0x20)(NoDestructor)
	float                                        K2Node_EnhancedInputActionEvent_ElapsedTime_87;    // 0x2200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_EnhancedInputActionEvent_TriggeredTime_87;  // 0x2204(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          K2Node_EnhancedInputActionEvent_SourceAction_87;   // 0x2208(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_147;                            // 0x2210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_146;                            // 0x2218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_InputActionValueToBool_ReturnValue_67; // 0x2220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


