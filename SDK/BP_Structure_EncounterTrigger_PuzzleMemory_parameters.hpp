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

// 0x1F0 (0x1F0 - 0x0)
// Function BP_Structure_EncounterTrigger_PuzzleMemory.BP_Structure_EncounterTrigger_PuzzleMemory_C.AVFXParams
struct ABP_Structure_EncounterTrigger_PuzzleMemory_C_AVFXParams_Params
{
public:
	struct FS_EncounterAVFXParams                S_EncounterAVFXParams;                             // 0x0(0xA8)(Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50C5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScopedAkComponent*                    CallFunc_GetEncounterScopedAk_ScopedAk;            // 0xB0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50C8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0xC0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x120(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50C9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                K2Node_MakeStruct_S_EncounterAVFXParams;           // 0x140(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50CA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function BP_Structure_EncounterTrigger_PuzzleMemory.BP_Structure_EncounterTrigger_PuzzleMemory_C.InteractionVFX
struct ABP_Structure_EncounterTrigger_PuzzleMemory_C_InteractionVFX_Params
{
public:
	float                                        VFX_Instability;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB81 (0xB81 - 0x0)
// Function BP_Structure_EncounterTrigger_PuzzleMemory.BP_Structure_EncounterTrigger_PuzzleMemory_C.ExecuteUbergraph_BP_Structure_EncounterTrigger_PuzzleMemory
struct ABP_Structure_EncounterTrigger_PuzzleMemory_C_ExecuteUbergraph_BP_Structure_EncounterTrigger_PuzzleMemory_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50CF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable;                                // 0x8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_2;               // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_3;               // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50D1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable_1;                              // 0x14(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_4;               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_5;               // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50D2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable_2;                              // 0x20(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     CallFunc_Map_Find_Value;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50D4[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                CallFunc_AVFXParams_S_EncounterAVFXParams;         // 0x40(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50D5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                CallFunc_AVFXParams_S_EncounterAVFXParams_1;       // 0xF0(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50D6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                CallFunc_AVFXParams_S_EncounterAVFXParams_2;       // 0x1A0(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50D8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                CallFunc_AVFXParams_S_EncounterAVFXParams_3;       // 0x250(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50D9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                CallFunc_AVFXParams_S_EncounterAVFXParams_4;       // 0x300(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50DA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                CallFunc_AVFXParams_S_EncounterAVFXParams_5;       // 0x3B0(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50DB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                CallFunc_AVFXParams_S_EncounterAVFXParams_6;       // 0x460(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50DC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_6;               // 0x511(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50DD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     CallFunc_Map_Find_Value_1;                         // 0x518(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x520(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50DE[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                CallFunc_AVFXParams_S_EncounterAVFXParams_7;       // 0x530(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50E0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_HasAuthority_ReturnValue_7;               // 0x5E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50E1[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                CallFunc_AVFXParams_S_EncounterAVFXParams_8;       // 0x5F0(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50E2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                CallFunc_AVFXParams_S_EncounterAVFXParams_9;       // 0x6A0(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50E3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                CallFunc_AVFXParams_S_EncounterAVFXParams_10;      // 0x750(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50E4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                CallFunc_AVFXParams_S_EncounterAVFXParams_11;      // 0x800(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50E5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable_3;                              // 0x8B0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     CallFunc_Map_Find_Value_2;                         // 0x8B8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x8C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50E6[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                CallFunc_AVFXParams_S_EncounterAVFXParams_12;      // 0x8D0(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50E7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                CallFunc_AVFXParams_S_EncounterAVFXParams_13;      // 0x980(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50E8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScopedAkComponent*                    CallFunc_GetEncounterScopedAk_ScopedAk;            // 0xA38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0xA40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50EA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0xA60(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_EncounterAVFXParams                K2Node_MakeStruct_S_EncounterAVFXParams;           // 0xAC0(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_50EB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     CallFunc_Map_Find_Value_3;                         // 0xB70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_3;                   // 0xB78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_CustomEvent_VFX_Instability;                // 0xB7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_8;               // 0xB80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


