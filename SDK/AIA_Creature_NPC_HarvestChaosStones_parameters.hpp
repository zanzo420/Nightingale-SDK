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

// 0x10 (0x10 - 0x0)
// Function AIA_Creature_NPC_HarvestChaosStones.AIA_Creature_NPC_HarvestChaosStones_C.GetNormalizedRunPriority
struct UAIA_Creature_NPC_HarvestChaosStones_C_GetNormalizedRunPriority_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetNormalizedScore_ReturnValue;           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function AIA_Creature_NPC_HarvestChaosStones.AIA_Creature_NPC_HarvestChaosStones_C.CheckTargetRequirements
struct UAIA_Creature_NPC_HarvestChaosStones_C_CheckTargetRequirements_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXHarvestableGeometryCollection*     LHarvestableGeom;                                  // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckTargetRequirements_ReturnValue;      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IDamageVulnerabilityInterface> CallFunc_IsVulnerableToPowerLevel_self_CastInput;  // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPowerLevel                           CallFunc_IsVulnerableToPowerLevel_OutPowerLevelDifference; // 0x30(0x4)(NoDestructor)
	bool                                         CallFunc_IsVulnerableToPowerLevel_ReturnValue;     // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXHarvestableGeometryCollection*     K2Node_DynamicCast_AsNWXHarvestable_Geometry_Collection; // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60CC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetCompanionSearchParameters_SearchLocation; // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetCompanionSearchParameters_SearchRadius; // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Vector_Distance_ReturnValue;              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;    // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function AIA_Creature_NPC_HarvestChaosStones.AIA_Creature_NPC_HarvestChaosStones_C.GetNormalizedScore
struct UAIA_Creature_NPC_HarvestChaosStones_C_GetNormalizedScore_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetNormalizedDistanceScore_ReturnValue;   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetNormalizedDistanceScore_MaxDistance_ImplicitCast; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function AIA_Creature_NPC_HarvestChaosStones.AIA_Creature_NPC_HarvestChaosStones_C.CheckStaticTargetRequirements
struct UAIA_Creature_NPC_HarvestChaosStones_C_CheckStaticTargetRequirements_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckStaticTargetRequirements_ReturnValue; // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60D1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXHarvestableGeometryCollection*     K2Node_DynamicCast_AsNWXHarvestable_Geometry_Collection; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


