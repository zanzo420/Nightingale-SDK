#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass BP_StructureTraitEffect_CreatureSuppression.BP_StructureTraitEffect_CreatureSuppression_C
class UBP_StructureTraitEffect_CreatureSuppression_C : public UStructureTraitEffect
{
public:
	struct FSuppressionTraitChangedProperties    Suppression_Trait_Changed_Properties;              // 0x28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_StructureTraitEffect_CreatureSuppression_C* GetDefaultObj();

	void OnTraitRemoved(class AActor* OwningActor, struct FStructureTrait& Trait, class ANWXCreatureManagerBase* LCreatureManager, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsStructureActorInPlacement_ReturnValue, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetStructureType_IsValid, class UStructureTypeData* CallFunc_GetStructureType_OutStructureType, float CallFunc_GetCreatureSuppressionRadius_ReturnValue, const struct FSuppressionTraitChangedProperties& CallFunc_MakeSuppressionTraitChangedProperties_ReturnValue, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnTraitAdded(class AActor* OwningActor, struct FStructureTrait& Trait, class ANWXCreatureManagerBase* LCreatureManager, bool CallFunc_IsValid_ReturnValue, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_ReturnValue, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetStructureType_IsValid, class UStructureTypeData* CallFunc_GetStructureType_OutStructureType, bool CallFunc_IsStructureActorInPlacement_ReturnValue, float CallFunc_GetCreatureSuppressionRadius_ReturnValue, const struct FSuppressionTraitChangedProperties& CallFunc_MakeSuppressionTraitChangedProperties_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


