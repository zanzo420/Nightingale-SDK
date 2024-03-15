#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x258 (0x300 - 0xA8)
// BlueprintGeneratedClass BTT_GetResourceBeaconHarvestLocation.BTT_GetResourceBeaconHarvestLocation_C
class UBTT_GetResourceBeaconHarvestLocation_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                Target;                                            // 0xB0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                TargetLocation;                                    // 0xD8(0x28)(Edit, BlueprintVisible)
	class AAIC_Creature_NPC_Villager_C*          AICVillager;                                       // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       DistanceFromSnapPoint;                             // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 LControlledPawn;                                   // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_Creature_NPC_C*                    Creature_NPC;                                      // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_ResourceNode_IIM_C*                Resource_Node_IIM;                                 // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Resource_Available;                                // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A871[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_ResourceNodeIIMBase_C*             Resource_Node;                                     // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Resource_Location;                                 // 0x138(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Resource_Index;                                    // 0x150(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A872[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInstancedResourceNodeComponent*       Instanced_Resource_Node;                           // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FIIMInstance                          Out_Instance;                                      // 0x160(0x170)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_Creature_NPC_Villager_C*           As_BP_Creature_NPC_Villager;                       // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                IsResourceTree;                                    // 0x2D8(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBTT_GetResourceBeaconHarvestLocation_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_GetResourceBeaconHarvestLocation(int32 EntryPoint, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AAIC_Creature_NPC_Villager_C* K2Node_DynamicCast_AsAIC_Creature_NPC_Villager, bool K2Node_DynamicCast_bSuccess_1, class UInstancedResourceNodeComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsLocationReachableOnNavMesh_ReturnValue, class ABP_ResourceNode_IIM_C* K2Node_DynamicCast_AsBP_Resource_Node_IIM, bool K2Node_DynamicCast_bSuccess_2, const struct FIIMInstance& CallFunc_GetInstance_OutInstance, bool CallFunc_GetInstance_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class ABP_Creature_NPC_Villager_C* K2Node_DynamicCast_AsBP_Creature_NPC_Villager, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_DoesInstanceMatchResourceType_bDidMatch);
};

}


