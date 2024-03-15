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

// 0xD0 (0xD0 - 0x0)
// Function BP_QuestRewardPresentationBuilder_HopeGate.BP_QuestRewardPresentationBuilder_HopeGate_C.MakeQuestRewardPresentationData
struct UBP_QuestRewardPresentationBuilder_HopeGate_C_MakeQuestRewardPresentationData_Params
{
public:
	class URewardBehaviour*                      RewardBehaviour;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FQuestRewardPresentationData          OutPresentationData;                               // 0x8(0x60)(Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x68(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8A50[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestRewardPresentationData          K2Node_MakeStruct_QuestRewardPresentationData;     // 0x70(0x60)(None)
};

}
}


