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

// 0x62 (0x62 - 0x0)
// Function BP_RecipeResult_AddSpell.BP_RecipeResult_AddSpell_C.CanProcessData
struct UBP_RecipeResult_AddSpell_C_CanProcessData_Params
{
public:
	class AActor*                                InstigatingActor;                                  // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TargetActor;                                       // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FItemProcessingContext                Context;                                           // 0x10(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FInventoryEntry>               InputItems;                                        // 0x38(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UItemProcessingDataAsset*>      ProcessingData;                                    // 0x48(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_613E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C9 (0x3C9 - 0x0)
// Function BP_RecipeResult_AddSpell.BP_RecipeResult_AddSpell_C.ProcessData
struct UBP_RecipeResult_AddSpell_C_ProcessData_Params
{
public:
	class AActor*                                InstigatingActor;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TargetActor;                                       // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FItemProcessingContext                Context;                                           // 0x10(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FInventoryEntry>               InputItems;                                        // 0x38(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UItemProcessingDataAsset*>      ProcessingData;                                    // 0x48(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         bSuccess;                                          // 0x58(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_613F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UItemProcessingDataAsset*>      ReturnValue;                                       // 0x60(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	struct FInventoryEntry                       ItemToGrant;                                       // 0x70(0x2F0)(Edit, BlueprintVisible)
	TArray<class UItemProcessingDataAsset*>      ResultsArray;                                      // 0x360(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct FS_Crafting_Recipe_Result_Loaded> LoadedCraftingOutputs;                             // 0x370(0x10)(Edit, BlueprintVisible)
	class UCrafting_Result_Items_DataAsset*      CraftingOutputData;                                // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInventoryEntry>               ItemsToGrant;                                      // 0x388(0x10)(Edit, BlueprintVisible)
	int32                                        Quantity;                                          // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6140[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               K2Node_MakeArray_Array;                            // 0x3A0(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6141[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UCrafting_Result_Items_DataAsset*> CallFunc_CreateGrantResults_ReturnValue;           // 0x3B8(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


