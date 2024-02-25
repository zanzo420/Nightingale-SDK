#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0xD1 - 0xC0)
// BlueprintGeneratedClass AIA_Creature_NPC_HarvestResource.AIA_Creature_NPC_HarvestResource_C
class UAIA_Creature_NPC_HarvestResource_C : public UAIA_Creature_NPCVillager_Base_C
{
public:
	double                                       MaxContainerDistance;                              // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          ResourceContext;                                   // 0xC8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class E_ResourceFilters                 Resource_Filter;                                   // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIA_Creature_NPC_HarvestResource_C* GetDefaultObj();

	bool CheckOwnerRequirements(float LMaxDistance, const struct FVector& LSearchLocation, class UBP_HarvestComponent_C* LHarvestComponent, class ABP_CreatureSpawner_NPCGroup_C* LNPCGroup, const struct FVector& CallFunc_GetCompanionSearchParameters_SearchLocation, float CallFunc_GetCompanionSearchParameters_SearchRadius, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Get_Eligible_Resource_Nodes_Success, const struct FVector& CallFunc_Get_Eligible_Resource_Nodes_NearestLocation, class ABP_ResourceNodeIIMBase_C* CallFunc_Get_Eligible_Resource_Nodes_ResourceNode, int32 CallFunc_Get_Eligible_Resource_Nodes_NearestIndex, class UBP_HarvestComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_CheckOwnerRequirements_ReturnValue, float CallFunc_GetCompanionSearchParameters_DesiredSearchRadius_ImplicitCast, double CallFunc_Get_Eligible_Resource_Nodes_MaxDistance_ImplicitCast);
	bool CheckStaticTargetRequirements(class AActor* Target, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	float GetNormalizedScore(class AActor* Target);
};

}


