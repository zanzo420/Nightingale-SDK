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

// 0x1 (0x1 - 0x0)
// Function ANS_ComboWindow.ANS_ComboWindow_C.IncrementCounter
struct UANS_ComboWindow_C_IncrementCounter_Params
{
public:
	bool                                         IncrementCounter;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ANS_ComboWindow.ANS_ComboWindow_C.BlendIntoSection
struct UANS_ComboWindow_C_BlendIntoSection_Params
{
public:
	bool                                         BlendIntoSection;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ANS_ComboWindow.ANS_ComboWindow_C.ComboOnInput
struct UANS_ComboWindow_C_ComboOnInput_Params
{
public:
	bool                                         ComboOnInput;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12C (0x12C - 0x0)
// Function ANS_ComboWindow.ANS_ComboWindow_C.Received_NotifyBegin
struct UANS_ComboWindow_C_Received_NotifyBegin_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        TotalDuration;                                     // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7153[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNotifyEventReference             EventReference;                                    // 0x18(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7154[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x58(0xD0)(None)
	int32                                        CallFunc_SendGameplayEventToActor_ReturnValue;     // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

