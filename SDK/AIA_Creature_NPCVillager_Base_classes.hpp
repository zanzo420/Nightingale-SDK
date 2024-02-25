#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC0 - 0xB8)
// BlueprintGeneratedClass AIA_Creature_NPCVillager_Base.AIA_Creature_NPCVillager_Base_C
class UAIA_Creature_NPCVillager_Base_C : public UAIA_CreatureBase_C
{
public:
	class AAIC_Creature_NPC_Villager_C*          NPCController;                                     // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIA_Creature_NPCVillager_Base_C* GetDefaultObj();

	bool Initialize(class AAIC_Creature_NPC_Villager_C* K2Node_DynamicCast_AsAIC_Creature_NPC_Villager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Initialize_ReturnValue);
	void GetNPCGroup(class ABP_CreatureSpawner_NPCGroup_C** NPCGroup, class ABP_CreatureSpawner_NPCGroup_C* K2Node_DynamicCast_AsBP_Creature_Spawner_NPCGroup, bool K2Node_DynamicCast_bSuccess);
};

}


