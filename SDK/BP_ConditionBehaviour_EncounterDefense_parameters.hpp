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

// 0x39 (0x39 - 0x0)
// Function BP_ConditionBehaviour_EncounterDefense.BP_ConditionBehaviour_EncounterDefense_C.CheckCompletion
struct UBP_ConditionBehaviour_EncounterDefense_C_CheckCompletion_Params
{
public:
	class UPortalControllerComponent*            PortalController;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        Targets;                                           // 0x8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FConditionPersistentData              Temp_struct_Variable;                              // 0x18(0x8)(ConstParm, NoDestructor)
	struct FConditionPersistentData              Temp_struct_Variable_1;                            // 0x20(0x8)(ConstParm, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function BP_ConditionBehaviour_EncounterDefense.BP_ConditionBehaviour_EncounterDefense_C.Initialize
struct UBP_ConditionBehaviour_EncounterDefense_C_Initialize_Params
{
public:
	class UObject*                               ContextObject;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Target_POI;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IEncounterConditionContextInterface> K2Node_DynamicCast_AsEncounter_Condition_Context_Interface; // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59F2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetTargetActor_ReturnValue;               // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Temp_object_Variable;                              // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class IInterface>                Temp_class_Variable;                               // 0x38(0x8)(ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                               CallFunc_FindFirstImplementor_ReturnValue;         // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface;   // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59F4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEncounterMarkupDataAsset*             CallFunc_GetMarkupDataAsset_ReturnValue;           // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEncounterMarkupDataAsset_Defense*     K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense; // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59F6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_StructurePartProxy_C*              K2Node_DynamicCast_AsBP_Structure_Part_Proxy;      // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXStructure*                         CallFunc_GetStructure_Structure;                   // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ConditionBehaviour_EncounterDefense.BP_ConditionBehaviour_EncounterDefense_C.SetContextObject
struct UBP_ConditionBehaviour_EncounterDefense_C_SetContextObject_Params
{
public:
	class UObject*                               ContextObject;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_ConditionBehaviour_EncounterDefense.BP_ConditionBehaviour_EncounterDefense_C.ExecuteUbergraph_BP_ConditionBehaviour_EncounterDefense
struct UBP_ConditionBehaviour_EncounterDefense_C_ExecuteUbergraph_BP_ConditionBehaviour_EncounterDefense_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A05[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Event_ContextObject;                        // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


