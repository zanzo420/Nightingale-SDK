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

// 0x21 (0x21 - 0x0)
// Function BPTA_GameplayEventReceived.BPTA_GameplayEventReceived_C.GetTagToSend
struct ABPTA_GameplayEventReceived_C_GetTagToSend_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A742[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          TagToSend;                                         // 0x4(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A743[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameplayAbility*                      CallFunc_GetOwningAbility_ReturnValue;             // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGA_SwingMeleeWeapon_C*                K2Node_DynamicCast_AsGA_Swing_Melee_Weapon;        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BPTA_GameplayEventReceived.BPTA_GameplayEventReceived_C.ConfirmAndSendTargetData
struct ABPTA_GameplayEventReceived_C_ConfirmAndSendTargetData_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x28)(Parm, OutParm)
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromGameplayTag_ReturnValue; // 0x28(0x28)(None)
};

// 0x8 (0x8 - 0x0)
// Function BPTA_GameplayEventReceived.BPTA_GameplayEventReceived_C.ReceiveStartTargeting
struct ABPTA_GameplayEventReceived_C_ReceiveStartTargeting_Params
{
public:
	class UGameplayAbility*                      Ability;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BPTA_GameplayEventReceived.BPTA_GameplayEventReceived_C.ExecuteUbergraph_BPTA_GameplayEventReceived
struct ABPTA_GameplayEventReceived_C_ExecuteUbergraph_BPTA_GameplayEventReceived_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A746[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameplayAbility*                      K2Node_Event_Ability;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetTagToSend_Success;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A747[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          CallFunc_GetTagToSend_TagToSend;                   // 0x14(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}


