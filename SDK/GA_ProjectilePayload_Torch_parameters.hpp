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

// 0x468 (0x468 - 0x0)
// Function GA_ProjectilePayload_Torch.GA_ProjectilePayload_Torch_C.HandleProjectileImpact
struct UGA_ProjectilePayload_Torch_C_HandleProjectileImpact_Params
{
public:
	struct FItemDataReference                    TorchITM;                                          // 0x0(0x80)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x88(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ProjectileBase_Torch_C*            K2Node_DynamicCast_AsBP_Projectile_Base_Torch;     // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xB0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UItemInstanceData*>             Temp_object_Variable;                              // 0xC8(0x10)(ConstParm, ReferenceParm)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0xD8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInventoryEntry                       CallFunc_CreateNewItemEntry_NewEntry;              // 0xF0(0x2F0)(None)
	enum class EGetResult                        CallFunc_CreateNewItemEntry_OutBranch;             // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52B0[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x3F0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x458(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_ItemProxy_Simple_Torch_C*          CallFunc_FinishSpawningActor_ReturnValue;          // 0x460(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


