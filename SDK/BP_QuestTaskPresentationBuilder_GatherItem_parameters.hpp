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

// 0x208 (0x208 - 0x0)
// Function BP_QuestTaskPresentationBuilder_GatherItem.BP_QuestTaskPresentationBuilder_GatherItem_C.MakeTaskConditionPresentationData
struct UBP_QuestTaskPresentationBuilder_GatherItem_C_MakeTaskConditionPresentationData_Params
{
public:
	class UConditionBehaviour*                   Condition;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentValue;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasCreated;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A562[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskConditionPresentationData   ConditionPresentationData;                         // 0x10(0x68)(Parm, OutParm)
	int32                                        TargetValue;                                       // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A563[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskConditionPresentationData   CurrentPresentationData;                           // 0x80(0x68)(Edit, BlueprintVisible)
	struct FQuestTaskConditionPresentationData   K2Node_MakeStruct_QuestTaskConditionPresentationData; // 0xE8(0x68)(None)
	class UBP_ConditionBehaviour_Item_Acquired_Constraint_C* K2Node_DynamicCast_AsBP_Condition_Behaviour_Item_Acquired_Constraint; // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A564[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemConstraintPresentationData       CallFunc_GetItemConstraintUIData_OutPresentationData; // 0x160(0x88)(None)
	int32                                        CallFunc_GetItemConstraintQuantityRequired_ReturnValue; // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A565[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_FormatTaskName_ReturnValue;               // 0x1F0(0x18)(None)
};

}
}


