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

// 0x12 (0x12 - 0x0)
// Function AIA_Creature_NPCVillager_Base.AIA_Creature_NPCVillager_Base_C.Initialize
struct UAIA_Creature_NPCVillager_Base_C_Initialize_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A7C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAIC_Creature_NPC_Villager_C*          K2Node_DynamicCast_AsAIC_Creature_NPC_Villager;    // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Initialize_ReturnValue;                   // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function AIA_Creature_NPCVillager_Base.AIA_Creature_NPCVillager_Base_C.GetNPCGroup
struct UAIA_Creature_NPCVillager_Base_C_GetNPCGroup_Params
{
public:
	class ABP_CreatureSpawner_NPCGroup_C*        NPCGroup;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureSpawner_NPCGroup_C*        K2Node_DynamicCast_AsBP_Creature_Spawner_NPCGroup; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


