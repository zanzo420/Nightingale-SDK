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

// 0x2B1 (0x2B1 - 0x0)
// Function BP_Encounter_ArchetypeOccupation.BP_Encounter_ArchetypeOccupation_C.SpawnRewardStructure
struct ABP_Encounter_ArchetypeOccupation_C_SpawnRewardStructure_Params
{
public:
	class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* Reward_Pylon;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A4F7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Reward_Transform;                                  // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStructureAssetReference              Reward_Pylon_SDA;                                  // 0x70(0x80)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UEncounterDataAsset*                   CallFunc_GetEncounterData_ReturnValue;             // 0xF0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0xF8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x110(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x128(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEncounterConfig*                      CallFunc_GetTargetActor_ReturnValue;               // 0x140(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class IInterface>                Temp_class_Variable;                               // 0x148(0x8)(ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UEncounterDataAsset*                   CallFunc_GetEncounterData_ReturnValue_1;           // 0x150(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_FindFirstImplementor_ReturnValue;         // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface;   // 0x160(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A4F8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEncounterMarkupDataAsset*             CallFunc_GetMarkupDataAsset_ReturnValue;           // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEncounterMarkupDataAsset_Occupation*  K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Occupation; // 0x180(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A4F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x190(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag;    // 0x1F0(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FStructureEncounterSpawnContext       K2Node_MakeStruct_StructureEncounterSpawnContext;  // 0x1F8(0xC)(NoDestructor)
	uint8                                        Pad_A4FA[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureSpawnContext                K2Node_MakeStruct_StructureSpawnContext;           // 0x210(0x70)(NoDestructor)
	class UObject*                               CallFunc_SpawnEncounterStructure_ReturnValue;      // 0x280(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Hope_Echo_Container; // 0x288(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A4FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetDynamicActorAtLocation_Actor;          // 0x298(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDynamicActorAtLocation_ReturnValue;    // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A4FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Hope_Echo_Container_1; // 0x2A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Encounter_ArchetypeOccupation.BP_Encounter_ArchetypeOccupation_C.GetEncounterActiveRange
struct ABP_Encounter_ArchetypeOccupation_C_GetEncounterActiveRange_Params
{
public:
	double                                       ActiveRange;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_ActiveRange_ImplicitCast;    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_Encounter_ArchetypeOccupation.BP_Encounter_ArchetypeOccupation_C.IsFailureTimerRunning
struct ABP_Encounter_ArchetypeOccupation_C_IsFailureTimerRunning_Params
{
public:
	bool                                         bIsRunning;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsTimerActiveHandle_ReturnValue;       // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_Encounter_ArchetypeOccupation.BP_Encounter_ArchetypeOccupation_C.Wave Defeated
struct ABP_Encounter_ArchetypeOccupation_C_Wave_Defeated_Params
{
public:
	bool                                         CallFunc_Set_Spawning_Inactive_Spawning_Deactivated; // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A4FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Get_Spawner_Waves_Current_Wave;           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Spawner_Waves_Total_Waves;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_Encounter_ArchetypeOccupation.BP_Encounter_ArchetypeOccupation_C.Spawn Creatures
struct ABP_Encounter_ArchetypeOccupation_C_Spawn_Creatures_Params
{
public:
	int32                                        CallFunc_Get_Spawner_Waves_Current_Wave;           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Spawner_Waves_Total_Waves;            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureSpawnerBase_C*             CallFunc_Manually_Spawn_Wave_Spawner_Actor;        // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Manually_Spawn_Wave_Spawner_Was_Spawned;  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x110 (0x110 - 0x0)
// Function BP_Encounter_ArchetypeOccupation.BP_Encounter_ArchetypeOccupation_C.CollectDebuggerInformation
struct ABP_Encounter_ArchetypeOccupation_C_CollectDebuggerInformation_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	int32                                        Total_Creatures_Spawned;                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Total_Creature_Count;                              // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumberOfCreaturesSpawned_ReturnValue;  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A4FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x28(0x50)(HasGetValueTypeHash)
	int32                                        CallFunc_GetTotalCreatures_CreatureCount;          // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A4FF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x88(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xD8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xE8(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Encounter_ArchetypeOccupation.BP_Encounter_ArchetypeOccupation_C.Fail
struct ABP_Encounter_ArchetypeOccupation_C_Fail_Params
{
public:
	class AEncounterConfig*                      OverridePOITarget;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function BP_Encounter_ArchetypeOccupation.BP_Encounter_ArchetypeOccupation_C.ExecuteUbergraph_BP_Encounter_ArchetypeOccupation
struct ABP_Encounter_ArchetypeOccupation_C_ExecuteUbergraph_BP_Encounter_ArchetypeOccupation_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A500[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEncounterDataAsset*                   CallFunc_GetEncounterData_ReturnValue;             // 0x8(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnyPlayerInRadius_ReturnValue;          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsTimerActiveHandle_ReturnValue;       // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsTimerActiveHandle_ReturnValue_1;     // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A501[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A502[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x40(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x48(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x58(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEncounterDataAsset*                   CallFunc_GetEncounterData_ReturnValue_1;           // 0x68(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A503[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x78(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A504[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEncounterConfig*                      K2Node_Event_OverridePOITarget;                    // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A505[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


