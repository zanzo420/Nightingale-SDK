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
// Function BP_StructureTraitActivator_OnLandscape.BP_StructureTraitActivator_OnLandscape_C.OnOwnerTraitsChanged
struct UBP_StructureTraitActivator_OnLandscape_C_OnOwnerTraitsChanged_Params
{
public:
	struct FStructureTraitChangedContext         TraitChangedContext;                               // 0x0(0x58)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FStructureTrait>               CallFunc_K2_SplitEffectedTraitsMap_OutAddedTraits; // 0x58(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<struct FStructureTrait>               CallFunc_K2_SplitEffectedTraitsMap_OutRemovedTraits; // 0x68(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<struct FStructureTrait>               CallFunc_K2_SplitEffectedTraitsMap_OutModifiedTraits; // 0x78(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x72 (0x72 - 0x0)
// Function BP_StructureTraitActivator_OnLandscape.BP_StructureTraitActivator_OnLandscape_C.BindEvents
struct UBP_StructureTraitActivator_OnLandscape_C_BindEvents_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_GetOwningStructure_ReturnValue;           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_GetSupportObjectFromStructure_ReturnValue; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_GetOwningStructure_ReturnValue_1;         // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISupportInterface>    K2Node_DynamicCast_AsSupport_Interface;            // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A595[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface;    // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A596[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructureTraitComponent*              CallFunc_GetStructureTraitComponent_ReturnValue;   // 0x68(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A (0x2A - 0x0)
// Function BP_StructureTraitActivator_OnLandscape.BP_StructureTraitActivator_OnLandscape_C.CheckOverriddenByArtisanCard
struct UBP_StructureTraitActivator_OnLandscape_C_CheckOverriddenByArtisanCard_Params
{
public:
	class UObject*                               CallFunc_GetOwningStructure_ReturnValue;           // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IStructureTraitInterface> K2Node_DynamicCast_AsStructure_Trait_Interface;    // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A599[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructureTraitComponent*              CallFunc_GetStructureTraitComponent_ReturnValue;   // 0x20(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasActiveTrait_ReturnValue;               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function BP_StructureTraitActivator_OnLandscape.BP_StructureTraitActivator_OnLandscape_C.CheckSupport
struct UBP_StructureTraitActivator_OnLandscape_C_CheckSupport_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_GetOwningStructure_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A59A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       CallFunc_GetAllSupportingObjectsOfType_OutSupportingObjects; // 0x18(0x10)(ReferenceParm)
	class UObject*                               CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHitObjectLandscape_ReturnValue;         // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue;                // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A59B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function BP_StructureTraitActivator_OnLandscape.BP_StructureTraitActivator_OnLandscape_C.InitializeActivator
struct UBP_StructureTraitActivator_OnLandscape_C_InitializeActivator_Params
{
public:
	struct FStructureTrait                       Trait;                                             // 0x0(0x68)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x79 (0x79 - 0x0)
// Function BP_StructureTraitActivator_OnLandscape.BP_StructureTraitActivator_OnLandscape_C.ExecuteUbergraph_BP_StructureTraitActivator_OnLandscape
struct UBP_StructureTraitActivator_OnLandscape_C_ExecuteUbergraph_BP_StructureTraitActivator_OnLandscape_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A59E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureTrait                       K2Node_Event_Trait;                                // 0x8(0x68)(ConstParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UObject*                               CallFunc_GetOwningStructure_ReturnValue;           // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


