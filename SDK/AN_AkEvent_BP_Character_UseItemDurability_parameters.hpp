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

// 0x6C (0x6C - 0x0)
// Function AN_AkEvent_BP_Character_UseItemDurability.AN_AkEvent_BP_Character_UseItemDurability_C.ApplyAdditionalRTPCs
struct UAN_AkEvent_BP_Character_UseItemDurability_C_ApplyAdditionalRTPCs_Params
{
public:
	class USkeletalMeshComponent*                MeshComponent;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                          AkComponent;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       Durability;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEquippableItem*                       Temp_object_Variable;                              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FItemInstanceDurabilityData           CallFunc_TryGetItemDurability_Durability;          // 0x28(0x10)(NoDestructor)
	enum class EGetResult                        CallFunc_TryGetItemDurability_Branches;            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A4CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface;       // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A4CC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEquippableItem*                       CallFunc_GetEquippedItem_ReturnValue;              // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_Durability_ImplicitCast;        // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetRTPCValue_Value_ImplicitCast;          // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


