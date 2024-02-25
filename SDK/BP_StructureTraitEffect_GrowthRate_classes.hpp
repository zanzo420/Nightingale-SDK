#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_StructureTraitEffect_GrowthRate.BP_StructureTraitEffect_GrowthRate_C
class UBP_StructureTraitEffect_GrowthRate_C : public UStructureTraitEffect
{
public:

	static class UClass* StaticClass();
	static class UBP_StructureTraitEffect_GrowthRate_C* GetDefaultObj();

	void OnTraitRemoved(class AActor* OwningActor, struct FStructureTrait& Trait, TScriptInterface<class IEnvironmentalInfluenceReceiver> K2Node_DynamicCast_AsEnvironmental_Influence_Receiver, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsStructureActorInPlacement_ReturnValue);
	void OnTraitAdded(class AActor* OwningActor, struct FStructureTrait& Trait, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsStructureActorInPlacement_ReturnValue, TScriptInterface<class IEnvironmentalInfluenceReceiver> K2Node_DynamicCast_AsEnvironmental_Influence_Receiver, bool K2Node_DynamicCast_bSuccess);
};

}


