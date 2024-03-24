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

// 0x531 (0x531 - 0x0)
// Function BP_StructureBuilder.BP_StructureBuilder_C.ProcessPartProxyActor
struct ABP_StructureBuilder_C_ProcessPartProxyActor_Params
{
public:
	class ABP_StructurePartProxy_C*              PartProxy;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UNWXStructurePartProxyComponent*> ConstructedStructureProxyComponents;               // 0x8(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<class UNWXStructurePartProxyComponent*> TempStructureProxyComponents;                      // 0x18(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<class UNWXStructurePartProxyComponent*> CompositeStructureProxyComponents;                 // 0x28(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UNWXStructurePartProxyComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x40(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXStructurePartProxyComponent*       CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStructureDataAsset*                   K2Node_DynamicCast_AsStructure_Data_Asset;         // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UStructureDataAsset>    CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x88(0x28)(UObjectWrapper, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5B4[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureAssetReference              CallFunc_MakeStructureAssetReferenceFromAsset_ReturnValue; // 0xC0(0x80)(HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetStructureDataFromStructureAssetReference_IsValid; // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5B5[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureData                        CallFunc_GetStructureDataFromStructureAssetReference_OutData; // 0x150(0x3E0)(ContainsInstancedReference)
	bool                                         CallFunc_IsCompositePiece_ReturnValue;             // 0x530(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xFB4 (0xFB4 - 0x0)
// Function BP_StructureBuilder.BP_StructureBuilder_C.BuildStructureFromProxyComponent
struct ABP_StructureBuilder_C_BuildStructureFromProxyComponent_Params
{
public:
	TArray<class UNWXStructurePartProxyComponent*> StructureProxyComponents;                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class ANWXStructurePartProxyActor*           StructureProxy;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EStructureHealthMode              StructureHealthMode;                               // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStructureState                   DesiredStructureState;                             // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5CA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Structure_Constructed_C*           ConstructedStructure;                              // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5CB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureAssetReference              LStructureRef;                                     // 0x30(0x80)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FCompositePieceGameplay>       LPieceDatas;                                       // 0xB0(0x10)(Edit, BlueprintVisible)
	struct FStructureData                        StructureData;                                     // 0xC0(0x3E0)(Edit, BlueprintVisible, ContainsInstancedReference)
	struct FTransform                            StructurePartTransform;                            // 0x4A0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStructurePartInitialData             InitialPartData;                                   // 0x500(0x18)(Edit, BlueprintVisible)
	uint8                                        Pad_A5CC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            StructureTransform;                                // 0x520(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Structure_Constructed_C*>   ConstructedStructures;                             // 0x580(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class AStructureComposite*                   CompositeStructure;                                // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x598(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x59C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStructureState                   CallFunc_GetStructureSpawnState_ReturnValue;       // 0x5A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x5A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5CD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x5A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x5A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x5AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNWXStructurePartProxyComponent*       CallFunc_Array_Get_Item;                           // 0x5B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x5B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children;           // 0x5C0(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x5D0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x630(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x634(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x638(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStructureDataAsset*                   K2Node_DynamicCast_AsStructure_Data_Asset;         // 0x640(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x648(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UStructureDataAsset>    CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x650(0x28)(UObjectWrapper, HasGetValueTypeHash)
	TScriptInterface<class IBPI_Structure_Reference_C> K2Node_DynamicCast_AsBPI_Structure_Reference;      // 0x678(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x688(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureAssetReference              CallFunc_MakeStructureAssetReferenceFromAsset_ReturnValue; // 0x690(0x80)(HasGetValueTypeHash)
	TScriptInterface<class IBPI_Structure_Reference_C> K2Node_DynamicCast_AsBPI_Structure_Reference_1;    // 0x710(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x720(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5D3[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x730(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x790(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x794(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AStreamingLevelProxyActor*             CallFunc_GetLevelProxy_ReturnValue;                // 0x798(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDebugStringFromStructureAssetReference_ReturnValue; // 0x7A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x7B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_BreakSoftObjectPath_PathString;           // 0x7C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x7D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetStructureDataFromStructureAssetReference_IsValid; // 0x7E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5D7[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureData                        CallFunc_GetStructureDataFromStructureAssetReference_OutData; // 0x7F0(0x3E0)(ContainsInstancedReference)
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0xBD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FStructureSpawnContext                K2Node_MakeStruct_StructureSpawnContext;           // 0xBE0(0x70)(NoDestructor)
	class AStructureComposite*                   CallFunc_SpawnCompositeStructure_ReturnValue;      // 0xC50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xC58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0xC5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xC5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCompositePiece_ReturnValue;             // 0xC5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5DC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureSpawnContext                K2Node_MakeStruct_StructureSpawnContext_1;         // 0xC60(0x70)(NoDestructor)
	bool                                         CallFunc_IsStructureConstructed_ReturnValue;       // 0xCD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_SpawnStructure_ReturnValue;               // 0xCD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Structure_Constructed_C*           K2Node_DynamicCast_AsBP_Structure_Constructed;     // 0xCE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xCE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Structure_Constructed_C*           CallFunc_Array_Get_Item_1;                         // 0xCF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0xCF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0xCFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xCFD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xCFE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5E1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructureSupportObject*               CallFunc_GetSinglePieceSupportObject_ReturnValue;  // 0xD00(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISupportInterface>    K2Node_DynamicCast_AsSupport_Interface;            // 0xD08(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0xD18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xD19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5E2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xD1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCompositePieceGameplay               CallFunc_CreatePieceData_OutPieceData;             // 0xD20(0x140)(None)
	bool                                         CallFunc_CreatePieceData_ReturnValue;              // 0xE60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5E3[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompositePieceGameplay               CallFunc_SetInitialPartData_StructOut;             // 0xE70(0x140)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0xFB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function BP_StructureBuilder.BP_StructureBuilder_C.DestroyStructures
struct ABP_StructureBuilder_C_DestroyStructures_Params
{
public:
	class ANWXStructure*                         LocalStructure;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_GetLevelActors_OutLevelActors;            // 0x18(0x10)(ReferenceParm)
	bool                                         CallFunc_GetLevelActors_ReturnValue;               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXStructurePartProxyActor*           K2Node_DynamicCast_AsNWXStructure_Part_Proxy_Actor; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXStructure*                         CallFunc_GetStructure_Structure;                   // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function BP_StructureBuilder.BP_StructureBuilder_C.ShouldBeResetUponDIrtyRealmReset
struct ABP_StructureBuilder_C_ShouldBeResetUponDIrtyRealmReset_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5FC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_GetLevelActors_OutLevelActors;            // 0x18(0x10)(ReferenceParm)
	bool                                         CallFunc_GetLevelActors_ReturnValue;               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEncounterConfig*                      K2Node_DynamicCast_AsEncounter_Config;             // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8A0 (0x8A0 - 0x0)
// Function BP_StructureBuilder.BP_StructureBuilder_C.GetStructureDataFromProxy
struct ABP_StructureBuilder_C_GetStructureDataFromProxy_Params
{
public:
	class UNWXStructurePartProxyComponent*       ArrayElement;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsValid;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A60D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureData                        OutData;                                           // 0x10(0x3E0)(Parm, OutParm, ContainsInstancedReference)
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x3F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStructureDataAsset*                   K2Node_DynamicCast_AsStructure_Data_Asset;         // 0x3F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A60E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UStructureDataAsset>    CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x408(0x28)(UObjectWrapper, HasGetValueTypeHash)
	struct FStructureAssetReference              CallFunc_MakeStructureAssetReferenceFromAsset_ReturnValue; // 0x430(0x80)(HasGetValueTypeHash)
	bool                                         CallFunc_GetStructureDataFromStructureAssetReference_IsValid; // 0x4B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A610[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureData                        CallFunc_GetStructureDataFromStructureAssetReference_OutData; // 0x4C0(0x3E0)(ContainsInstancedReference)
};

// 0x443 (0x443 - 0x0)
// Function BP_StructureBuilder.BP_StructureBuilder_C.ResolveConstructedStructure
struct ABP_StructureBuilder_C_ResolveConstructedStructure_Params
{
public:
	class ANWXStructure*                         Structure;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_StructurePartProxy_C*              Proxy;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         SuccesfullyResolved;                               // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A615[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UNWXStructurePartProxyComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x20(0x10)(ReferenceParm, ContainsInstancedReference)
	class UNWXStructurePartProxyComponent*       CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetStructureDataFromProxy_IsValid;        // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A616[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureData                        CallFunc_GetStructureDataFromProxy_OutData;        // 0x50(0x3E0)(ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x430(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A617[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructureTypeData_Constructed*        CallFunc_TryGetConstructedStructureData_OutData;   // 0x438(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryGetConstructedStructureData_ReturnValue; // 0x440(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x441(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x442(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x439 (0x439 - 0x0)
// Function BP_StructureBuilder.BP_StructureBuilder_C.ResolveCompositeStructure
struct ABP_StructureBuilder_C_ResolveCompositeStructure_Params
{
public:
	class ANWXStructure*                         Structure;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_StructurePartProxy_C*              Proxy;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         SuccesfullyResolved;                               // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A620[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UNWXStructurePartProxyComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x20(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A621[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXStructurePartProxyComponent*       CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetStructureDataFromProxy_IsValid;        // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A622[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureData                        CallFunc_GetStructureDataFromProxy_OutData;        // 0x50(0x3E0)(ContainsInstancedReference)
	class UStructureTypeData_Composite*          CallFunc_TryGetCompositePieceStructureData_OutData; // 0x430(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryGetCompositePieceStructureData_ReturnValue; // 0x438(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x101 (0x101 - 0x0)
// Function BP_StructureBuilder.BP_StructureBuilder_C.ResolveStructureWithProxy
struct ABP_StructureBuilder_C_ResolveStructureWithProxy_Params
{
public:
	class ANWXStructure*                         Structure;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_StructurePartProxy_C*              Proxy;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         SuccessfullyResolved;                              // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A626[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Structure_Composite_C*             K2Node_DynamicCast_AsBP_Structure_Composite;       // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ResolveCompositeStructure_SuccesfullyResolved; // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A629[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Structure_Constructed_C*           K2Node_DynamicCast_AsBP_Structure_Constructed;     // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ResolveConstructedStructure_SuccesfullyResolved; // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A62A[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x40(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetTransform_ReturnValue_1;               // 0xA0(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_TransformTransform_ReturnValue; // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x609 (0x609 - 0x0)
// Function BP_StructureBuilder.BP_StructureBuilder_C.ConnectStructures
struct ABP_StructureBuilder_C_ConnectStructures_Params
{
public:
	class ANWXStructure*                         LocalStructure;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ABP_StructurePartProxy_C*              LocalProxy;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FStructurePartInitialData             InitialPartData;                                   // 0x10(0x18)(Edit, BlueprintVisible)
	TArray<class ABP_Structure_Constructed_C*>   ConstructedStructures;                             // 0x28(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	uint8                                        Pad_A634[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            StructurePartTransform;                            // 0x40(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            StructureTransform;                                // 0xA0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Structure_Composite_C*             CompositeStructure;                                // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FDataTableRowHandle                   StructureHandle;                                   // 0x108(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A637[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureData                        StructureData;                                     // 0x120(0x3E0)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x500(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x504(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x508(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ResolveStructureWithProxy_SuccessfullyResolved; // 0x50C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A638[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x510(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        CallFunc_GetLevelActors_OutLevelActors;            // 0x570(0x10)(ReferenceParm)
	bool                                         CallFunc_GetLevelActors_ReturnValue;               // 0x580(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A639[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x588(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x5A0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x5B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x5D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetDynamicActorAtLocation_Actor;          // 0x5D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDynamicActorAtLocation_ReturnValue;    // 0x5E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A63C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_StructurePartProxy_C*              K2Node_DynamicCast_AsBP_Structure_Part_Proxy;      // 0x5E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x5F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A63D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXStructure*                         K2Node_DynamicCast_AsNWXStructure;                 // 0x5F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x600(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A63E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x604(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x608(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xFC4 (0xFC4 - 0x0)
// Function BP_StructureBuilder.BP_StructureBuilder_C.BuildStructureFromProxy
struct ABP_StructureBuilder_C_BuildStructureFromProxy_Params
{
public:
	class ANWXStructurePartProxyActor*           StructureProxy;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EStructureState                   DesiredStructureState;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A650[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Structure_Constructed_C*           ConstructedStructure;                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A652[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureAssetReference              LStructureRef;                                     // 0x20(0x80)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FCompositePieceGameplay>       LPieceDatas;                                       // 0xA0(0x10)(Edit, BlueprintVisible)
	struct FStructureData                        StructureData;                                     // 0xB0(0x3E0)(Edit, BlueprintVisible, ContainsInstancedReference)
	struct FTransform                            StructurePartTransform;                            // 0x490(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStructurePartInitialData             InitialPartData;                                   // 0x4F0(0x18)(Edit, BlueprintVisible)
	uint8                                        Pad_A655[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            StructureTransform;                                // 0x510(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Structure_Constructed_C*>   ConstructedStructures;                             // 0x570(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class AStructureComposite*                   CompositeStructure;                                // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x588(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x58C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x590(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x594(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x598(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A657[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_Structure_Reference_C> K2Node_DynamicCast_AsBPI_Structure_Reference;      // 0x5A0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x5B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A658[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_Structure_Reference_C> K2Node_DynamicCast_AsBPI_Structure_Reference_1;    // 0x5B8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x5C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A659[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UNWXStructurePartProxyComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x5D0(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x5E0(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNWXStructurePartProxyComponent*       CallFunc_Array_Get_Item;                           // 0x640(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children;           // 0x648(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x658(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A65A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x660(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x6C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A65B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x6C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x6C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x6D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A65D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructureDataAsset*                   K2Node_DynamicCast_AsStructure_Data_Asset;         // 0x6D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x6E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A65E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UStructureDataAsset>    CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x6E8(0x28)(UObjectWrapper, HasGetValueTypeHash)
	struct FStructureAssetReference              CallFunc_MakeStructureAssetReferenceFromAsset_ReturnValue; // 0x710(0x80)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x790(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A65F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AStreamingLevelProxyActor*             CallFunc_GetLevelProxy_ReturnValue;                // 0x798(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDebugStringFromStructureAssetReference_ReturnValue; // 0x7A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x7B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_BreakSoftObjectPath_PathString;           // 0x7C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x7D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x7E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetStructureDataFromStructureAssetReference_IsValid; // 0x7F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A660[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureData                        CallFunc_GetStructureDataFromStructureAssetReference_OutData; // 0x800(0x3E0)(ContainsInstancedReference)
	struct FStructureSpawnContext                K2Node_MakeStruct_StructureSpawnContext;           // 0xBE0(0x70)(NoDestructor)
	class AStructureComposite*                   CallFunc_SpawnCompositeStructure_ReturnValue;      // 0xC50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xC58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0xC5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xC5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A661[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xC60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xC64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0xC68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A662[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureSpawnContext                K2Node_MakeStruct_StructureSpawnContext_1;         // 0xC70(0x70)(NoDestructor)
	bool                                         CallFunc_IsStructureConstructed_ReturnValue;       // 0xCE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A663[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_SpawnStructure_ReturnValue;               // 0xCE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Structure_Constructed_C*           K2Node_DynamicCast_AsBP_Structure_Constructed;     // 0xCF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xCF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCompositePiece_ReturnValue;             // 0xCF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A664[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Structure_Constructed_C*           CallFunc_Array_Get_Item_1;                         // 0xD00(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0xD08(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0xD0C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xD0D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xD0E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A666[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructureSupportObject*               CallFunc_GetSinglePieceSupportObject_ReturnValue;  // 0xD10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISupportInterface>    K2Node_DynamicCast_AsSupport_Interface;            // 0xD18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0xD28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0xD29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A667[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xD2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCompositePieceGameplay               CallFunc_CreatePieceData_OutPieceData;             // 0xD30(0x140)(None)
	bool                                         CallFunc_CreatePieceData_ReturnValue;              // 0xE70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A668[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompositePieceGameplay               CallFunc_SetInitialPartData_StructOut;             // 0xE80(0x140)(None)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0xFC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x23C (0x23C - 0x0)
// Function BP_StructureBuilder.BP_StructureBuilder_C.SetInitialPartDataConstructed
struct ABP_StructureBuilder_C_SetInitialPartDataConstructed_Params
{
public:
	class ABP_Structure_Constructed_C*           ConstructedStructure;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FStructurePartInitialData             InitialPartData;                                   // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FInventoryEntry>               RewardedInventoryEntries;                          // 0x20(0x10)(Edit, BlueprintVisible)
	struct FTagValueContainer                    Temp_struct_Variable;                              // 0x30(0x10)(ConstParm)
	struct FHitResult                            Temp_struct_Variable_1;                            // 0x40(0xE8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A675[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 Temp_struct_Variable_2;                            // 0x130(0x20)(ConstParm)
	bool                                         Temp_bool_Variable;                                // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A676[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayEffectCue>            Temp_struct_Variable_3;                            // 0x158(0x10)(ConstParm, ReferenceParm)
	class UItemReward*                           CallFunc_Array_Get_Item;                           // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GenerateItemRewardsFromRewardData_bOutAwardItem; // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A677[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               CallFunc_GenerateItemRewardsFromRewardData_ReturnValue; // 0x178(0x10)(ReferenceParm)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A679[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IContainerRewardsInterface> K2Node_DynamicCast_AsContainer_Rewards_Interface;  // 0x190(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A67B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IStructureHealthInterface> CallFunc_GetMaxHealth_self_CastInput;              // 0x1A8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMaxHealth_ReturnValue;                 // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A67D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Select_Default;                             // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A67F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A680[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IDamageEventInterface> CallFunc_DamageActor_self_CastInput;               // 0x1E8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTagValueContainer                    CallFunc_DamageActor_AggregatedDamageTags;         // 0x1F8(0x10)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A681[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Option_1_ImplicitCast;               // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Option_0_ImplicitCast;               // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_Max_ImplicitCast;                  // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_DamageActor_BaseDamage_ImplicitCast;      // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2DC (0x2DC - 0x0)
// Function BP_StructureBuilder.BP_StructureBuilder_C.SetInitialPartData
struct ABP_StructureBuilder_C_SetInitialPartData_Params
{
public:
	struct FCompositePieceGameplay               StructRef;                                         // 0x0(0x140)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FStructurePartInitialData             InitialPartData;                                   // 0x140(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	uint8                                        Pad_A689[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompositePieceGameplay               StructOut;                                         // 0x160(0x140)(Parm, OutParm)
	bool                                         Temp_bool_Variable;                                // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x2A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A68A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Select_Default;                             // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Option_0_ImplicitCast;               // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_Max_ImplicitCast;                  // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Option_1_ImplicitCast;               // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_CurrentHealth_ImplicitCast; // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function BP_StructureBuilder.BP_StructureBuilder_C.BuildStructuresFromLevelActors
struct ABP_StructureBuilder_C_BuildStructuresFromLevelActors_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A693[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_GetLevelActors_OutLevelActors;            // 0x10(0x10)(ReferenceParm)
	bool                                         CallFunc_GetLevelActors_ReturnValue;               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A695[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A696[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_StructurePartProxy_C*              K2Node_DynamicCast_AsBP_Structure_Part_Proxy;      // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_StructureBuilder.BP_StructureBuilder_C.SSMReady
struct ABP_StructureBuilder_C_SSMReady_Params
{
public:
	class AManagerBase*                          Manager;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsReady;                                          // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_StructureBuilder.BP_StructureBuilder_C.RefreshStructureFromProxy
struct ABP_StructureBuilder_C_RefreshStructureFromProxy_Params
{
public:
	class ANWXStructurePartProxyActor*           ProxyActor;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EStructureState                   DesiredStructureState;                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_StructureBuilder.BP_StructureBuilder_C.OnPersistenceLoadComplete
struct ABP_StructureBuilder_C_OnPersistenceLoadComplete_Params
{
public:
	enum class E_WorldPersistenceLoadState       LoadState;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xEC (0xEC - 0x0)
// Function BP_StructureBuilder.BP_StructureBuilder_C.ExecuteUbergraph_BP_StructureBuilder
struct ABP_StructureBuilder_C_ExecuteUbergraph_BP_StructureBuilder_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A6A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class IInterface>                Temp_class_Variable;                               // 0x8(0x8)(ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A6A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AManagerBase>              Temp_class_Variable_1;                             // 0x18(0x8)(ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsDevEnvironment_ReturnValue;             // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A6A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_StructurePartProxy_C*>      CallFunc_GetAllActorsOfClass_OutActors;            // 0x28(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_StructurePartProxy_C*              CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A6A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A6AA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldBeResetUponDIrtyRealmReset_bSuccess; // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A6AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorldPersistenceSubsystem*            CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AManagerBase*                          K2Node_CustomEvent_Manager;                        // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bIsReady;                       // 0x70(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A6AC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_FindFirstImplementor_ReturnValue;         // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WorldStateIsLoadedFromPersistence_ReturnValue; // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A6AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IEncounterManagerInterface> K2Node_DynamicCast_AsEncounter_Manager_Interface;  // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A6B0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x9C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A6B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IEncounterDirtyResetInterface> CallFunc_RegisterDirtyRealmResettable_Resettable_CastInput; // 0xB0(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ANWXStructurePartProxyActor*           K2Node_Event_ProxyActor;                           // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EStructureState                   K2Node_Event_DesiredStructureState;                // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A6B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXGameModeBase*                      CallFunc_GetNWXGameModeBase_ReturnValue;           // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class E_WorldPersistenceLoadState       K2Node_CustomEvent_LoadState;                      // 0xD8(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A6B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xDC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


