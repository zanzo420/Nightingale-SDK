#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xA38 - 0xA28)
// BlueprintGeneratedClass BP_Structure_Functional_PlantBox.BP_Structure_Functional_PlantBox_C
class ABP_Structure_Functional_PlantBox_C : public ABP_Structure_Constructed_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_StructureFarmingComponent_C*       BP_StructureFarmingComponent;                      // 0xA30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Structure_Functional_PlantBox_C* GetDefaultObj();

	void UpdateCraftingDisciplines(class UEnvironmentalInfluenceDataDisciplines* EnvironmentalInfluenceData, bool AddDisciplines);
	void UpdateCraftingModifiers(class UEnvironmentalInfluenceDataCraftingModifiers* EnvironmentalInfluenceData, bool AddModifier);
	void UpdateRefinementModifier();
	void UpdateGrowthTime(class UEnvironmentalInfluenceDataGrowthRate* EnvironmentalInfluenceData, bool AddModifier);
	void ExecuteUbergraph_BP_Structure_Functional_PlantBox(int32 EntryPoint, class UEnvironmentalInfluenceDataGrowthRate* K2Node_Event_EnvironmentalInfluenceData, bool K2Node_Event_AddModifier, bool CallFunc_IsValid_ReturnValue, class UEnvironmentalInfluenceDataDisciplines* K2Node_Event_EnvironmentalInfluenceData_2, bool K2Node_Event_AddDisciplines, class UEnvironmentalInfluenceDataCraftingModifiers* K2Node_Event_EnvironmentalInfluenceData_1, bool K2Node_Event_AddModifier_1);
};

}


