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

// 0x133 (0x133 - 0x0)
// Function GA_ClimbFromItem.GA_ClimbFromItem_C.K2_ShouldAbilityRespondToEvent
struct UGA_ClimbFromItem_C_K2_ShouldAbilityRespondToEvent_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayEventData                    Payload;                                           // 0x50(0xD0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ReturnValue;                                       // 0x120(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A7F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWX_CharacterMovementComponent*       K2Node_DynamicCast_AsNWX_Character_Movement_Component; // 0x128(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsClimbing_ReturnValue;                   // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x132(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function GA_ClimbFromItem.GA_ClimbFromItem_C.K2_ActivateAbilityFromEvent
struct UGA_ClimbFromItem_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x261 (0x261 - 0x0)
// Function GA_ClimbFromItem.GA_ClimbFromItem_C.ExecuteUbergraph_GA_ClimbFromItem
struct UGA_ClimbFromItem_C_ExecuteUbergraph_GA_ClimbFromItem_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A7F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x8(0xD0)(ConstParm)
	class AActor*                                CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXTraversalComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0xE0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0xE8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x100(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTraversalTraceResult                 CallFunc_TraversalTrace_OutResult;                 // 0x118(0x38)(NoDestructor)
	bool                                         CallFunc_TraversalTrace_ReturnValue;               // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A7F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwningActorFromActorInfo_ReturnValue_1; // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityPayloadHandle         CallFunc_AbilityPayloadFromVector_ReturnValue;     // 0x160(0x20)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A7F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x188(0xD0)(None)
	class UAbilitySystemComponent*               CallFunc_GetOwningActorAbilitySystem_ReturnValue;  // 0x258(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryActivateAbilityByClass_ReturnValue;    // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


