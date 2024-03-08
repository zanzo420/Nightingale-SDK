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

// 0x182 (0x182 - 0x0)
// Function BP_Structure_EncounterTrigger_Button.BP_Structure_EncounterTrigger_Button_C.CanInteractWithActor
struct ABP_Structure_EncounterTrigger_Button_C_CanInteractWithActor_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInteractionData                      InteractionData;                                   // 0x8(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                         InteractAvailable;                                 // 0x180(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F0 (0x1F0 - 0x0)
// Function BP_Structure_EncounterTrigger_Button.BP_Structure_EncounterTrigger_Button_C.AVFXParams
struct ABP_Structure_EncounterTrigger_Button_C_AVFXParams_Params
{
public:
	struct FS_EncounterAVFXParams                S_EncounterAVFXParams;                             // 0x0(0xA8)(Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_A508[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScopedAkComponent*                    CallFunc_GetEncounterScopedAk_ScopedAk;            // 0xB0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A509[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0xC0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x120(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A50A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                K2Node_MakeStruct_S_EncounterAVFXParams;           // 0x140(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_A50B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function BP_Structure_EncounterTrigger_Button.BP_Structure_EncounterTrigger_Button_C.Call Interact VFX
struct ABP_Structure_EncounterTrigger_Button_C_Call_Interact_VFX_Params
{
public:
	class ABP_Structure_EncounterTrigger_C*      Triggering_Structure;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x192 (0x192 - 0x0)
// Function BP_Structure_EncounterTrigger_Button.BP_Structure_EncounterTrigger_Button_C.ExecuteUbergraph_BP_Structure_EncounterTrigger_Button
struct ABP_Structure_EncounterTrigger_Button_C_ExecuteUbergraph_BP_Structure_EncounterTrigger_Button_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A50C[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                CallFunc_AVFXParams_S_EncounterAVFXParams;         // 0x10(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_A50D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_EncounterAVFXParams                CallFunc_AVFXParams_S_EncounterAVFXParams_1;       // 0xC0(0xA8)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_A50E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_2;               // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A50F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x174(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A510[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Structure_EncounterTrigger_C*      K2Node_CustomEvent_Triggering_Structure;           // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_3;               // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


