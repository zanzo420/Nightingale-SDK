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

// 0x318 (0x318 - 0x0)
// Function BP_SnapRulesEnforcer_Wall.BP_SnapRulesEnforcer_Wall_C.GetAcceptableQuadrants
struct UBP_SnapRulesEnforcer_Wall_C_GetAcceptableQuadrants_Params
{
public:
	struct FGridPoint                            TargetPoint;                                       // 0x0(0xD0)(BlueprintVisible, BlueprintReadOnly, Parm)
	TSet<enum class ESnapPointQuadrant>          AcceptableQuadrants;                               // 0xD0(0x50)(Parm, OutParm)
	TSet<enum class ESnapPointQuadrant>          K2Node_MakeSet_Set;                                // 0x120(0x50)(None)
	bool                                         CallFunc_IsRoofFillerSnapType_IsRoofFiller;        // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRoofConvexSnapType_IsRoofConvex;        // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRoofFlatSnapType_IsRoofFlat;            // 0x172(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRoofAngleSnapType_IsRoofAngle;          // 0x173(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x174(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsWallSnapType_IsWall;                    // 0x175(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFoundationSnapType_IsFoundation;        // 0x176(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESnapPointQuadrant                CallFunc_GetMirrorQuadrant_ReturnValue;            // 0x177(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<enum class ESnapPointQuadrant>          K2Node_MakeSet_Set_1;                              // 0x180(0x50)(None)
	TSet<enum class ESnapPointQuadrant>          K2Node_MakeSet_Set_2;                              // 0x1D0(0x50)(None)
	TSet<enum class ESnapPointQuadrant>          K2Node_MakeSet_Set_3;                              // 0x220(0x50)(None)
	TSet<enum class ESnapPointQuadrant>          CallFunc_GetAcceptableQuadrants_AcceptableQuadrants; // 0x270(0x50)(None)
	enum class ESnapPointQuadrant                CallFunc_GetMirrorQuadrant_ReturnValue_1;          // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x2C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3FE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<enum class ESnapPointQuadrant>          K2Node_MakeSet_Set_4;                              // 0x2C8(0x50)(None)
};

}
}


