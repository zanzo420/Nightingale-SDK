#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_StructureTraitAuraEffect_EstateTelemetry.BP_StructureTraitAuraEffect_EstateTelemetry_C
class UBP_StructureTraitAuraEffect_EstateTelemetry_C : public UStructureTraitAuraEffect
{
public:

	static class UClass* StaticClass();
	static class UBP_StructureTraitAuraEffect_EstateTelemetry_C* GetDefaultObj();

	void OnObjectLeaveAura(class UObject* Object, class UStructureTraitAuraComponent* LastAuraComponentEncountered, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void OnObjectEnterAura(class UObject* Object, class UStructureTraitAuraComponent* AuraComponent, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
};

}


