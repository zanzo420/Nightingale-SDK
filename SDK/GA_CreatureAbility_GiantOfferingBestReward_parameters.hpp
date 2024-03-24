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

// 0xD9 (0xD9 - 0x0)
// Function GA_CreatureAbility_GiantOfferingBestReward.GA_CreatureAbility_GiantOfferingBestReward_C.HandleEvent
struct UGA_CreatureAbility_GiantOfferingBestReward_C_HandleEvent_Params
{
public:
	struct FGameplayTag                          EventTags;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    EventData;                                         // 0x8(0xD0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x370 (0x370 - 0x0)
// Function GA_CreatureAbility_GiantOfferingBestReward.GA_CreatureAbility_GiantOfferingBestReward_C.SpawnReward
struct UGA_CreatureAbility_GiantOfferingBestReward_C_SpawnReward_Params
{
public:
	class ANWXPlayerState*                       PlayerState;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8087[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       LItem;                                             // 0x10(0x2F0)(Edit, BlueprintVisible)
	int32                                        LIndex;                                            // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8088[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x310(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GA_CreatureAbility_GiantOfferingBestReward.GA_CreatureAbility_GiantOfferingBestReward_C.K2_OnEndAbility
struct UGA_CreatureAbility_GiantOfferingBestReward_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function GA_CreatureAbility_GiantOfferingBestReward.GA_CreatureAbility_GiantOfferingBestReward_C.ExecuteUbergraph_GA_CreatureAbility_GiantOfferingBestReward
struct UGA_CreatureAbility_GiantOfferingBestReward_C_ExecuteUbergraph_GA_CreatureAbility_GiantOfferingBestReward_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x4(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_1;                            // 0xC(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_2;                            // 0x14(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_3;                            // 0x1C(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_4;                            // 0x24(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8089[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Creature_Wildlife_SunGiant_C*      K2Node_DynamicCast_AsBP_Creature_Wildlife_Sun_Giant; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


