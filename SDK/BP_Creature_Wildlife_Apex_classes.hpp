#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3E (0x1658 - 0x161A)
// BlueprintGeneratedClass BP_Creature_Wildlife_Apex.BP_Creature_Wildlife_Apex_C
class ABP_Creature_Wildlife_Apex_C : public ABP_Creature_Wildlife_C
{
public:
	uint8                                        Pad_9BCE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_HarvestComponent_C*                BP_HarvestComponent;                               // 0x1620(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ApexComponent_C*                   BP_ApexComponent;                                  // 0x1628(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ApexHarvestNodeInstanceLocation;                   // 0x1630(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ApexHarvestNodeInstance;                           // 0x1648(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BCF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_ResourceNode_IIM_C*                ApexHarvestNode;                                   // 0x1650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Creature_Wildlife_Apex_C* GetDefaultObj();

	void SetHarvestNodeInstanceLocation(const struct FVector& HarvestNodeInstanceLocation);
	void SetHarvestNodeInstancee(int32 HarvestNodeInstance);
	void SetHarvestNode(class ABP_ResourceNode_IIM_C* HarvestNode);
	void GetHarvestNodeInstanceLocation(struct FVector* ApexHarvestNodeInstanceLocation);
	void GetHarvestNodeInstance(int32* HarvestNodeInstance);
	void GetHarvestNode(class ABP_ResourceNodeIIMBase_C** HarvestNode);
};

}


