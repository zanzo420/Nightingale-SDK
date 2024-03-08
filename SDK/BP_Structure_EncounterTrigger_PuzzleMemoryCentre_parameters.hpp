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

// 0x30 (0x30 - 0x0)
// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.Get Hope Echo Target
struct ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C_Get_Hope_Echo_Target_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.SetAudioState
struct ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C_SetAudioState_Params
{
public:
	class UAkSwitchValue*                        SwitchValue;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    CallFunc_GetEncounterScopedAk_ScopedAk;            // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.Assign Puzzle Beam
struct ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C_Assign_Puzzle_Beam_Params
{
public:
	struct FVector                               Piece_Vector;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Piece_Index;                                       // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.OnRep_PuzzleBeamVFXVectors
struct ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C_OnRep_PuzzleBeamVFXVectors_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Array_Get_Item;                           // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.Puzzle Piece Beam VFX
struct ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C_Puzzle_Piece_Beam_VFX_Params
{
public:
	class FName                                  Piece_Name;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.Add Puzzle Beam
struct ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C_Add_Puzzle_Beam_Params
{
public:
	struct FVector                               Piece_Vector;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Piece_Index;                                       // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.Remove Puzzle Beam
struct ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C_Remove_Puzzle_Beam_Params
{
public:
	int32                                        Piece_Index;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD24 (0xD24 - 0x0)
// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.ExecuteUbergraph_BP_Structure_EncounterTrigger_PuzzleMemoryCentre
struct ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C_ExecuteUbergraph_BP_Structure_EncounterTrigger_PuzzleMemoryCentre_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Piece_Index;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E6F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_Piece_Name;                     // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E70[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     CallFunc_Map_Find_Value;                           // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E71[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable;                                // 0x4C(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E72[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     CallFunc_Map_Find_Value_1;                         // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E73[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x80(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_2;               // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E74[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable_1;                              // 0xE4(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_3;               // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E75[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     CallFunc_Map_Find_Value_2;                         // 0xF0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E76[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x100(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E77[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_1;     // 0x120(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x180(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Map_Find_Value_3;                         // 0x190(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_3;                   // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E78[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_4;               // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E79[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x1B8(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_5;               // 0x1D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E7A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_2;    // 0x1D8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_2;     // 0x1F0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_6;               // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x251(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E7B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_3;    // 0x258(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_3;     // 0x270(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_4;    // 0x2D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E7C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_4;     // 0x2F0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_5;    // 0x350(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E7D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_5;     // 0x370(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_6;    // 0x3D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E7E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_6;     // 0x3F0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_7;    // 0x450(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_8;    // 0x468(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_7;     // 0x480(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_8;     // 0x4E0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    CallFunc_GetEncounterScopedAk_ScopedAk;            // 0x540(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_9;    // 0x548(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_EncounterAVFXParams                K2Node_MakeStruct_S_EncounterAVFXParams;           // 0x560(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_9E7F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_9;     // 0x610(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    CallFunc_GetEncounterScopedAk_ScopedAk_1;          // 0x670(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    CallFunc_GetEncounterScopedAk_ScopedAk_2;          // 0x678(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_EncounterAVFXParams                K2Node_MakeStruct_S_EncounterAVFXParams_1;         // 0x680(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_9E81[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                K2Node_MakeStruct_S_EncounterAVFXParams_2;         // 0x730(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_9E83[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScopedAkComponent*                    CallFunc_GetEncounterScopedAk_ScopedAk_3;          // 0x7E0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    CallFunc_GetEncounterScopedAk_ScopedAk_4;          // 0x7E8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_EncounterAVFXParams                K2Node_MakeStruct_S_EncounterAVFXParams_3;         // 0x7F0(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_9E84[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                K2Node_MakeStruct_S_EncounterAVFXParams_4;         // 0x8A0(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_9E86[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScopedAkComponent*                    CallFunc_GetEncounterScopedAk_ScopedAk_5;          // 0x950(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    CallFunc_GetEncounterScopedAk_ScopedAk_6;          // 0x958(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_EncounterAVFXParams                K2Node_MakeStruct_S_EncounterAVFXParams_5;         // 0x960(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_9E88[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                K2Node_MakeStruct_S_EncounterAVFXParams_6;         // 0xA10(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_9E89[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScopedAkComponent*                    CallFunc_GetEncounterScopedAk_ScopedAk_7;          // 0xAC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    CallFunc_GetEncounterScopedAk_ScopedAk_8;          // 0xAC8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FS_EncounterAVFXParams                K2Node_MakeStruct_S_EncounterAVFXParams_7;         // 0xAD0(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_9E8A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                K2Node_MakeStruct_S_EncounterAVFXParams_8;         // 0xB80(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_9E8B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScopedAkComponent*                    CallFunc_GetEncounterScopedAk_ScopedAk_9;          // 0xC30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E8C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                K2Node_MakeStruct_S_EncounterAVFXParams_9;         // 0xC40(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_9E8D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xCF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E8E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_CustomEvent_Piece_Vector;                   // 0xCF8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Piece_Index_1;                  // 0xD10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xD14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xD18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E8F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xD20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


