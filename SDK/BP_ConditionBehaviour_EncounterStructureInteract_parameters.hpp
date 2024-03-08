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

// 0x68 (0x68 - 0x0)
// Function BP_ConditionBehaviour_EncounterStructureInteract.BP_ConditionBehaviour_EncounterStructureInteract_C.BindInteract
struct UBP_ConditionBehaviour_EncounterStructureInteract_C_BindInteract_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A886[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXStructurePartProxyActor*           CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A887[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXStructure*                         CallFunc_GetStructure_Structure;                   // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A888[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Structure_EncounterTrigger_C*      K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x3C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A889[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x50(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x58(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_ConditionBehaviour_EncounterStructureInteract.BP_ConditionBehaviour_EncounterStructureInteract_C.OnInteract
struct UBP_ConditionBehaviour_EncounterStructureInteract_C_OnInteract_Params
{
public:
	class ABP_Structure_EncounterTrigger_C*      Triggering_Structure;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FConditionPersistentData              Temp_struct_Variable;                              // 0x8(0x8)(ConstParm, NoDestructor)
	struct FConditionPersistentData              Temp_struct_Variable_1;                            // 0x10(0x8)(ConstParm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_ConditionBehaviour_EncounterStructureInteract.BP_ConditionBehaviour_EncounterStructureInteract_C.OnResetHandler
struct UBP_ConditionBehaviour_EncounterStructureInteract_C_OnResetHandler_Params
{
public:
	struct FConditionPersistentData              Temp_struct_Variable;                              // 0x0(0x8)(ConstParm, NoDestructor)
};

// 0x90 (0x90 - 0x0)
// Function BP_ConditionBehaviour_EncounterStructureInteract.BP_ConditionBehaviour_EncounterStructureInteract_C.Initialize
struct UBP_ConditionBehaviour_EncounterStructureInteract_C_Initialize_Params
{
public:
	class UObject*                               ContextObject;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesImplementInterface_ReturnValue;       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A88A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class IInterface>                Temp_class_Variable;                               // 0x18(0x8)(ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                               CallFunc_FindFirstImplementor_ReturnValue;         // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface;   // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A88B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEncounterMarkupDataAsset*             CallFunc_GetMarkupDataAsset_ReturnValue;           // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IEncounterMarkupDataInterface_StructureProvider> K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider; // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A88C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ANWXStructurePartProxyActor*>   CallFunc_GetStructures_ReturnValue;                // 0x60(0x10)(ReferenceParm)
	TScriptInterface<class IEncounterConditionContextInterface> K2Node_DynamicCast_AsEncounter_Condition_Context_Interface; // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A88D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetTargetActor_ReturnValue;               // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ConditionBehaviour_EncounterStructureInteract.BP_ConditionBehaviour_EncounterStructureInteract_C.SetContextObject
struct UBP_ConditionBehaviour_EncounterStructureInteract_C_SetContextObject_Params
{
public:
	class UObject*                               ContextObject;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_ConditionBehaviour_EncounterStructureInteract.BP_ConditionBehaviour_EncounterStructureInteract_C.ExecuteUbergraph_BP_ConditionBehaviour_EncounterStructureInteract
struct UBP_ConditionBehaviour_EncounterStructureInteract_C_ExecuteUbergraph_BP_ConditionBehaviour_EncounterStructureInteract_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A88E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Event_ContextObject;                        // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


