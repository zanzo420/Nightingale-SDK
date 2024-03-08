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

// 0x9C (0x9C - 0x0)
// Function GA_CreatureAbility_TurnToFace_Bound_Swordsman1.GA_CreatureAbility_TurnToFace_Bound_Swordsman1_C.SelectMontage
struct UGA_CreatureAbility_TurnToFace_Bound_Swordsman1_C_SelectMontage_Params
{
public:
	struct FTransform                            TargetTransform;                                   // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          SelectedMontage;                                   // 0x60(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetTarget_Target;                         // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class Enum_CreatureAbilityZone          CallFunc_Get_Creature_Ability_Zone_4_Way_CreatureAbilityZone; // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4403[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDynamicMontageArray                  CallFunc_Map_Find_Value;                           // 0x78(0x10)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4404[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_SelectMontageNearTarget_ReturnValue;      // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectMontageNearTarget_Leeway_ImplicitCast; // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


