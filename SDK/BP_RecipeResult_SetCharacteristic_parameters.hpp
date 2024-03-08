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

// 0x61 (0x61 - 0x0)
// Function BP_RecipeResult_SetCharacteristic.BP_RecipeResult_SetCharacteristic_C.CanProcessData
struct UBP_RecipeResult_SetCharacteristic_C_CanProcessData_Params
{
public:
	class AActor*                                InstigatingActor;                                  // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TargetActor;                                       // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FItemProcessingContext                Context;                                           // 0x10(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FInventoryEntry>               InputItems;                                        // 0x38(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UItemProcessingDataAsset*>      ProcessingData;                                    // 0x48(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EE9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6E5 (0x6E5 - 0x0)
// Function BP_RecipeResult_SetCharacteristic.BP_RecipeResult_SetCharacteristic_C.ProcessData
struct UBP_RecipeResult_SetCharacteristic_C_ProcessData_Params
{
public:
	class AActor*                                InstigatingActor;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TargetActor;                                       // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FItemProcessingContext                Context;                                           // 0x10(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FInventoryEntry>               InputItems;                                        // 0x38(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UItemProcessingDataAsset*>      ProcessingData;                                    // 0x48(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         bSuccess;                                          // 0x58(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EEF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UItemProcessingDataAsset*>      ReturnValue;                                       // 0x60(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	class UCrafting_Result_Items_DataAsset*      CurrentOutput;                                     // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInventoryEntry>               ReturnItems;                                       // 0x78(0x10)(Edit, BlueprintVisible)
	uint8                                        Pad_2EF0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CurrentItem;                                       // 0x90(0x2F0)(Edit, BlueprintVisible)
	class UObject*                               CharacteristicData;                                // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x390(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EF1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UItemProcessingDataAsset*>      K2Node_MakeArray_Array;                            // 0x398(0x10)(ReferenceParm, ContainsInstancedReference)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x3A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UItemProcessingDataAsset*>      K2Node_MakeArray_Array_1;                          // 0x3B0(0x10)(ReferenceParm, ContainsInstancedReference)
	class UBP_RecipeResult_SetCharacteristic_C*  CallFunc_GetDefaultObject_ReturnValue;             // 0x3C0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IItemProcessingObjectInterface> CallFunc_CanProcessData_self_CastInput;            // 0x3C8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanProcessData_ReturnValue;               // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EF3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCrafting_Result_Items_DataAsset*      CallFunc_SpawnObject_ReturnValue;                  // 0x3E0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x3E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EF4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_Array_Get_Item;                           // 0x3F0(0x2F0)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x6E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x6E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


