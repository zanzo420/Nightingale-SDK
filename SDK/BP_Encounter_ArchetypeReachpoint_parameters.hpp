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

// 0xAC (0xAC - 0x0)
// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.CollectDebuggerShapes
struct ABP_Encounter_ArchetypeReachpoint_C_CollectDebuggerShapes_Params
{
public:
	TArray<struct FEncounterDebugLine>           OutDebugLines;                                     // 0x0(0x10)(Parm, OutParm)
	TArray<struct FEncounterDebugPoint>          OutDebugPoints;                                    // 0x10(0x10)(Parm, OutParm)
	TArray<struct FEncounterDebugPoint>          DebugPoints;                                       // 0x20(0x10)(Edit, BlueprintVisible)
	TArray<struct FEncounterDebugLine>           DebugLines;                                        // 0x30(0x10)(Edit, BlueprintVisible)
	struct FEncounterDebugPoint                  K2Node_MakeStruct_EncounterDebugPoint;             // 0x40(0x40)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A605[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FEncounterDebugLine>           CallFunc_CollectDebuggerShapes_OutDebugLines;      // 0x88(0x10)(ReferenceParm)
	TArray<struct FEncounterDebugPoint>          CallFunc_CollectDebuggerShapes_OutDebugPoints;     // 0x98(0x10)(ReferenceParm)
	float                                        K2Node_MakeStruct_Radius_ImplicitCast;             // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.GetReachPointLocation
struct ABP_Encounter_ArchetypeReachpoint_C_GetReachPointLocation_Params
{
public:
	struct FVector                               ReachPointLocation;                                // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B9 (0x1B9 - 0x0)
// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.SpawnRewardPylonAtRandomReachPoint
struct ABP_Encounter_ArchetypeReachpoint_C_SpawnRewardPylonAtRandomReachPoint_Params
{
public:
	TArray<class ATargetPoint*>                  ReachPoints;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* SpawnedRewardPylon;                                // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A606[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureAssetReference              Reward_Pylon_SDA;                                  // 0x20(0x80)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class ATargetPoint*                          RandomReachPoint;                                  // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsNotEmpty_ReturnValue;             // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A607[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ATargetPoint*                          CallFunc_Array_Random_OutItem;                     // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Random_OutIndex;                    // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A608[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0xC0(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStructureSpawnContext                K2Node_MakeStruct_StructureSpawnContext;           // 0x120(0x70)(NoDestructor)
	struct FGameplayTag                          CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag;    // 0x190(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FStructureEncounterSpawnContext       K2Node_MakeStruct_StructureEncounterSpawnContext;  // 0x198(0xC)(NoDestructor)
	uint8                                        Pad_A609[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_SpawnEncounterStructure_ReturnValue;      // 0x1A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Hope_Echo_Container; // 0x1B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x71 (0x71 - 0x0)
// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.CheckReachPointsForExistingRewardPylon
struct ABP_Encounter_ArchetypeReachpoint_C_CheckReachPointsForExistingRewardPylon_Params
{
public:
	TArray<class ATargetPoint*>                  ReachPoints;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* FoundRewardPylon;                                  // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ATargetPoint*                          CurrentRewardPoint;                                // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATargetPoint*                          CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A60A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A60B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetDynamicActorAtLocation_Actor;          // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDynamicActorAtLocation_ReturnValue;    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A60C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger_Hope_Echo_Container; // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x118 (0x118 - 0x0)
// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.SpawnAndInitializeVFXActor
struct ABP_Encounter_ArchetypeReachpoint_C_SpawnAndInitializeVFXActor_Params
{
public:
	struct FVector                               Extent;                                            // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Origin;                                            // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AVFXActorAffinityTableRow;                         // 0x30(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A612[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x40(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_AddZHeightToPlacementTransform_ReturnValue; // 0xA0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_Get_Encounter_Palette_AVFXTag_AVFXTag;    // 0x100(0x8)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Encounter_Reachpoint_AVFX_Actor_C* CallFunc_FinishSpawningActor_ReturnValue;          // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.GetVFXActorHeightOffset
struct ABP_Encounter_ArchetypeReachpoint_C_GetVFXActorHeightOffset_Params
{
public:
	double                                       VFXActorHeightOffset;                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_VFXActorHeightOffset_ImplicitCast; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.Initialize
struct ABP_Encounter_ArchetypeReachpoint_C_Initialize_Params
{
public:
	bool                                         CallFunc_Vector_IsNearlyZero_ReturnValue;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9A (0x9A - 0x0)
// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.SpawnRewardStructure
struct ABP_Encounter_ArchetypeReachpoint_C_SpawnRewardStructure_Params
{
public:
	class ATargetPoint*                          RandomReachPoint;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* Reward_Pylon;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<class ATargetPoint*>                  Reach_Points;                                      // 0x10(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class UEncounterDataAsset*                   CallFunc_GetEncounterData_ReturnValue;             // 0x20(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* CallFunc_CheckReachPointsForExistingRewardPylon_FoundRewardPylon; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AEncounterConfig*                      CallFunc_GetTargetActor_ReturnValue;               // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class IInterface>                Temp_class_Variable;                               // 0x38(0x8)(ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_FindFirstImplementor_ReturnValue;         // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface;   // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A61A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEncounterMarkupDataAsset*             CallFunc_GetMarkupDataAsset_ReturnValue;           // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEncounterMarkupDataAsset_Reachpoint*  K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Reachpoint; // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A61B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* CallFunc_SpawnRewardPylonAtRandomReachPoint_SpawnedRewardPylon; // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.CollectDebuggerInformation
struct ABP_Encounter_ArchetypeReachpoint_C_CollectDebuggerInformation_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_VectorToString_ReturnValue;          // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue;          // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.RefreshEncounter
struct ABP_Encounter_ArchetypeReachpoint_C_RefreshEncounter_Params
{
public:
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnyPlayerInRadius_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A61C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_IsAnyPlayerInRadius_Radius_ImplicitCast;  // 0x4(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function BP_Encounter_ArchetypeReachpoint.BP_Encounter_ArchetypeReachpoint_C.ExecuteUbergraph_BP_Encounter_ArchetypeReachpoint
struct ABP_Encounter_ArchetypeReachpoint_C_ExecuteUbergraph_BP_Encounter_ArchetypeReachpoint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


