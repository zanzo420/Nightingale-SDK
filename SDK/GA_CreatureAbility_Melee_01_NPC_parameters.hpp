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

// 0x80 (0x80 - 0x0)
// Function GA_CreatureAbility_Melee_01_NPC.GA_CreatureAbility_Melee_01_NPC_C.CreatureAbilityInitialize
struct UGA_CreatureAbility_Melee_01_NPC_C_CreatureAbilityInitialize_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AC5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEquippableItem*                       Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAttribute                    Temp_struct_Variable;                              // 0x10(0x38)(ConstParm, HasGetValueTypeHash)
	float                                        CallFunc_CalculateItemAttributeValue_ReturnValue;  // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AC6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IAICompanionInterface> K2Node_DynamicCast_AsAICompanion_Interface;        // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AC7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEquippableItem*                       CallFunc_GetEquippedItem_ReturnValue;              // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CreatureAbilityInitialize_bSuccess;       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AC8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_VariableSet_AbilityDamage_ImplicitCast;     // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


