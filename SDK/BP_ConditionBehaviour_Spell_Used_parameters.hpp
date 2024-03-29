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

// 0x191 (0x191 - 0x0)
// Function BP_ConditionBehaviour_Spell_Used.BP_ConditionBehaviour_Spell_Used_C.GetDebugText
struct UBP_ConditionBehaviour_Spell_Used_C_GetDebugText_Params
{
public:
	class FText                                  Description;                                       // 0x0(0x18)(Parm, OutParm)
	class FString                                CallFunc_Conv_SoftObjectReferenceToString_ReturnValue; // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x30(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x48(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x98(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xE8(0x10)(ReferenceParm)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x100(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x118(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x168(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x178(0x18)(None)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x45 (0x45 - 0x0)
// Function BP_ConditionBehaviour_Spell_Used.BP_ConditionBehaviour_Spell_Used_C.OnSpellCasted
struct UBP_ConditionBehaviour_Spell_Used_C_OnSpellCasted_Params
{
public:
	TSoftObjectPtr<class UTechniqueDataAsset>    SpellCastedTechnique;                              // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UFishDataAsset*                        FishAsset;                                         // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_SoftObjectReference_ReturnValue; // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ConditionBehaviour_Spell_Used.BP_ConditionBehaviour_Spell_Used_C.InitializeFromPersistence
struct UBP_ConditionBehaviour_Spell_Used_C_InitializeFromPersistence_Params
{
public:
	struct FConditionPersistentData              UpdatedProgressData;                               // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x51 (0x51 - 0x0)
// Function BP_ConditionBehaviour_Spell_Used.BP_ConditionBehaviour_Spell_Used_C.ExecuteUbergraph_BP_ConditionBehaviour_Spell_Used
struct UBP_ConditionBehaviour_Spell_Used_C_ExecuteUbergraph_BP_ConditionBehaviour_Spell_Used_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3E2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerState_C*                     CallFunc_GetConditionPlayerState_PlayerState;      // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerState_C*                     CallFunc_GetConditionPlayerState_PlayerState_1;    // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerState_C*                     CallFunc_GetConditionPlayerState_PlayerState_2;    // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FConditionPersistentData              K2Node_Event_UpdatedProgressData;                  // 0x48(0x8)(ConstParm, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


