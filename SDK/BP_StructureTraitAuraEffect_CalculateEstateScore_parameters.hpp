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

// 0x41 (0x41 - 0x0)
// Function BP_StructureTraitAuraEffect_CalculateEstateScore.BP_StructureTraitAuraEffect_CalculateEstateScore_C.OnObjectLeaveAura
struct UBP_StructureTraitAuraEffect_CalculateEstateScore_C_OnObjectLeaveAura_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStructureTraitAuraComponent*          LastAuraComponentEncountered;                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A409[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IStructureEstateInterface> K2Node_DynamicCast_AsStructure_Estate_Interface;   // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A40A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructureEstateComponent*             CallFunc_GetStructureEstateComponentForModify_ReturnValue; // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function BP_StructureTraitAuraEffect_CalculateEstateScore.BP_StructureTraitAuraEffect_CalculateEstateScore_C.OnObjectEnterAura
struct UBP_StructureTraitAuraEffect_CalculateEstateScore_C_OnObjectEnterAura_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStructureTraitAuraComponent*          AuraComponent;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A416[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IStructureEstateInterface> K2Node_DynamicCast_AsStructure_Estate_Interface;   // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A418[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructureEstateComponent*             CallFunc_GetStructureEstateComponentForModify_ReturnValue; // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


