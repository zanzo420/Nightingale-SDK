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

// 0x1D8 (0x1D8 - 0x0)
// Function EEC_Consumable_HealOverTime.EEC_Consumable_HealOverTime_C.Execute
struct UEEC_Consumable_HealOverTime_C_Execute_Params
{
public:
	struct FGameplayEffectCustomExecutionParameters ExecutionParams;                                   // 0x0(0xF8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectCustomExecutionOutput  OutExecutionOutput;                                // 0xF8(0x18)(Parm, OutParm)
	class UAbilitySystemComponent*               LAbilitySystem;                                    // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAttribute                    Temp_struct_Variable;                              // 0x118(0x38)(ConstParm, HasGetValueTypeHash)
	class UAbilitySystemComponent*               CallFunc_GetTargetAbilitySystemComponent_ReturnValue; // 0x150(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetSourceAttributeMagnitude_Magnitude;    // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectCustomExecutionOutput  CallFunc_Execute_OutExecutionOutput;               // 0x160(0x18)(None)
	struct FGameplayAttribute                    Temp_struct_Variable_1;                            // 0x178(0x38)(ConstParm, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetSourceAttributeMagnitude_Magnitude_1;  // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_DamageActorOverTime_Duration_ImplicitCast; // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


