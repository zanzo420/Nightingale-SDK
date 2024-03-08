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

// 0x8A (0x8A - 0x0)
// Function BP_StructureTraitActivator_Shelter.BP_StructureTraitActivator_Shelter_C.OnOwnerTraitsChanged
struct UBP_StructureTraitActivator_Shelter_C_OnOwnerTraitsChanged_Params
{
public:
	struct FStructureTraitChangedContext         TraitChangedContext;                               // 0x0(0x58)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FStructureTrait>               CallFunc_K2_SplitEffectedTraitsMap_OutAddedTraits; // 0x58(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<struct FStructureTrait>               CallFunc_K2_SplitEffectedTraitsMap_OutRemovedTraits; // 0x68(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<struct FStructureTrait>               CallFunc_K2_SplitEffectedTraitsMap_OutModifiedTraits; // 0x78(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x73 (0x73 - 0x0)
// Function BP_StructureTraitActivator_Shelter.BP_StructureTraitActivator_Shelter_C.BindEvents
struct UBP_StructureTraitActivator_Shelter_C_BindEvents_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_GetOwningStructure_ReturnValue;           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface;    // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_173E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetOwningStructure_ReturnValue_1;         // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStructureTraitComponent*              CallFunc_GetStructureTraitComponent_ReturnValue;   // 0x48(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IShelterableEntityInterface> K2Node_DynamicCast_AsShelterable_Entity_Interface; // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1740[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UShelterComponent*                     CallFunc_GetShelterComponentForModify_ReturnValue; // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A (0x2A - 0x0)
// Function BP_StructureTraitActivator_Shelter.BP_StructureTraitActivator_Shelter_C.CheckOverriddenByArtisanCard
struct UBP_StructureTraitActivator_Shelter_C_CheckOverriddenByArtisanCard_Params
{
public:
	class UObject*                               CallFunc_GetOwningStructure_ReturnValue;           // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface;    // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1742[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructureTraitComponent*              CallFunc_GetStructureTraitComponent_ReturnValue;   // 0x20(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasActiveTrait_ReturnValue;               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
	uint8                                        Pad_1744[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
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

// 0x70 (0x70 - 0x0)
// Function BP_StructureTraitActivator_Shelter.BP_StructureTraitActivator_Shelter_C.ExecuteUbergraph_BP_StructureTraitActivator_Shelter
struct UBP_StructureTraitActivator_Shelter_C_ExecuteUbergraph_BP_StructureTraitActivator_Shelter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1746[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureTrait                       K2Node_Event_Trait;                                // 0x8(0x68)(ConstParm, ContainsInstancedReference, HasGetValueTypeHash)
};

}
}


