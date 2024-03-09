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

// 0x1C8 (0x1C8 - 0x0)
// Function BP_SnapRulesEnforcer_Table.BP_SnapRulesEnforcer_Table_C.GetAcceptableQuadrants
struct UBP_SnapRulesEnforcer_Table_C_GetAcceptableQuadrants_Params
{
public:
	struct FGridPoint                            TargetPoint;                                       // 0x0(0xD0)(BlueprintVisible, BlueprintReadOnly, Parm)
	TSet<enum class ESnapPointQuadrant>          AcceptableQuadrants;                               // 0xD0(0x50)(Parm, OutParm)
	TSet<enum class ESnapPointQuadrant>          K2Node_MakeSet_Set;                                // 0x120(0x50)(None)
	bool                                         CallFunc_IsDecorationSnapType_IsDecoration;        // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<enum class ESnapPointQuadrant>          CallFunc_GetAcceptableQuadrants_AcceptableQuadrants; // 0x178(0x50)(None)
};

}
}


