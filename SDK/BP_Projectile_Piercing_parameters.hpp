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

// 0xC (0xC - 0x0)
// Function BP_Projectile_Piercing.BP_Projectile_Piercing_C.RegisterPassthrough
struct ABP_Projectile_Piercing_C_RegisterPassthrough_Params
{
public:
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A424[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function BP_Projectile_Piercing.BP_Projectile_Piercing_C.GrantProjectileAbilities
struct ABP_Projectile_Piercing_C_GrantProjectileAbilities_Params
{
public:
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A429[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilitySpecDef               CallFunc_CreateAbilitySpecDefFromClass_ReturnValue; // 0x8(0x98)(None)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A42B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilitySpecHandle            CallFunc_GiveAbility_ReturnValue;                  // 0xA4(0x4)(NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_Projectile_Piercing.BP_Projectile_Piercing_C.GetPassthroughCount
struct ABP_Projectile_Piercing_C_GetPassthroughCount_Params
{
public:
	int32                                        PassthroughCount;                                  // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_Projectile_Piercing.BP_Projectile_Piercing_C.ValidatePassthrough
struct ABP_Projectile_Piercing_C_ValidatePassthrough_Params
{
public:
	bool                                         ValidPassthrough;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_Projectile_Piercing.BP_Projectile_Piercing_C.ValidateImpactDetection
struct ABP_Projectile_Piercing_C_ValidateImpactDetection_Params
{
public:
	bool                                         ValidTraceImpact;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ValidateImpactDetection_ValidTraceImpact; // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_Projectile_Piercing.BP_Projectile_Piercing_C.HandleImpactDetected
struct ABP_Projectile_Piercing_C_HandleImpactDetected_Params
{
public:
	bool                                         CallFunc_ValidatePassthrough_ValidPassthrough;     // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


