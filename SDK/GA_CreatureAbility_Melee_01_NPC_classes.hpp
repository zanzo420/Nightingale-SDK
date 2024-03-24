#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x548 - 0x548)
// BlueprintGeneratedClass GA_CreatureAbility_Melee_01_NPC.GA_CreatureAbility_Melee_01_NPC_C
class UGA_CreatureAbility_Melee_01_NPC_C : public UGA_CreatureAbility_Melee_01_C
{
public:

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Melee_01_NPC_C* GetDefaultObj();

	void CreatureAbilityInitialize(bool* bSuccess, class AEquippableItem* Temp_object_Variable, const struct FGameplayAttribute& Temp_struct_Variable, float CallFunc_CalculateItemAttributeValue_ReturnValue, TScriptInterface<class IAICompanionInterface> K2Node_DynamicCast_AsAICompanion_Interface, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, bool CallFunc_CreatureAbilityInitialize_bSuccess, double K2Node_VariableSet_AbilityDamage_ImplicitCast);
};

}


