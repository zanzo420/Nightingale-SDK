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
// Function WBP_GuideBook_DetailPane_HowToPlay.WBP_GuideBook_DetailPane_HowToPlay_C.OnPopupClosed
struct UWBP_GuideBook_DetailPane_HowToPlay_C_OnPopupClosed_Params
{
public:
	class UNWXCommonWindowWidget*                Window;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x161 (0x161 - 0x0)
// Function WBP_GuideBook_DetailPane_HowToPlay.WBP_GuideBook_DetailPane_HowToPlay_C.OnExecuteCategoryOperation
struct UWBP_GuideBook_DetailPane_HowToPlay_C_OnExecuteCategoryOperation_Params
{
public:
	class UCodexTrackerComponent*                LCodexTracker;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerState*                       CallFunc_GetOwningPlayerState_ReturnValue;         // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCodexTrackerComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Popup_Codex_C*                    CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A87[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MenuDataEntry_Codex_C*             K2Node_DynamicCast_AsBP_Menu_Data_Entry_Codex;     // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A88[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCodexBaseDataAsset*                   CallFunc_GetCodexDataAsset_CodexDataAsset;         // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICodexTrackerInterface> CallFunc_GetCodexEntry_self_CastInput;             // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCodexEntry                           CallFunc_GetCodexEntry_OutCodexEntry;              // 0x70(0xF0)(None)
	bool                                         CallFunc_GetCodexEntry_ReturnValue;                // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function WBP_GuideBook_DetailPane_HowToPlay.WBP_GuideBook_DetailPane_HowToPlay_C.UpdateCosmetics
struct UWBP_GuideBook_DetailPane_HowToPlay_C_UpdateCosmetics_Params
{
public:
	class UCodexBaseDataAsset*                   CodexDataAsset;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetImage_IsValidReference;                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A8C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetImage_EntryImage;                      // 0x20(0x28)(UObjectWrapper, HasGetValueTypeHash)
	class UBP_MenuDataEntry_Codex_C*             K2Node_DynamicCast_AsBP_Menu_Data_Entry_Codex;     // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A8E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCodexBaseDataAsset*                   CallFunc_GetCodexDataAsset_CodexDataAsset;         // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Get_Codex_Subentries_In_Guidebook_Codex_Subentry_Text; // 0x60(0x18)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_1;                // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_2;                // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A8F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerState_C*                     CallFunc_GetLocalPlayerState_PlayerState;          // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_GuideBook_DetailPane_HowToPlay.WBP_GuideBook_DetailPane_HowToPlay_C.ExecuteUbergraph_WBP_GuideBook_DetailPane_HowToPlay
struct UWBP_GuideBook_DetailPane_HowToPlay_C_ExecuteUbergraph_WBP_GuideBook_DetailPane_HowToPlay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_GuideBook_DetailPane_HowToPlay.WBP_GuideBook_DetailPane_HowToPlay_C.OnEntryPopupUpdated__DelegateSignature
struct UWBP_GuideBook_DetailPane_HowToPlay_C_OnEntryPopupUpdated__DelegateSignature_Params
{
public:
	bool                                         IsOpening;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


