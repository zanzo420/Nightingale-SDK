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

// 0xE2 (0xE2 - 0x0)
// Function GA_CreatureAbility_Harpy_DropItem.GA_CreatureAbility_Harpy_DropItem_C.HandleEvent
struct UGA_CreatureAbility_Harpy_DropItem_C_HandleEvent_Params
{
public:
	struct FGameplayTag                          EventTags;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    EventData;                                         // 0x8(0xD0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class ABP_Creature_Wildlife_Harpy_C*         K2Node_DynamicCast_AsBP_Creature_Wildlife_Harpy;   // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


