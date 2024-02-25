#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_StructureTraitAuraEffect_CalculateEstateScore.BP_StructureTraitAuraEffect_CalculateEstateScore_C
class UBP_StructureTraitAuraEffect_CalculateEstateScore_C : public UStructureTraitAuraEffect
{
public:

	static class UClass* StaticClass();
	static class UBP_StructureTraitAuraEffect_CalculateEstateScore_C* GetDefaultObj();

	void OnObjectLeaveAura(class UObject* Object, class UStructureTraitAuraComponent* LastAuraComponentEncountered, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, TScriptInterface<class IStructureEstateInterface> K2Node_DynamicCast_AsStructure_Estate_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureEstateComponent* CallFunc_GetStructureEstateComponentForModify_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnObjectEnterAura(class UObject* Object, class UStructureTraitAuraComponent* AuraComponent, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, TScriptInterface<class IStructureEstateInterface> K2Node_DynamicCast_AsStructure_Estate_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureEstateComponent* CallFunc_GetStructureEstateComponentForModify_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


