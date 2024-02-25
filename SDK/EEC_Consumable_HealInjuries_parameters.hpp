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

// 0x188 (0x188 - 0x0)
// Function EEC_Consumable_HealInjuries.EEC_Consumable_HealInjuries_C.Execute
struct UEEC_Consumable_HealInjuries_C_Execute_Params
{
public:
	struct FGameplayEffectCustomExecutionParameters ExecutionParams;                                   // 0x0(0xF8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectCustomExecutionOutput  OutExecutionOutput;                                // 0xF8(0x18)(Parm, OutParm)
	class AActor*                                LOwner;                                            // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               LAbilitySystem;                                    // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetTargetAbilitySystemComponent_ReturnValue; // 0x120(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectCustomExecutionOutput  CallFunc_Execute_OutExecutionOutput;               // 0x130(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface; // 0x150(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveStatusEffect_ReturnValue;           // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5F9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface_1; // 0x168(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveStatusEffect_ReturnValue_1;         // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5FA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x180(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


