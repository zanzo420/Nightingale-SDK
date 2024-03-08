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

// 0x8 (0x8 - 0x0)
// Function AIA_Creature_Combat_NPCRanged.AIA_Creature_Combat_NPCRanged_C.Stop
struct UAIA_Creature_Combat_NPCRanged_C_Stop_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function AIA_Creature_Combat_NPCRanged.AIA_Creature_Combat_NPCRanged_C.ExecuteUbergraph_AIA_Creature_Combat_NPCRanged
struct UAIA_Creature_Combat_NPCRanged_C_ExecuteUbergraph_AIA_Creature_Combat_NPCRanged_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A7B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_Target;                               // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


