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

// 0x1 (0x1 - 0x0)
// Function BP_StructureTraitActivator_OnSheltered.BP_StructureTraitActivator_OnSheltered_C.OnSheltered
struct UBP_StructureTraitActivator_OnSheltered_C_OnSheltered_Params
{
public:
	bool                                         IsSheltered;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function BP_StructureTraitActivator_OnSheltered.BP_StructureTraitActivator_OnSheltered_C.InitializeActivator
struct UBP_StructureTraitActivator_OnSheltered_C_InitializeActivator_Params
{
public:
	struct FStructureTrait                       Trait;                                             // 0x0(0x68)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function BP_StructureTraitActivator_OnSheltered.BP_StructureTraitActivator_OnSheltered_C.ExecuteUbergraph_BP_StructureTraitActivator_OnSheltered
struct UBP_StructureTraitActivator_OnSheltered_C_ExecuteUbergraph_BP_StructureTraitActivator_OnSheltered_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureTrait                       K2Node_Event_Trait;                                // 0x8(0x68)(ConstParm, ContainsInstancedReference, HasGetValueTypeHash)
};

}
}


