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
// Function BP_StructureTraitActivator_Shelter.BP_StructureTraitActivator_Shelter_C.CheckActiveByMinorCard
struct UBP_StructureTraitActivator_Shelter_C_CheckActiveByMinorCard_Params
{
public:
	TArray<struct FStructureTrait>               CallFunc_GetActiveRealmCardTraits_ReturnValue;     // 0x0(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_StructureTraitActivator_Shelter.BP_StructureTraitActivator_Shelter_C.OnSheltered
struct UBP_StructureTraitActivator_Shelter_C_OnSheltered_Params
{
public:
	bool                                         IsSheltered;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A (0x2A - 0x0)
// Function BP_StructureTraitActivator_Shelter.BP_StructureTraitActivator_Shelter_C.CheckSheltered
struct UBP_StructureTraitActivator_Shelter_C_CheckSheltered_Params
{
public:
	class UObject*                               CallFunc_GetOwningStructure_ReturnValue;           // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IShelterableEntityInterface> K2Node_DynamicCast_AsShelterable_Entity_Interface; // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A29A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UShelterComponent*                     CallFunc_GetShelterComponent_ReturnValue;          // 0x20(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSheltered_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function BP_StructureTraitActivator_Shelter.BP_StructureTraitActivator_Shelter_C.InitializeActivator
struct UBP_StructureTraitActivator_Shelter_C_InitializeActivator_Params
{
public:
	struct FStructureTrait                       Trait;                                             // 0x0(0x68)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0xA9 (0xA9 - 0x0)
// Function BP_StructureTraitActivator_Shelter.BP_StructureTraitActivator_Shelter_C.ExecuteUbergraph_BP_StructureTraitActivator_Shelter
struct UBP_StructureTraitActivator_Shelter_C_ExecuteUbergraph_BP_StructureTraitActivator_Shelter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A29B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureTrait                       K2Node_Event_Trait;                                // 0x8(0x68)(ConstParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UObject*                               CallFunc_GetOwningStructure_ReturnValue;           // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x78(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IShelterableEntityInterface> K2Node_DynamicCast_AsShelterable_Entity_Interface; // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A29C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UShelterComponent*                     CallFunc_GetShelterComponentForModify_ReturnValue; // 0xA0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


