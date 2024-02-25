#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA8 - 0xA0)
// BlueprintGeneratedClass BTD_IsResourceBeaconHarvestLocationValid.BTD_IsResourceBeaconHarvestLocationValid_C
class UBTD_IsResourceBeaconHarvestLocationValid_C : public UBTDecorator_BlueprintBase
{
public:
	class AAIC_Creature_NPC_Villager_C*          AICVillager;                                       // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTD_IsResourceBeaconHarvestLocationValid_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class AAIC_Creature_NPC_Villager_C* K2Node_DynamicCast_AsAIC_Creature_NPC_Villager, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_ResourceNode_C> K2Node_DynamicCast_AsBPI_Resource_Node, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsInstanceHarvestable_IsHarvestable);
};

}


