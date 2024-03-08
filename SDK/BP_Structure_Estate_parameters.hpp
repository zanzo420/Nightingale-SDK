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

// 0x8 (0x8 - 0x0)
// Function BP_Structure_Estate.BP_Structure_Estate_C.GetRealmCardMachineComponent
struct ABP_Structure_Estate_C_GetRealmCardMachineComponent_Params
{
public:
	class URealmCardMachineComponent*            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function BP_Structure_Estate.BP_Structure_Estate_C.GetPlayerSpawnTransform
struct ABP_Structure_Estate_C_GetPlayerSpawnTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x60(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Structure_Estate.BP_Structure_Estate_C.GetPortalController
struct ABP_Structure_Estate_C_GetPortalController_Params
{
public:
	class UPortalControllerComponent*            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Structure_Estate.BP_Structure_Estate_C.GetStructureEstateComponent
struct ABP_Structure_Estate_C_GetStructureEstateComponent_Params
{
public:
	class UStructureEstateComponent*             ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Structure_Estate.BP_Structure_Estate_C.GetStructureEstateComponentForModify
struct ABP_Structure_Estate_C_GetStructureEstateComponentForModify_Params
{
public:
	class UStructureEstateComponent*             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function BP_Structure_Estate.BP_Structure_Estate_C.GetDisplayNameText
struct ABP_Structure_Estate_C_GetDisplayNameText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FString                                CallFunc_GetLocalPlayerPersistentId_PlayerId;      // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetOwningPlayerID_OutPlayerId;            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetOwningPlayerID_ReturnValue;            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A471[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetDisplayNameText_ReturnValue;           // 0x40(0x18)(None)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function BP_Structure_Estate.BP_Structure_Estate_C.OnInit
struct ABP_Structure_Estate_C_OnInit_Params
{
public:
	class UObject*                               Structure;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsStructureComplete_ReturnValue;       // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Structure_Estate.BP_Structure_Estate_C.GetStructureTraitAuraCollider
struct ABP_Structure_Estate_C_GetStructureTraitAuraCollider_Params
{
public:
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Structure_Estate.BP_Structure_Estate_C.GetStructureTraitAuraColliderForModify
struct ABP_Structure_Estate_C_GetStructureTraitAuraColliderForModify_Params
{
public:
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BP_Structure_Estate.BP_Structure_Estate_C.InitializeEstateBounds
struct ABP_Structure_Estate_C_InitializeEstateBounds_Params
{
public:
	bool                                         CallFunc_GetTraitInitData_IsValid;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A472[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructureTraitInitData*               CallFunc_GetTraitInitData_OutTraitInitData;        // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A473[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetCollisionProfileName_ProfileName;      // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A474[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_Structure_Estate.BP_Structure_Estate_C.OnStateChange
struct ABP_Structure_Estate_C_OnStateChange_Params
{
public:
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsStructureComplete_ReturnValue;       // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function BP_Structure_Estate.BP_Structure_Estate_C.ExecuteUbergraph_BP_Structure_Estate
struct ABP_Structure_Estate_C_ExecuteUbergraph_BP_Structure_Estate_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


