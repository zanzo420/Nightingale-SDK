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

// 0x10 (0x10 - 0x0)
// Function BTT_GetResourceBeaconHarvestLocation.BTT_GetResourceBeaconHarvestLocation_C.ReceiveExecuteAI
struct UBTT_GetResourceBeaconHarvestLocation_C_ReceiveExecuteAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x22A (0x22A - 0x0)
// Function BTT_GetResourceBeaconHarvestLocation.BTT_GetResourceBeaconHarvestLocation_C.ExecuteUbergraph_BTT_GetResourceBeaconHarvestLocation
struct UBTT_GetResourceBeaconHarvestLocation_C_ExecuteUbergraph_BTT_GetResourceBeaconHarvestLocation_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_225F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetBlackboardValueAsObject_ReturnValue;   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Creature_NPC_C*                    K2Node_DynamicCast_AsBP_Creature_NPC;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2260[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAIController*                         K2Node_Event_OwnerController;                      // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 K2Node_Event_ControlledPawn;                       // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAIC_Creature_NPC_Villager_C*          K2Node_DynamicCast_AsAIC_Creature_NPC_Villager;    // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2261[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInstancedResourceNodeComponent*       CallFunc_GetComponentByClass_ReturnValue;          // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocationReachableOnNavMesh_ReturnValue; // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2262[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_ResourceNode_IIM_C*                K2Node_DynamicCast_AsBP_Resource_Node_IIM;         // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2263[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIIMInstance                          CallFunc_GetInstance_OutInstance;                  // 0x60(0x170)(None)
	bool                                         CallFunc_GetInstance_ReturnValue;                  // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2264[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x1D8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x1F0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x208(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Creature_NPC_Villager_C*           K2Node_DynamicCast_AsBP_Creature_NPC_Villager;     // 0x220(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesInstanceMatchResourceType_bDidMatch;  // 0x229(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


