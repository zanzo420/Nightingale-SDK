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

// 0x1 (0x1 - 0x0)
// Function GA_CreatureAbility_Melee_01_FaeAssassin.GA_CreatureAbility_Melee_01_FaeAssassin_C.K2_OnEndAbility
struct UGA_CreatureAbility_Melee_01_FaeAssassin_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x25 (0x25 - 0x0)
// Function GA_CreatureAbility_Melee_01_FaeAssassin.GA_CreatureAbility_Melee_01_FaeAssassin_C.ExecuteUbergraph_GA_CreatureAbility_Melee_01_FaeAssassin
struct UGA_CreatureAbility_Melee_01_FaeAssassin_C_ExecuteUbergraph_GA_CreatureAbility_Melee_01_FaeAssassin_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x4(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A7F4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IAICCreatureDataInterface> CallFunc_GetMeleeAttackCooldown_self_CastInput;    // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMeleeAttackCooldown_ReturnValue;       // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


