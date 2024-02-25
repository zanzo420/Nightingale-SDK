#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_StructureTraitEffect_Decoration.BP_StructureTraitEffect_Decoration_C
class UBP_StructureTraitEffect_Decoration_C : public UStructureTraitEffect
{
public:

	static class UClass* StaticClass();
	static class UBP_StructureTraitEffect_Decoration_C* GetDefaultObj();

	void AddModifiers(class UObject* Target, uint8 CurrentStack, struct FStructureTrait& StructureTrait, class UBP_CraftingStationComponent_C* CraftingStationComp, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IEnvironmentalInfluenceReceiver> K2Node_DynamicCast_AsEnvironmental_Influence_Receiver, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IEnvironmentalInfluenceReceiver> K2Node_DynamicCast_AsEnvironmental_Influence_Receiver_1, bool K2Node_DynamicCast_bSuccess_1);
	void RemoveModifiers(class UObject* TargetActor, uint8 CurrentStack, struct FStructureTrait& StructureTrait, class UBP_CraftingStationComponent_C* CraftingStationComp, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IEnvironmentalInfluenceReceiver> K2Node_DynamicCast_AsEnvironmental_Influence_Receiver, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IEnvironmentalInfluenceReceiver> K2Node_DynamicCast_AsEnvironmental_Influence_Receiver_1, bool K2Node_DynamicCast_bSuccess_1);
	void OnTraitAdded(class AActor* OwningActor, struct FStructureTrait& Trait, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsStructureActorInPlacement_ReturnValue);
	void OnTraitRemoved(class AActor* OwningActor, struct FStructureTrait& Trait, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsStructureActorInPlacement_ReturnValue);
	void OnTraitStackChanged(class AActor* OwningActor, struct FStructureTrait& Trait, uint8 PrevStack, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsStructureActorInPlacement_ReturnValue);
};

}


