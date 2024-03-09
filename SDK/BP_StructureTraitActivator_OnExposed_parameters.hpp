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

// 0x11 (0x11 - 0x0)
// Function BP_StructureTraitActivator_OnExposed.BP_StructureTraitActivator_OnExposed_C.CheckActiveByMinorCard_0
struct UBP_StructureTraitActivator_OnExposed_C_CheckActiveByMinorCard_0_Params
{
public:
	TArray<struct FStructureTrait>               CallFunc_GetActiveRealmCardTraits_ReturnValue;     // 0x0(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_StructureTraitActivator_OnExposed.BP_StructureTraitActivator_OnExposed_C.OnSheltered
struct UBP_StructureTraitActivator_OnExposed_C_OnSheltered_Params
{
public:
	bool                                         IsSheltered;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function BP_StructureTraitActivator_OnExposed.BP_StructureTraitActivator_OnExposed_C.InitializeActivator
struct UBP_StructureTraitActivator_OnExposed_C_InitializeActivator_Params
{
public:
	struct FStructureTrait                       Trait;                                             // 0x0(0x68)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function BP_StructureTraitActivator_OnExposed.BP_StructureTraitActivator_OnExposed_C.ExecuteUbergraph_BP_StructureTraitActivator_OnExposed
struct UBP_StructureTraitActivator_OnExposed_C_ExecuteUbergraph_BP_StructureTraitActivator_OnExposed_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureTrait                       K2Node_Event_Trait;                                // 0x8(0x68)(ConstParm, ContainsInstancedReference, HasGetValueTypeHash)
};

}
}


