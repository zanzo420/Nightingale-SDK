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

// 0x438 (0x438 - 0x0)
// Function BP_QuestRewardPresentationBuilder_ItemReward.BP_QuestRewardPresentationBuilder_ItemReward_C.MakeQuestRewardPresentationData
struct UBP_QuestRewardPresentationBuilder_ItemReward_C_MakeQuestRewardPresentationData_Params
{
public:
	class URewardBehaviour*                      RewardBehaviour;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FQuestRewardPresentationData          OutPresentationData;                               // 0x8(0x60)(Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x68(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A55A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_RewardBehaviour_Item_C*            K2Node_DynamicCast_AsBP_Reward_Behaviour_Item;     // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A55B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_CreateNewItemEntry_NewEntry;              // 0x80(0x2F0)(None)
	enum class EGetResult                        CallFunc_CreateNewItemEntry_OutBranch;             // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A55C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetItemName_ReturnValue;                  // 0x378(0x18)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A55E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetItemIcon_ReturnValue;                  // 0x398(0x28)(UObjectWrapper, HasGetValueTypeHash)
	class FText                                  CallFunc_GetItemDescription_ReturnValue;           // 0x3C0(0x18)(None)
	struct FQuestRewardPresentationData          K2Node_MakeStruct_QuestRewardPresentationData;     // 0x3D8(0x60)(None)
};

}
}


