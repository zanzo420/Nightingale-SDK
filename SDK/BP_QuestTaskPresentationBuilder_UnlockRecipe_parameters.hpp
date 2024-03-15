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

// 0x160 (0x160 - 0x0)
// Function BP_QuestTaskPresentationBuilder_UnlockRecipe.BP_QuestTaskPresentationBuilder_UnlockRecipe_C.MakeTaskConditionPresentationData
struct UBP_QuestTaskPresentationBuilder_UnlockRecipe_C_MakeTaskConditionPresentationData_Params
{
public:
	class UConditionBehaviour*                   Condition;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentValue;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasCreated;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A8D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskConditionPresentationData   ConditionPresentationData;                         // 0x10(0x68)(Parm, OutParm)
	class UBP_ConditionBehaviour_Skill_Unlocked_C* K2Node_DynamicCast_AsBP_Condition_Behaviour_Skill_Unlocked; // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A8D7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkillPresentationData                CallFunc_GetSkillPresentationData_ReturnValue;     // 0x88(0x58)(None)
	class FText                                  CallFunc_FormatTaskName_ReturnValue;               // 0xE0(0x18)(None)
	struct FQuestTaskConditionPresentationData   K2Node_MakeStruct_QuestTaskConditionPresentationData; // 0xF8(0x68)(None)
};

}
}


