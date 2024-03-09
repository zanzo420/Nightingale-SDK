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

// 0x2 (0x2 - 0x0)
// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.ClearCachedHopeEcho
struct ABP_Structure_EncounterTrigger_HopeEchoContainer_C_ClearCachedHopeEcho_Params
{
public:
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.SetFaeCageAudioSwitch
struct ABP_Structure_EncounterTrigger_HopeEchoContainer_C_SetFaeCageAudioSwitch_Params
{
public:
	class UScopedAkComponent*                    CallFunc_GetEncounterScopedAk_ScopedAk;            // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x140 (0x140 - 0x0)
// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.StopTrappedRewardLoops
struct ABP_Structure_EncounterTrigger_HopeEchoContainer_C_StopTrappedRewardLoops_Params
{
public:
	struct FGameplayTag                          StopEssBundleIdle;                                 // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    CallFunc_GetEncounterScopedAk_ScopedAk;            // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A38C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x30(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_EncounterAVFXParams                K2Node_MakeStruct_S_EncounterAVFXParams;           // 0x90(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_A38D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.OnRep_Reveal Cage AVFX
struct ABP_Structure_EncounterTrigger_HopeEchoContainer_C_OnRep_Reveal_Cage_AVFX_Params
{
public:
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x99 (0x99 - 0x0)
// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Set Fae Cage On Encounter Complete
struct ABP_Structure_EncounterTrigger_HopeEchoContainer_C_Set_Fae_Cage_On_Encounter_Complete_Params
{
public:
	class AEncounterBase*                        Encounter;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Encounter_Reward_Actor_Class;                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A395[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x20(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_FinishSpawningActor_ReturnValue;          // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Encounter_HopeEcho_Base_C*         K2Node_DynamicCast_AsBP_Encounter_Hope_Echo_Base;  // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.OnRep_Encounter Reward Actor Type
struct ABP_Structure_EncounterTrigger_HopeEchoContainer_C_OnRep_Encounter_Reward_Actor_Type_Params
{
public:
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Set Fae Cage State On Combat Ended
struct ABP_Structure_EncounterTrigger_HopeEchoContainer_C_Set_Fae_Cage_State_On_Combat_Ended_Params
{
public:
	class AEncounterBase*                        Encounter;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Set Fae Cage State On Combat Started
struct ABP_Structure_EncounterTrigger_HopeEchoContainer_C_Set_Fae_Cage_State_On_Combat_Started_Params
{
public:
	class AEncounterBase*                        Encounter;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.OnRep_Fae Cage State
struct ABP_Structure_EncounterTrigger_HopeEchoContainer_C_OnRep_Fae_Cage_State_Params
{
public:
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x280 (0x280 - 0x0)
// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Create Cage Open AVFX When Time Out
struct ABP_Structure_EncounterTrigger_HopeEchoContainer_C_Create_Cage_Open_AVFX_When_Time_Out_Params
{
public:
	struct FGameplayTag                          LoopStopTag;                                       // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A39F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    CallFunc_GetEncounterScopedAk_ScopedAk;            // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3A0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x50(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_EncounterAVFXParams                K2Node_MakeStruct_S_EncounterAVFXParams;           // 0xB0(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_A3A1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScopedAkComponent*                    CallFunc_GetEncounterScopedAk_ScopedAk_1;          // 0x160(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3A2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_1;     // 0x170(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_EncounterAVFXParams                K2Node_MakeStruct_S_EncounterAVFXParams_1;         // 0x1D0(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_A3A3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Trigger Open Fae Cage AVFX
struct ABP_Structure_EncounterTrigger_HopeEchoContainer_C_Trigger_Open_Fae_Cage_AVFX_Params
{
public:
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x0(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Trigger Agitated Fae Cage AVFX
struct ABP_Structure_EncounterTrigger_HopeEchoContainer_C_Trigger_Agitated_Fae_Cage_AVFX_Params
{
public:
	float                                        CallFunc_Update_Fae_Cage_AVFX_Param_ImplicitCast;  // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Trigger Trapped Fae Cage AVFX
struct ABP_Structure_EncounterTrigger_HopeEchoContainer_C_Trigger_Trapped_Fae_Cage_AVFX_Params
{
public:
	float                                        CallFunc_Update_Fae_Cage_AVFX_Param_ImplicitCast;  // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x150 (0x150 - 0x0)
// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Initialize Trapped Fae Reward Idle AVFX
struct ABP_Structure_EncounterTrigger_HopeEchoContainer_C_Initialize_Trapped_Fae_Reward_Idle_AVFX_Params
{
public:
	struct FGameplayTag                          Affinity_Table_Row;                                // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3A8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScopedAkComponent*                    CallFunc_GetEncounterScopedAk_ScopedAk;            // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3A9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x20(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3AA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                K2Node_MakeStruct_S_EncounterAVFXParams;           // 0xA0(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_A3AB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x150 (0x150 - 0x0)
// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Initialize Idle Fae Cage AVFX
struct ABP_Structure_EncounterTrigger_HopeEchoContainer_C_Initialize_Idle_Fae_Cage_AVFX_Params
{
public:
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     CallFunc_Map_Find_Value;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScopedAkComponent*                    CallFunc_GetEncounterScopedAk_ScopedAk;            // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3AE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x40(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_EncounterAVFXParams                K2Node_MakeStruct_S_EncounterAVFXParams;           // 0xA0(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_A3AF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x310 (0x310 - 0x0)
// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Update Fae Cage AVFX
struct ABP_Structure_EncounterTrigger_HopeEchoContainer_C_Update_Fae_Cage_AVFX_Params
{
public:
	float                                        Param;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          HostileToCalmTransitionTag;                        // 0x4(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScopedAkComponent*                    EncounterScopedAk;                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Fae_Cage_AVFX;                                     // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3BD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    CallFunc_GetEncounterScopedAk_ScopedAk;            // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x60(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_EncounterAVFXParams                K2Node_MakeStruct_S_EncounterAVFXParams;           // 0xC0(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_A3BE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue_1;     // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3BF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScopedAkComponent*                    CallFunc_GetEncounterScopedAk_ScopedAk_1;          // 0x178(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue_2;     // 0x182(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3C0[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkSwitchValue*                        Temp_object_Variable;                              // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3C1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkSwitchValue*                        Temp_object_Variable_1;                            // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkSwitchValue*                        K2Node_Select_Default;                             // 0x1A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     CallFunc_Map_Find_Value;                           // 0x1B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScopedAkComponent*                    CallFunc_GetEncounterScopedAk_ScopedAk_2;          // 0x1C0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3C4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_1;     // 0x1D0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_EncounterAVFXParams                K2Node_MakeStruct_S_EncounterAVFXParams_1;         // 0x230(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_A3C5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     CallFunc_Map_Find_Value_1;                         // 0x2E0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_VariableSet_InstabilityCache_ImplicitCast;  // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_InstabilityCache_ImplicitCast_1; // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;    // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast_1;  // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Initialize Hope Echo Container
struct ABP_Structure_EncounterTrigger_HopeEchoContainer_C_Initialize_Hope_Echo_Container_Params
{
public:
	class AEncounterBase*                        Owning_Encounter;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Essence_Bundle;                                 // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Combat_Encounter;                               // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.ReceiveEndPlay
struct ABP_Structure_EncounterTrigger_HopeEchoContainer_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8C (0x8C - 0x0)
// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.ExecuteUbergraph_BP_Structure_EncounterTrigger_HopeEchoContainer
struct ABP_Structure_EncounterTrigger_HopeEchoContainer_C_ExecuteUbergraph_BP_Structure_EncounterTrigger_HopeEchoContainer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x28(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x38(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEncounterBase*                        K2Node_CustomEvent_Owning_Encounter;               // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Is_Essence_Bundle;              // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Is_Combat_Encounter;            // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3CD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x5C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x6C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x7C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


