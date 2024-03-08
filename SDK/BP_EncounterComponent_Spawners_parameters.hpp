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

// 0x311 (0x311 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Get Spawner Location from Encounter Config
struct UBP_EncounterComponent_Spawners_C_Get_Spawner_Location_from_Encounter_Config_Params
{
public:
	struct FTransform                            Spawner_Transform;                                 // 0x0(0x60)(ConstParm, Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bGotLocationFromConfig;                            // 0x60(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EFA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue_1;            // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x88(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0xA0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xB8(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x108(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x158(0x10)(ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x168(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x178(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x190(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x1B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x1C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AEncounterBase*                        CallFunc_Get_or_Cache_Encounter_Base_EncounterBase; // 0x1D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EFB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x1E0(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEncounterConfig*                      CallFunc_GetTargetActor_ReturnValue;               // 0x240(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IEncounterMarkupInterface> CallFunc_GetMarkupDataAsset_self_CastInput;        // 0x248(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEncounterMarkupDataAsset*             CallFunc_GetMarkupDataAsset_ReturnValue;           // 0x258(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EFC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IEncounterMarkupDataInterface_SpawnerProvider> K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Spawner_Provider; // 0x268(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EFD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ATargetPoint_AI*>               CallFunc_GetSpawners_ReturnValue;                  // 0x280(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EFE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ATargetPoint_AI*                       CallFunc_Array_Random_OutItem;                     // 0x298(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Random_OutIndex;                    // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x2A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2A5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6EFF[0xA];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue_1;               // 0x2B0(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Initialize Encounter POI Implementer
struct UBP_EncounterComponent_Spawners_C_Initialize_Encounter_POI_Implementer_Params
{
public:
	class ABP_CreatureSpawnerBase_C*             Creature_Spawner;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class AEncounterBase*                        EncounterBase;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F00[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue_1;            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UNWXAIPOI_Component*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F01[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEncounterBase*                        CallFunc_Get_or_Cache_Encounter_Base_EncounterBase; // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.On NPC Spawner Finished
struct UBP_EncounterComponent_Spawners_C_On_NPC_Spawner_Finished_Params
{
public:
	class ABP_CreatureSpawnerBase_C*             Spawner;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F02[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x40(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.On NPC Spawned
struct UBP_EncounterComponent_Spawners_C_On_NPC_Spawned_Params
{
public:
	class ABP_CreatureBase_C*                    Creature;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F03[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Bind NPC Spawner Events
struct UBP_EncounterComponent_Spawners_C_Bind_NPC_Spawner_Events_Params
{
public:
	class ABP_CreatureSpawnerBase_C*             Creature_Spawner;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8C (0x8C - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Bind Creature Spawner Events
struct UBP_EncounterComponent_Spawners_C_Bind_Creature_Spawner_Events_Params
{
public:
	class ABP_CreatureSpawnerBase_C*             Creature_Spawner;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXAISpawnerController*               K2Node_DynamicCast_AsNWXAISpawner_Controller;      // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F04[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x2C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x3C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x4C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x5C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x6C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x7C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.SetCreature Realm Power Override
struct UBP_EncounterComponent_Spawners_C_SetCreature_Realm_Power_Override_Params
{
public:
	int32                                        NewValue;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x67 (0x67 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Is Creature Unique
struct UBP_EncounterComponent_Spawners_C_Is_Creature_Unique_Params
{
public:
	struct FEncounterCreatureData                Creature_Data;                                     // 0x0(0x1C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                        Pad_6F05[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FEncounterCreatureData>        Creature_Data_Array;                               // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bIsUnique;                                         // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F06[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEncounterCreatureData                CallFunc_Array_Get_Item;                           // 0x40(0x1C)(NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F07[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x66(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49C (0x49C - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Set BPSpawner Data Override
struct UBP_EncounterComponent_Spawners_C_Set_BPSpawner_Data_Override_Params
{
public:
	TMap<TSoftClassPtr<class ABP_CreatureBase_C>, int32> Required_Creature_Classes;                         // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Total_Creature_Count;                              // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F08[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 Bound_Spawner_Tags;                                // 0x58(0x20)(Edit, BlueprintVisible)
	class UNWXSquadConfigData*                   Bound_Squad_Data;                                  // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEnvQuery*                             Bound_Miasma_Spawning_Query;                       // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftClassPtr<class ABP_CreatureBase_C>> Default_Creature_Classes;                          // 0x88(0x10)(Edit, BlueprintVisible)
	TSoftClassPtr<class ABP_CreatureBase_C>      Required_First_Creature_Class_Key;                 // 0x98(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<TSoftClassPtr<class ABP_CreatureBase_C>> CallFunc_Map_Keys_Keys;                            // 0xC0(0x10)(ReferenceParm)
	TSoftClassPtr<class ABP_CreatureBase_C>      CallFunc_Array_Get_Item;                           // 0xD0(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F09[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, float>                     K2Node_MakeMap_Map;                                // 0x100(0x50)(None)
	TArray<TSoftClassPtr<class ABP_CreatureBase_C>> K2Node_MakeArray_Array;                            // 0x150(0x10)(ReferenceParm)
	struct FS_SpawningData                       K2Node_MakeStruct_S_SpawningData;                  // 0x160(0x148)(HasGetValueTypeHash)
	struct FS_BPSpawnerData                      K2Node_MakeStruct_S_BPSpawnerData;                 // 0x2A8(0x1F0)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x498(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x148 (0x148 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Calculate Wave Max Challenge Rating
struct UBP_EncounterComponent_Spawners_C_Calculate_Wave_Max_Challenge_Rating_Params
{
public:
	struct FEncounterSpawnerWaveData             Encounter_Spawner_Wave_Data;                       // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        Wave_Max_Challenge_Rating;                         // 0x60(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F0A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EAutomaticSpawnerWaveDifficulty, double> Spawner_Wave_Difficulty;                           // 0x68(0x50)(Edit, BlueprintVisible)
	TMap<enum class EAutomaticSpawnerWaveDifficulty, double> K2Node_MakeVariable_MakeVariableOutput;            // 0xB8(0x50)(None)
	double                                       CallFunc_Map_Find_Value;                           // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F0B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetCurrentRealmPower_RealmPower;          // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEvaluateCurveTableResult         CallFunc_EvaluateCurveTableRow_OutResult;          // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F0C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_EvaluateCurveTableRow_OutXY;              // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F0D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_EvaluateCurveTableRow_InXY_ImplicitCast;  // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x491 (0x491 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Filter Creature Spawner By Cluster
struct UBP_EncounterComponent_Spawners_C_Filter_Creature_Spawner_By_Cluster_Params
{
public:
	struct FEncounterSpawnerWaveData             Encounter_Spawner_Wave_Data;                       // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FEncounterCreatureData>        Cluster_Filtered_Creature_Data_Array;              // 0x60(0x10)(Parm, OutParm)
	TArray<struct FRealmPlacementRequirement>    Cluster_Realm_Requirements;                        // 0x70(0x10)(Edit, BlueprintVisible)
	struct FEncounterCreatureData                Creature_Data_Entry;                               // 0x80(0x1C)(Edit, BlueprintVisible, NoDestructor)
	class FName                                  Cluster_Theme_Name;                                // 0x9C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F0E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FEncounterCreatureData>        Cluster_Filtered_Creature_Data;                    // 0xA8(0x10)(Edit, BlueprintVisible)
	struct FGameplayTagContainer                 Cluster_Tags_Container;                            // 0xB8(0x20)(Edit, BlueprintVisible)
	struct FClusterTheme                         Master_Cluster_Theme;                              // 0xD8(0xC8)(Edit, BlueprintVisible)
	struct FClusterTheme                         Cluster_Theme;                                     // 0x1A0(0xC8)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x26C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x274(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x27C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F0F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x288(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  CallFunc_BreakGameplayTagContainer_GameplayTags;   // 0x298(0x10)(ReferenceParm)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x2A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue;                // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x2C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FEncounterCreatureDataArray           CallFunc_Map_Find_Value;                           // 0x2D0(0x10)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue_1;              // 0x2E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_Creature_Unique_bIsUnique;             // 0x2E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2E3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEncounterCreatureData                CallFunc_Array_Random_OutItem;                     // 0x2E4(0x1C)(NoDestructor)
	int32                                        CallFunc_Array_Random_OutIndex;                    // 0x300(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FEncounterCreatureData>        K2Node_MakeArray_Array;                            // 0x308(0x10)(ReferenceParm)
	bool                                         CallFunc_DoesRealmMeetOneRequirement_AtLeastOneMet; // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F12[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x31C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F13[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEncounterCreatureDataArray           CallFunc_Map_Find_Value_1;                         // 0x328(0x10)(None)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x338(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F14[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x33C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEncounterCreatureData                CallFunc_Array_Get_Item;                           // 0x340(0x1C)(NoDestructor)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x35C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x364(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F15[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FClusterCreatureData                  CallFunc_Array_Get_Item_1;                         // 0x368(0x38)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x3A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x3A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F16[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  CallFunc_BreakGameplayTagContainer_GameplayTags_1; // 0x3A8(0x10)(ReferenceParm)
	struct FGameplayTag                          CallFunc_Array_Get_Item_2;                         // 0x3B8(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x3C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x3C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F17[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FClusterTheme                         CallFunc_Map_Find_Value_2;                         // 0x3C8(0xC8)(None)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x490(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x620 (0x620 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Initialize Creature Spawner and Count for Auto Spawner Wave Data
struct UBP_EncounterComponent_Spawners_C_Initialize_Creature_Spawner_and_Count_for_Auto_Spawner_Wave_Data_Params
{
public:
	struct FEncounterSpawnerWaveData             Encounter_Spawner_Wave_Data;                       // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        Array_Index;                                       // 0x60(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Creature_Spawner_Row_Handle;                       // 0x68(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        Total_Creature_Count_;                             // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F19[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<TSoftClassPtr<class ABP_CreatureBase_C>, int32> Required_Creature_Classes;                         // 0x80(0x50)(Edit, BlueprintVisible)
	TSubclassOf<class ANWXAISpawner>             Default_Bound_Spawner_Class;                       // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FEncounterCreatureData>        Cluster_Filtered_Creature_Data_Array;              // 0xD8(0x10)(Edit, BlueprintVisible)
	int32                                        Wave_Max_Challenge_Rating;                         // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Calculate_Wave_Max_Challenge_Rating_Wave_Max_Challenge_Rating; // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F1A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_BPSpawnerData                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x100(0x1F0)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F1B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x2F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCurveTableRowHandle                  K2Node_MakeStruct_CurveTableRowHandle;             // 0x2F8(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        K2Node_MakeStruct_ScalableFloat;                   // 0x308(0x28)(None)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F1C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FEncounterCreatureData>        CallFunc_Filter_Creature_Spawner_By_Cluster_Cluster_Filtered_Creature_Data_Array; // 0x338(0x10)(ReferenceParm)
	struct FEncounterCreatureData                CallFunc_Array_Get_Item;                           // 0x348(0x1C)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x364(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x369(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_IsEmpty_ReturnValue;                  // 0x36A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F1D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x36C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_BPSpawnerData                      CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x370(0x1F0)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F1E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterSpawnerData               CallFunc_GetDataTableRowFromName_OutRow_2;         // 0x568(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_2;    // 0x598(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F1F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class ABP_CreatureBase_C>      CallFunc_Array_Get_Item_1;                         // 0x5A0(0x28)(HasGetValueTypeHash)
	struct FEncounterCreatureData                CallFunc_Array_Get_Item_2;                         // 0x5C8(0x1C)(NoDestructor)
	uint8                                        Pad_6F20[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterSpawnerData               CallFunc_GetDataTableRowFromName_OutRow_3;         // 0x5E8(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_3;    // 0x618(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F21[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0x61C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x71 (0x71 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Initialize Creature Spawner Data
struct UBP_EncounterComponent_Spawners_C_Initialize_Creature_Spawner_Data_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEncounterSpawnerWaveData             CallFunc_Array_Get_Item;                           // 0x10(0x60)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x124 (0x124 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Override Bound Creature Data For Arrival Realm
struct UBP_EncounterComponent_Spawners_C_Override_Bound_Creature_Data_For_Arrival_Realm_Params
{
public:
	struct FGameplayTag                          CreatureTag;                                       // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        CreatureChallengeRating;                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F22[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Bound_Override_Data_Table;                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  CreatureName;                                      // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEncounterCreatureDataArray           BoundCreatureDataOverride;                         // 0x20(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESpawnerCreatureType              Temp_byte_Variable;                                // 0x34(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F23[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESpawnerCreatureType              Temp_byte_Variable_1;                              // 0x44(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F24[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEncounterCreatureData                K2Node_MakeStruct_EncounterCreatureData;           // 0x48(0x1C)(NoDestructor)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_EncounterSpawnerData               CallFunc_GetDataTableRowFromName_OutRow;           // 0x68(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F25[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Get_Challenge_Rating_from_Row_Handle_Challenge_Rating; // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  CallFunc_BreakGameplayTagContainer_GameplayTags;   // 0xA0(0x10)(ReferenceParm)
	struct FGameplayTag                          CallFunc_Array_Get_Item;                           // 0xB0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F26[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F27[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXWorldSettings*                     CallFunc_GetWorldSettings_ReturnValue;             // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCurrentRealmTags_Success;              // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F28[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_GetCurrentRealmTags_RealmTags;            // 0xD8(0x20)(None)
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0xF8(0x10)(ReferenceParm)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F29[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0x10C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x11C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F2A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x25D (0x25D - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Get Challenge Rating from Row Handle
struct UBP_EncounterComponent_Spawners_C_Get_Challenge_Rating_from_Row_Handle_Params
{
public:
	struct FDataTableRowHandle                   Creature_Row_Handle;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        Challenge_Rating;                                  // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F2B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_BPSpawnerData                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x18(0x1F0)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x209(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F2C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class ABP_CreatureBase_C>      CallFunc_Array_Get_Item;                           // 0x210(0x28)(HasGetValueTypeHash)
	struct FSoftClassPath                        CallFunc_Conv_SoftObjRefToSoftClassPath_ReturnValue; // 0x238(0x20)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Find_Value;                           // 0x258(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x25C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Convert Creature String to Enum
struct UBP_EncounterComponent_Spawners_C_Convert_Creature_String_to_Enum_Params
{
public:
	class FString                                CreatureString;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class ESpawnerCreatureType              CreatureEnum;                                      // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x189 (0x189 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Initialize Creature Type Map
struct UBP_EncounterComponent_Spawners_C_Initialize_Creature_Type_Map_Params
{
public:
	TArray<struct FEncounterCreatureData>        Creature_Data_Array;                               // 0x0(0x10)(Edit, BlueprintVisible)
	enum class ESpawnerCreatureType              Creature_Enum;                                     // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F2D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Creature_Tag;                                      // 0x14(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        Creature_Challenge_Rating;                         // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Creature_Name;                                     // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEncounterCreatureData                K2Node_MakeStruct_EncounterCreatureData;           // 0x38(0x1C)(NoDestructor)
	uint8                                        Pad_6F2E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEncounterCreatureDataArray           K2Node_MakeStruct_EncounterCreatureDataArray;      // 0x58(0x10)(None)
	TArray<struct FEncounterCreatureData>        K2Node_MakeArray_Array;                            // 0x68(0x10)(ReferenceParm)
	struct FEncounterCreatureDataArray           K2Node_MakeStruct_EncounterCreatureDataArray_1;    // 0x78(0x10)(None)
	struct FEncounterCreatureData                K2Node_MakeStruct_EncounterCreatureData_1;         // 0x88(0x1C)(NoDestructor)
	uint8                                        Pad_6F2F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEncounterCreatureDataArray           CallFunc_Map_Find_Value;                           // 0xA8(0x10)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F30[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_EncounterSpawnerData               CallFunc_GetDataTableRowFromName_OutRow;           // 0xC0(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F31[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0xF8(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Challenge_Rating_from_Row_Handle_Challenge_Rating; // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x11C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F32[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F33[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  CallFunc_BreakGameplayTagContainer_GameplayTags;   // 0x128(0x10)(ReferenceParm)
	struct FGameplayTag                          CallFunc_Array_Get_Item_1;                         // 0x138(0x8)(NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetTagName_ReturnValue;                   // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F34[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue;               // 0x160(0x10)(ReferenceParm)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F35[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item_2;                         // 0x178(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ESpawnerCreatureType              CallFunc_Convert_Creature_String_to_Enum_CreatureEnum; // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x141 (0x141 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.On Creature Has Targeted Player
struct UBP_EncounterComponent_Spawners_C_On_Creature_Has_Targeted_Player_Params
{
public:
	class ABP_CreatureBase_C*                    Creature;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                ExitGate;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F36[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue_1;            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue_2;            // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue_3;            // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F37[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEncounterSpawnerWaveData             CallFunc_Array_Get_Item;                           // 0xA0(0x60)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F38[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IEncounterGateInterface> K2Node_DynamicCast_AsEncounter_Gate_Interface;     // 0x108(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesImplementInterface_ReturnValue;       // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F39[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEncounterBase*                        CallFunc_Get_or_Cache_Encounter_Base_EncounterBase; // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F3A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEncounterConfig*                      CallFunc_GetTargetActor_ReturnValue;               // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetExitGateActor_ReturnValue;             // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Get or Cache Encounter Base
struct UBP_EncounterComponent_Spawners_C_Get_or_Cache_Encounter_Base_Params
{
public:
	class AEncounterBase*                        EncounterBase;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AEncounterBase*                        K2Node_DynamicCast_AsEncounter_Base;               // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.On Final Preferred Leader Death
struct UBP_EncounterComponent_Spawners_C_On_Final_Preferred_Leader_Death_Params
{
public:
	class ANWXAICharacter*                       New_Leader;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F3B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue_1;            // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class ABP_CreatureSpawnerBase_C*             K2Node_DynamicCast_AsBP_Creature_Spawner_Base;     // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.On Creature Possessed
struct UBP_EncounterComponent_Spawners_C_On_Creature_Possessed_Params
{
public:
	class ABP_CreatureBase_C*                    Creature;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F3C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_ApplyAIActions_Success;                   // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Destroy All Creatures Immediately
struct UBP_EncounterComponent_Spawners_C_Destroy_All_Creatures_Immediately_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureSpawnerBase_C*             CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Evaluate if Spawners Remain
struct UBP_EncounterComponent_Spawners_C_Evaluate_if_Spawners_Remain_Params
{
public:
	bool                                         No_Spawners_Remain;                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F3D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Get Spawner Waves
struct UBP_EncounterComponent_Spawners_C_Get_Spawner_Waves_Params
{
public:
	int32                                        Current_Wave;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Total_Waves;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.On Spawner Finished
struct UBP_EncounterComponent_Spawners_C_On_Spawner_Finished_Params
{
public:
	class ABP_CreatureSpawnerBase_C*             Spawner;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F3E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AEncounterBase*                        CallFunc_Get_or_Cache_Encounter_Base_EncounterBase; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue_1;            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Get Current Creature Count
struct UBP_EncounterComponent_Spawners_C_Get_Current_Creature_Count_Params
{
public:
	int32                                        Current_Creatures;                                 // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Total_Creature_Count;                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Destroy All Creatures
struct UBP_EncounterComponent_Spawners_C_Destroy_All_Creatures_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureSpawnerBase_C*             CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Set Spawning Inactive
struct UBP_EncounterComponent_Spawners_C_Set_Spawning_Inactive_Params
{
public:
	bool                                         Spawning_Deactivated;                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Set Spawning Active
struct UBP_EncounterComponent_Spawners_C_Set_Spawning_Active_Params
{
public:
	bool                                         Spawning_Activated;                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2D (0x2D - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Get Current Spawner Count
struct UBP_EncounterComponent_Spawners_C_Get_Current_Spawner_Count_Params
{
public:
	int32                                        Current_Spawner_Count;                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Total_Creature_Count;                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureSpawnerBase_C*             CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F3F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetTotalCreatures_CreatureCount;          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.On Creatures None Remain
struct UBP_EncounterComponent_Spawners_C_On_Creatures_None_Remain_Params
{
public:
	class ABP_CreatureSpawnerBase_C*             Spawner;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AEncounterBase*                        CallFunc_Get_or_Cache_Encounter_Base_EncounterBase; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.On Creature Death
struct UBP_EncounterComponent_Spawners_C_On_Creature_Death_Params
{
public:
	class ABP_CreatureBase_C*                    Creature;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F40[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F41[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x34(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEncounterSpawnerWaveData             CallFunc_Array_Get_Item;                           // 0x48(0x60)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xAA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Evaluate_if_Spawners_Remain_No_Spawners_Remain; // 0xAB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.On Creature Destroyed
struct UBP_EncounterComponent_Spawners_C_On_Creature_Destroyed_Params
{
public:
	class ABP_CreatureBase_C*                    Creature;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Current_Creature_Count;                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F43[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F44[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x38(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Get Total Creature Count
struct UBP_EncounterComponent_Spawners_C_Get_Total_Creature_Count_Params
{
public:
	int32                                        Creature_Count;                                    // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.On Creature Spawned
struct UBP_EncounterComponent_Spawners_C_On_Creature_Spawned_Params
{
public:
	class ABP_CreatureBase_C*                    Creature;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F45[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x30(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3E (0x3E - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Evaluate Current Creature Count
struct UBP_EncounterComponent_Spawners_C_Evaluate_Current_Creature_Count_Params
{
public:
	int32                                        Current_Creature_Count;                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F46[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_CreatureSpawnerBase_C*             CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F47[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Increment Current Wave
struct UBP_EncounterComponent_Spawners_C_Increment_Current_Wave_Params
{
public:
	int32                                        NewPosition;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F48[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x140 (0x140 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Create NPC Spawner
struct UBP_EncounterComponent_Spawners_C_Create_NPC_Spawner_Params
{
public:
	int32                                        Number_of_NPCs;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F49[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_CreatureSpawnerBase_C*             Spawner_Actor;                                     // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Spawner_Was_Spawned;                               // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F4A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEncounterBase*                        EncounterReference;                                // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FEncounterSpawnerWaveData             NPC_Creature_Wave_Data_Template;                   // 0x20(0x60)(Edit, BlueprintVisible)
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F4B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEncounterBase*                        CallFunc_Get_or_Cache_Encounter_Base_EncounterBase; // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F4C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F4D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0xD0(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureSpawner_NPCGroup_Realm_C*  CallFunc_FinishSpawningActor_ReturnValue;          // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x418 (0x418 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Create Creature Spawner
struct UBP_EncounterComponent_Spawners_C_Create_Creature_Spawner_Params
{
public:
	struct FEncounterSpawnerWaveData             Spawner_Wave_Data;                                 // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ABP_CreatureSpawnerBase_C*             Spawner_Actor;                                     // 0x60(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Spawner_Was_Spawned;                               // 0x68(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F4E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    Markup_Spawners;                                   // 0x70(0x10)(Edit, BlueprintVisible)
	bool                                         bSkipTwoStepSpawning;                              // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F4F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_BPSpawnerData                      BP_Spawner_Override;                               // 0x88(0x1F0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSubclassOf<class ANWXAISpawner>             Creature_Spawner_Base;                             // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FTransform                            Spawner_Transform;                                 // 0x280(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEncounterBase*                        Encounter;                                         // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                        Maximum_Creature_Override;                         // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F50[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   Creature_Spawner;                                  // 0x2F0(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                    Cached_Spawn_Points;                               // 0x300(0x10)(Edit, BlueprintVisible)
	bool                                         Boss_Wave;                                         // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F51[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Found_Spawn_Location;                              // 0x318(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x331(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F52[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_Get_Spawner_Location_from_Encounter_Config_Spawner_Transform; // 0x340(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Spawner_Location_from_Encounter_Config_bGotLocationFromConfig; // 0x3A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F53[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x3A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x3B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AEncounterBase*                        CallFunc_Get_or_Cache_Encounter_Base_EncounterBase; // 0x3C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsBP_Creature_Spawner_Base; // 0x3D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F54[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsBP_Creature_Spawner_Bound_Miasma; // 0x3E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_1;                // 0x3E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F55[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x3F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x3F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureSpawner_BoundMiasma_C*     CallFunc_FinishSpawningActor_ReturnValue;          // 0x400(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureSpawnerBase_C*             CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x408(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x411(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F56[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x414(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.Manually Spawn Wave
struct UBP_EncounterComponent_Spawners_C_Manually_Spawn_Wave_Params
{
public:
	int32                                        Wave_Number;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F57[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_CreatureSpawnerBase_C*             Spawner_Actor;                                     // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Spawner_Was_Spawned;                               // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F58[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F59[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_CreatureSpawnerBase_C*             CallFunc_Create_Creature_Spawner_Spawner_Actor;    // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Create_Creature_Spawner_Spawner_Was_Spawned; // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F5A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.ExecuteUbergraph_BP_EncounterComponent_Spawners
struct UBP_EncounterComponent_Spawners_C_ExecuteUbergraph_BP_EncounterComponent_Spawners_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F5B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXWorldSettings*                     CallFunc_GetWorldSettings_ReturnValue;             // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AEncounterBase*                        CallFunc_Get_or_Cache_Encounter_Base_EncounterBase; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXCreatureManagerBase*               CallFunc_GetCreatureManager_CreatureManager;       // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEncounterDataAsset*                   CallFunc_GetEncounterData_ReturnValue;             // 0x20(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AEncounterConfig*                      CallFunc_GetTargetActor_ReturnValue;               // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEncounterLevelData                   CallFunc_GetEncounterLevelData_ReturnValue;        // 0x34(0x24)(ConstParm, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F5C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            CallFunc_GetEncounterCreatureData_DataTable;       // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureManager_C*                 K2Node_DynamicCast_AsBP_Creature_Manager;          // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F5D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F5E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCurrentRealmDifficulty_Success;        // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERealmDifficulty                  CallFunc_GetCurrentRealmDifficulty_Realm_Difficulty; // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F5F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEncounterComponentDataAsset*          CallFunc_Array_Get_Item;                           // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEncounterComponentSpawnerAutomaticDataAsset* K2Node_DynamicCast_AsEncounter_Component_Spawner_Automatic_Data_Asset; // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F60[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetNextRealmPower_NextRealmPower;         // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.OnNPCSpawned__DelegateSignature
struct UBP_EncounterComponent_Spawners_C_OnNPCSpawned__DelegateSignature_Params
{
public:
	class ABP_CreatureBase_C*                    NPC;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.OnPlayerTargeted__DelegateSignature
struct UBP_EncounterComponent_Spawners_C_OnPlayerTargeted__DelegateSignature_Params
{
public:
	class ABP_CreatureBase_C*                    Creature;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.OnCreatureKilled__DelegateSignature
struct UBP_EncounterComponent_Spawners_C_OnCreatureKilled__DelegateSignature_Params
{
public:
	class ABP_CreatureBase_C*                    Creature;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.OnCreatureSpawned__DelegateSignature
struct UBP_EncounterComponent_Spawners_C_OnCreatureSpawned__DelegateSignature_Params
{
public:
	class ABP_CreatureBase_C*                    Creature;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_EncounterComponent_Spawners.BP_EncounterComponent_Spawners_C.OnCreatureBehaviourOverridden__DelegateSignature
struct UBP_EncounterComponent_Spawners_C_OnCreatureBehaviourOverridden__DelegateSignature_Params
{
public:
	class ABP_CreatureBase_C*                    Creature;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


