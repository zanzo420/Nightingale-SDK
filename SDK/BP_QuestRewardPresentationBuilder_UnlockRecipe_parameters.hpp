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

// 0x1B0 (0x1B0 - 0x0)
// Function BP_QuestRewardPresentationBuilder_UnlockRecipe.BP_QuestRewardPresentationBuilder_UnlockRecipe_C.MakeQuestRewardPresentationData
struct UBP_QuestRewardPresentationBuilder_UnlockRecipe_C_MakeQuestRewardPresentationData_Params
{
public:
	class URewardBehaviour*                      RewardBehaviour;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FQuestRewardPresentationData          OutPresentationData;                               // 0x8(0x60)(Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x68(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5053[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_RewardBehaviour_Technique_C*       K2Node_DynamicCast_AsBP_Reward_Behaviour_Technique; // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5054[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkillPresentationData                CallFunc_GetSkillPresentationData_ReturnValue;     // 0x80(0x58)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xD8(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x128(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x138(0x18)(None)
	struct FQuestRewardPresentationData          K2Node_MakeStruct_QuestRewardPresentationData;     // 0x150(0x60)(None)
};

}
}


