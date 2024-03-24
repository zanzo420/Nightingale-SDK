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

// 0x221 (0x221 - 0x0)
// Function BP_SnapRulesEnforcer_Awning.BP_SnapRulesEnforcer_Awning_C.GetAcceptableQuadrants
struct UBP_SnapRulesEnforcer_Awning_C_GetAcceptableQuadrants_Params
{
public:
	struct FGridPoint                            TargetPoint;                                       // 0x0(0xD0)(BlueprintVisible, BlueprintReadOnly, Parm)
	TSet<enum class ESnapPointQuadrant>          AcceptableQuadrants;                               // 0xD0(0x50)(Parm, OutParm)
	bool                                         CallFunc_IsAwningSnapType_IsAwning;                // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A588[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<enum class ESnapPointQuadrant>          CallFunc_GetAcceptableQuadrants_AcceptableQuadrants; // 0x128(0x50)(None)
	TSet<enum class ESnapPointQuadrant>          K2Node_MakeSet_Set;                                // 0x178(0x50)(None)
	enum class ESnapPointQuadrant                CallFunc_GetMirrorQuadrant_ReturnValue;            // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A589[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<enum class ESnapPointQuadrant>          K2Node_MakeSet_Set_1;                              // 0x1D0(0x50)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


