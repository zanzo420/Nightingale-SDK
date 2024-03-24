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

// 0xE (0xE - 0x0)
// Function AIA_Creature_Combat_NPCMelee.AIA_Creature_Combat_NPCMelee_C.CheckOwnerRequirements
struct UAIA_Creature_Combat_NPCMelee_C_CheckOwnerRequirements_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A45F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x4(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckOwnerRequirements_ReturnValue;       // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ActorHasTag_ReturnValue;                  // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AIA_Creature_Combat_NPCMelee.AIA_Creature_Combat_NPCMelee_C.Stop
struct UAIA_Creature_Combat_NPCMelee_C_Stop_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function AIA_Creature_Combat_NPCMelee.AIA_Creature_Combat_NPCMelee_C.ExecuteUbergraph_AIA_Creature_Combat_NPCMelee
struct UAIA_Creature_Combat_NPCMelee_C_ExecuteUbergraph_AIA_Creature_Combat_NPCMelee_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A460[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_Target;                               // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


