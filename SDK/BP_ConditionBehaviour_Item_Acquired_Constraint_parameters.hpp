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

// 0x70 (0x70 - 0x0)
// Function BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C.GetAllInventoryEntries
struct UBP_ConditionBehaviour_Item_Acquired_Constraint_C_GetAllInventoryEntries_Params
{
public:
	TArray<struct FInventoryEntry>               AllInventoryEntries;                               // 0x0(0x10)(Parm, OutParm)
	TArray<struct FInventoryEntry>               InventoryEntries;                                  // 0x10(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A55D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TScriptInterface<class IItemContainer>> CallFunc_GetInventoryContainers_Containers;        // 0x30(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A55F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainer>       CallFunc_Array_Get_Item;                           // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A560[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               CallFunc_GetAllItems_Entries;                      // 0x60(0x10)(ReferenceParm)
};

// 0x58 (0x58 - 0x0)
// Function BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C.UnbindContainerEvents
struct UBP_ConditionBehaviour_Item_Acquired_Constraint_C_UnbindContainerEvents_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A566[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TScriptInterface<class IItemContainer>> CallFunc_GetInventoryContainers_Containers;        // 0x10(0x10)(ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IItemContainer>       CallFunc_Array_Get_Item;                           // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A567[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x48(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x55 (0x55 - 0x0)
// Function BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C.OnInventoryReadyBindContainerEvents
struct UBP_ConditionBehaviour_Item_Acquired_Constraint_C_OnInventoryReadyBindContainerEvents_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A568[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<TScriptInterface<class IItemContainer>> CallFunc_GetInventoryContainers_Containers;        // 0x30(0x10)(ReferenceParm)
	TScriptInterface<class IItemContainer>       CallFunc_Array_Get_Item;                           // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x334 (0x334 - 0x0)
// Function BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C.OnInventoryReadyCheckCompletion
struct UBP_ConditionBehaviour_Item_Acquired_Constraint_C_OnInventoryReadyCheckCompletion_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A569[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NewCount;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A56A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               CallFunc_GetAllInventoryEntries_AllInventoryEntries; // 0x18(0x10)(ReferenceParm)
	uint8                                        Pad_A56C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_Array_Get_Item;                           // 0x30(0x2F0)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x324(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x325(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A56D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x328(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGetResult                        CallFunc_IsItemRelevantForConstraint_OutBranch;    // 0x32C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x32D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A56F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetItemConstraintQuantityRequired_ReturnValue; // 0x330(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C.GetInventoryContainers
struct UBP_ConditionBehaviour_Item_Acquired_Constraint_C_GetInventoryContainers_Params
{
public:
	TArray<TScriptInterface<class IItemContainer>> Containers;                                        // 0x0(0x10)(Parm, OutParm)
	TArray<TScriptInterface<class IItemContainer>> ContainersToReturn;                                // 0x10(0x10)(Edit, BlueprintVisible)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A570[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainer>       CallFunc_GetRealmCardDeck_Container;               // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetRealmCardDeck_ReturnValue;             // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A571[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainer>       CallFunc_GetEssencePouch_Container;                // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetEssencePouch_ReturnValue;              // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A572[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainer>       CallFunc_GetBackpack_Container;                    // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetBackpack_ReturnValue;                  // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A573[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31C (0x31C - 0x0)
// Function BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C.OnItemRemoved
struct UBP_ConditionBehaviour_Item_Acquired_Constraint_C_OnItemRemoved_Params
{
public:
	TScriptInterface<class IItemContainer>       Source;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FInventoryEntry                       Item;                                              // 0x10(0x2F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        Quantity;                                          // 0x300(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x304(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetItemConstraintQuantityRequired_ReturnValue; // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGetResult                        CallFunc_IsItemRelevantForConstraint_OutBranch;    // 0x30C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A574[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Max_ReturnValue;                          // 0x310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x314(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A575[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x318(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30E (0x30E - 0x0)
// Function BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C.OnItemAdded
struct UBP_ConditionBehaviour_Item_Acquired_Constraint_C_OnItemAdded_Params
{
public:
	TScriptInterface<class IItemContainer>       Source;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FInventoryEntry                       Item;                                              // 0x10(0x2F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        Quantity;                                          // 0x300(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetItemConstraintQuantityRequired_ReturnValue; // 0x304(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGetResult                        CallFunc_IsItemRelevantForConstraint_OutBranch;    // 0x30C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x30D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x178 (0x178 - 0x0)
// Function BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C.GetDebugText
struct UBP_ConditionBehaviour_Item_Acquired_Constraint_C_GetDebugText_Params
{
public:
	class FText                                  Description;                                       // 0x0(0x18)(Parm, OutParm)
	int32                                        CallFunc_GetItemConstraintQuantityRequired_ReturnValue; // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A576[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemConstraintPresentationData       CallFunc_GetItemConstraintUIData_OutPresentationData; // 0x20(0x88)(None)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xB0(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x100(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x150(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x160(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C.InitializeFromPersistence
struct UBP_ConditionBehaviour_Item_Acquired_Constraint_C_InitializeFromPersistence_Params
{
public:
	struct FConditionPersistentData              UpdatedProgressData;                               // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0xD0 (0xD0 - 0x0)
// Function BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C.ExecuteUbergraph_BP_ConditionBehaviour_Item_Acquired_Constraint
struct UBP_ConditionBehaviour_Item_Acquired_Constraint_C_ExecuteUbergraph_BP_ConditionBehaviour_Item_Acquired_Constraint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FConditionPersistentData              K2Node_Event_UpdatedProgressData;                  // 0x4(0x8)(ConstParm, NoDestructor)
	uint8                                        Pad_A577[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerState_C*                     CallFunc_GetConditionPlayerState_PlayerState;      // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A578[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryComponentBase*               CallFunc_GetComponentByClass_ReturnValue;          // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerState_C*                     CallFunc_GetConditionPlayerState_PlayerState_1;    // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerState_C*                     CallFunc_GetConditionPlayerState_PlayerState_2;    // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  K2Node_DynamicCast_AsNWXPlayer_Controller;         // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A579[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBasicAwaiter*                         CallFunc_GetInventoryAwaiter_ReturnValue;          // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  K2Node_DynamicCast_AsNWXPlayer_Controller_1;       // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A57A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBasicAwaiter*                         CallFunc_GetInventoryAwaiter_ReturnValue_1;        // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x80(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x90(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IAwaitable>           CallFunc_AwaitBP_Awaitable_CastInput;              // 0xA0(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FDelegateHandleBPWrapper              CallFunc_AwaitBP_Handle;                           // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IAwaitable>           CallFunc_AwaitBP_Awaitable_CastInput_1;            // 0xB8(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FDelegateHandleBPWrapper              CallFunc_AwaitBP_Handle_1;                         // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


