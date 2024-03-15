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

// 0x19 (0x19 - 0x0)
// Function BP_RewardBehaviour_TutorialModalPopup.BP_RewardBehaviour_TutorialModalPopup_C.LoadData
struct UBP_RewardBehaviour_TutorialModalPopup_C_LoadData_Params
{
public:
	class UTutorialDataAsset_SlideDeck*          LoadedData;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTutorialDataAsset_SlideDeck*          K2Node_DynamicCast_AsTutorial_Data_Asset_Slide_Deck; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x81 (0x81 - 0x0)
// Function BP_RewardBehaviour_TutorialModalPopup.BP_RewardBehaviour_TutorialModalPopup_C.GrantHintPopupReward
struct UBP_RewardBehaviour_TutorialModalPopup_C_GrantHintPopupReward_Params
{
public:
	class APlayerState*                          PlayerState;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               ContextObject;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTutorialDataAsset_SlideDeck*          TutorialData;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_TutorialComponent_C*               CallFunc_GetComponentByClass_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_GetUID_ReturnValue;                       // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A8D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_GuidToString_ReturnValue;            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FMetricsEventAttr                     K2Node_MakeStruct_MetricsEventAttr;                // 0x48(0x20)(None)
	TArray<struct FMetricsEventAttr>             K2Node_MakeArray_Array;                            // 0x68(0x10)(ConstParm, ReferenceParm)
	class ANWXPlayerState*                       K2Node_DynamicCast_AsNWXPlayer_State;              // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_RewardBehaviour_TutorialModalPopup.BP_RewardBehaviour_TutorialModalPopup_C.ApplyReward
struct UBP_RewardBehaviour_TutorialModalPopup_C_ApplyReward_Params
{
public:
	class APlayerState*                          PlayerState;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               SenderContextObject;                               // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_RewardBehaviour_TutorialModalPopup.BP_RewardBehaviour_TutorialModalPopup_C.ExecuteUbergraph_BP_RewardBehaviour_TutorialModalPopup
struct UBP_RewardBehaviour_TutorialModalPopup_C_ExecuteUbergraph_BP_RewardBehaviour_TutorialModalPopup_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A8D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTutorialDataAsset_SlideDeck*          CallFunc_LoadData_LoadedData;                      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                          K2Node_Event_PlayerState;                          // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_Event_SenderContextObject;                  // 0x18(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


