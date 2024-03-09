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

// 0x24 (0x24 - 0x0)
// Function BP_Encounter_AVFX_Actor.BP_Encounter_AVFX_Actor_C.DestroyAfterTimeOut
struct ABP_Encounter_AVFX_Actor_C_DestroyAfterTimeOut_Params
{
public:
	double                                       DestroyTimer;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_Encounter_AVFX_Actor.BP_Encounter_AVFX_Actor_C.OnNiagaraComponentDestroy
struct ABP_Encounter_AVFX_Actor_C_OnNiagaraComponentDestroy_Params
{
public:
	class UActorComponent*                       Component;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PostAkEventScoped_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_Encounter_AVFX_Actor.BP_Encounter_AVFX_Actor_C.Clear AVFX
struct ABP_Encounter_AVFX_Actor_C_Clear_AVFX_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x150 (0x150 - 0x0)
// Function BP_Encounter_AVFX_Actor.BP_Encounter_AVFX_Actor_C.Create New Encounter AVFX
struct ABP_Encounter_AVFX_Actor_C_Create_New_Encounter_AVFX_Params
{
public:
	struct FGameplayTag                          New_Affinity_Table_Row;                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A7F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A7F8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x30(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_EncounterAVFXParams                K2Node_MakeStruct_S_EncounterAVFXParams;           // 0x90(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_A7F9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned; // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A7FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     CallFunc_CreateEncounterAVFX_NiagaraSystem;        // 0x148(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Encounter_AVFX_Actor.BP_Encounter_AVFX_Actor_C.OnLoaded_DC0D00EE4B2FDE5117FDB9970E8552AC
struct ABP_Encounter_AVFX_Actor_C_OnLoaded_DC0D00EE4B2FDE5117FDB9970E8552AC_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Encounter_AVFX_Actor.BP_Encounter_AVFX_Actor_C.Spawn New Encounter AVFX
struct ABP_Encounter_AVFX_Actor_C_Spawn_New_Encounter_AVFX_Params
{
public:
	struct FGameplayTag                          Affinity_Table_Row;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Encounter_AVFX_Actor.BP_Encounter_AVFX_Actor_C.StopIdleLoopingSFX
struct ABP_Encounter_AVFX_Actor_C_StopIdleLoopingSFX_Params
{
public:
	struct FGameplayTag                          LoopRowHandle;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0xCA (0xCA - 0x0)
// Function BP_Encounter_AVFX_Actor.BP_Encounter_AVFX_Actor_C.ExecuteUbergraph_BP_Encounter_AVFX_Actor
struct ABP_Encounter_AVFX_Actor_C_ExecuteUbergraph_BP_Encounter_AVFX_Actor_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A7FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A7FC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UScriptStruct*>                 K2Node_MakeArray_Array;                            // 0x18(0x10)(ReferenceParm)
	struct FGameplayTag                          K2Node_CustomEvent_Affinity_Table_Row;             // 0x28(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_2;               // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A7FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          K2Node_CustomEvent_LoopRowHandle;                  // 0x34(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_3;               // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A7FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAffinityTableCellDataWrapper> CallFunc_QueryTable_OutMemoryPtrs;                 // 0x40(0x10)(ReferenceParm)
	bool                                         CallFunc_QueryTable_ReturnValue;                   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A7FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x54(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A800[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAudio                     CallFunc_GetTableCellData_OutData;                 // 0x68(0x50)(HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         K2Node_DynamicCast_AsAk_Audio_Event;               // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PostAkEventScoped_ReturnValue;            // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


