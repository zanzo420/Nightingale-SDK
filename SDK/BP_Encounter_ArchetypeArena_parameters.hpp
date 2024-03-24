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

// 0x8 (0x8 - 0x0)
// Function BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C.GetWaveTimerHandle
struct ABP_Encounter_ArchetypeArena_C_GetWaveTimerHandle_Params
{
public:
	struct FTimerHandle                          Wave_Timer_Handle;                                 // 0x0(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C.GetTimeoutHandle
struct ABP_Encounter_ArchetypeArena_C_GetTimeoutHandle_Params
{
public:
	struct FTimerHandle                          Timeout_Handle;                                    // 0x0(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C.GetArenaButtonSDA
struct ABP_Encounter_ArchetypeArena_C_GetArenaButtonSDA_Params
{
public:
	struct FStructureAssetReference              Arena_Button_SDA;                                  // 0x0(0x80)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C.GetRewardStructureSDA
struct ABP_Encounter_ArchetypeArena_C_GetRewardStructureSDA_Params
{
public:
	struct FStructureAssetReference              HECU_SDA;                                          // 0x0(0x80)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x231 (0x231 - 0x0)
// Function BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C.SpawnRewardStructure
struct ABP_Encounter_ArchetypeArena_C_SpawnRewardStructure_Params
{
public:
	struct FTransform                            HECU_Transform;                                    // 0x0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEncounterDataAsset*                   CallFunc_GetEncounterData_ReturnValue;             // 0x60(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AEncounterConfig*                      CallFunc_GetTargetActor_ReturnValue;               // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class IInterface>                Temp_class_Variable;                               // 0x70(0x8)(ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                               CallFunc_FindFirstImplementor_ReturnValue;         // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface;   // 0x80(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A16F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEncounterMarkupDataAsset*             CallFunc_GetMarkupDataAsset_ReturnValue;           // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEncounterMarkupDataAsset_Arena*       K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Arena; // 0xA0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A170[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0xB0(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Spawner_Waves_Current_Wave;           // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Spawner_Waves_Total_Waves;            // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStructureEncounterArenaSpawnContext  K2Node_MakeStruct_StructureEncounterArenaSpawnContext; // 0x118(0x4)(NoDestructor)
	uint8                                        Pad_A171[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureSpawnContext                K2Node_MakeStruct_StructureSpawnContext;           // 0x120(0x70)(NoDestructor)
	class UEncounterDataAsset*                   CallFunc_GetEncounterData_ReturnValue_1;           // 0x190(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x198(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x1B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x1C8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEncounterArchetypeDataAssetArena*     K2Node_DynamicCast_AsEncounter_Archetype_Data_Asset_Arena; // 0x1E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A172[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag;    // 0x1EC(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FStructureEncounterSpawnContext       K2Node_MakeStruct_StructureEncounterSpawnContext;  // 0x1F4(0xC)(NoDestructor)
	class UObject*                               CallFunc_SpawnEncounterStructure_ReturnValue;      // 0x200(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Structure_EncounterTrigger_ArenaContainer_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Arena_Container; // 0x208(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A173[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetDynamicActorAtLocation_Actor;          // 0x218(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDynamicActorAtLocation_ReturnValue;    // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A174[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Structure_EncounterTrigger_ArenaContainer_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Arena_Container_1; // 0x228(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C.GetHopeContainmentStructure
struct ABP_Encounter_ArchetypeArena_C_GetHopeContainmentStructure_Params
{
public:
	class ABP_Structure_EncounterTrigger_ArenaContainer_C* HopeContainmentStructure;                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C.GetEncounterButtonTrigger
struct ABP_Encounter_ArchetypeArena_C_GetEncounterButtonTrigger_Params
{
public:
	class ABP_Structure_EncounterTrigger_Button_C* EncounterButtonTrigger;                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C.Initiate Encounter Completed
struct ABP_Encounter_ArchetypeArena_C_Initiate_Encounter_Completed_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEncounterDataAsset*                   CallFunc_GetEncounterData_ReturnValue;             // 0x10(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A180[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C.SpawnWave
struct ABP_Encounter_ArchetypeArena_C_SpawnWave_Params
{
public:
	int32                                        CallFunc_Get_Spawner_Waves_Current_Wave;           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Spawner_Waves_Total_Waves;            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureSpawnerBase_C*             CallFunc_Manually_Spawn_Wave_Spawner_Actor;        // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned;  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x83 (0x83 - 0x0)
// Function BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C.TriggerPlatforms
struct ABP_Encounter_ArchetypeArena_C_TriggerPlatforms_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A183[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class IInterface>                Temp_class_Variable;                               // 0x10(0x8)(ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AEncounterConfig*                      CallFunc_GetTargetActor_ReturnValue;               // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A184[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_FindFirstImplementor_ReturnValue;         // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface;   // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A185[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEncounterMarkupDataAsset*             CallFunc_GetMarkupDataAsset_ReturnValue;           // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEncounterMarkupDataAsset_Arena*       K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Arena; // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A186[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A187[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IEncounterPlaceableInterface> K2Node_DynamicCast_AsEncounter_Placeable_Interface; // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C.CollectDebuggerInformation
struct ABP_Encounter_ArchetypeArena_C_CollectDebuggerInformation_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Spawner_Waves_Current_Wave;           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Spawner_Waves_Total_Waves;            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Total_Creature_Count_Creature_Count;  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A188[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_2;           // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_3;           // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x92 (0x92 - 0x0)
// Function BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C.Reset Moveable Platforms
struct ABP_Encounter_ArchetypeArena_C_Reset_Moveable_Platforms_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A189[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class IInterface>                Temp_class_Variable;                               // 0x10(0x8)(ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AEncounterConfig*                      CallFunc_GetTargetActor_ReturnValue;               // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_FindFirstImplementor_ReturnValue;         // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface;   // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A18A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEncounterMarkupDataAsset*             CallFunc_GetMarkupDataAsset_ReturnValue;           // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEncounterMarkupDataAsset_Arena*       K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Arena; // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A18B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEncounterConfig*                      CallFunc_GetTargetActor_ReturnValue_1;             // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A18C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A18D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IEncounterPlaceableInterface> K2Node_DynamicCast_AsEncounter_Placeable_Interface; // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A18E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Set_Spawning_Inactive_Spawning_Deactivated; // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x154 (0x154 - 0x0)
// Function BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C.Initialize Button
struct ABP_Encounter_ArchetypeArena_C_Initialize_Button_Params
{
public:
	class ATargetPoint*                          InputPin;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A18F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x10(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x70(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A190[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureSpawnContext                K2Node_MakeStruct_StructureSpawnContext;           // 0x90(0x70)(NoDestructor)
	class AActor*                                CallFunc_GetDynamicActorAtLocation_Actor;          // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDynamicActorAtLocation_ReturnValue;    // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A191[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag;    // 0x10C(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FStructureEncounterSpawnContext       K2Node_MakeStruct_StructureEncounterSpawnContext;  // 0x114(0xC)(NoDestructor)
	class ABP_Structure_EncounterTrigger_Button_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Button; // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A192[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_SpawnEncounterStructure_ReturnValue;      // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Structure_EncounterTrigger_Button_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Button_1; // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A193[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x144(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x5A (0x5A - 0x0)
// Function BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C.Initialize Activation Button
struct ABP_Encounter_ArchetypeArena_C_Initialize_Activation_Button_Params
{
public:
	class AEncounterConfig*                      CallFunc_GetTargetActor_ReturnValue;               // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A194[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEncounterConfig*                      CallFunc_GetTargetActor_ReturnValue_1;             // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class IInterface>                Temp_class_Variable;                               // 0x18(0x8)(ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                               CallFunc_FindFirstImplementor_ReturnValue;         // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A195[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface;   // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A196[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEncounterMarkupDataAsset*             CallFunc_GetMarkupDataAsset_ReturnValue;           // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEncounterMarkupDataAsset_Arena*       K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Arena; // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C.InitiateSpawnWave
struct ABP_Encounter_ArchetypeArena_C_InitiateSpawnWave_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEncounterDataAsset*                   CallFunc_GetEncounterData_ReturnValue;             // 0x10(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A197[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C.On Wave Defeated
struct ABP_Encounter_ArchetypeArena_C_On_Wave_Defeated_Params
{
public:
	int32                                        CallFunc_Get_Spawner_Waves_Current_Wave;           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Spawner_Waves_Total_Waves;            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A198[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x20(0x8)(NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Start_Wave_Timer_WaveTimer_ImplicitCast;  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C.Player Interact
struct ABP_Encounter_ArchetypeArena_C_Player_Interact_Params
{
public:
	class ABP_Structure_EncounterTrigger_C*      Triggering_Structure;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEncounterDataAsset*                   CallFunc_GetEncounterData_ReturnValue;             // 0x18(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x20(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A199[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C.Initialize
struct ABP_Encounter_ArchetypeArena_C_Initialize_Params
{
public:
	class UEncounterDataAsset*                   CallFunc_GetEncounterData_ReturnValue;             // 0x0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEncounterDataAsset*                   CallFunc_GetEncounterData_ReturnValue_1;           // 0x8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Spawner_Waves_Current_Wave;           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Spawner_Waves_Total_Waves;            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A19A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEncounterDataAsset*                   CallFunc_GetEncounterData_ReturnValue_2;           // 0x20(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A19B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEncounterArchetypeDataAssetArena*     K2Node_DynamicCast_AsEncounter_Archetype_Data_Asset_Arena; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A19C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEncounterDataAsset*                   CallFunc_GetEncounterData_ReturnValue_3;           // 0x40(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x48(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;    // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C.CleanupEncounter
struct ABP_Encounter_ArchetypeArena_C_CleanupEncounter_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C.Fail
struct ABP_Encounter_ArchetypeArena_C_Fail_Params
{
public:
	class AEncounterConfig*                      OverridePOITarget;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C.Finish
struct ABP_Encounter_ArchetypeArena_C_Finish_Params
{
public:
	class AEncounterConfig*                      OverridePOITarget;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C.ExecuteUbergraph_BP_Encounter_ArchetypeArena
struct ABP_Encounter_ArchetypeArena_C_ExecuteUbergraph_BP_Encounter_ArchetypeArena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsTimerActiveHandle_ReturnValue;       // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsTimerActiveHandle_ReturnValue_1;     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue_1;      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A19D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEncounterConfig*                      K2Node_Event_OverridePOITarget_1;                  // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A19E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEncounterConfig*                      K2Node_Event_OverridePOITarget;                    // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A19F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x40(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnyPlayerInRadius_ReturnValue;          // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Encounter_ArchetypeArena.BP_Encounter_ArchetypeArena_C.OnNextWaveIsSpawnReady__DelegateSignature
struct ABP_Encounter_ArchetypeArena_C_OnNextWaveIsSpawnReady__DelegateSignature_Params
{
public:
	class ABP_Encounter_ArchetypeArena_C*        ArenaEncounter;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


