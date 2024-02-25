#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x510 - 0x510)
// BlueprintGeneratedClass GA_CreatureAbility_Harpy_DropItem.GA_CreatureAbility_Harpy_DropItem_C
class UGA_CreatureAbility_Harpy_DropItem_C : public UGA_CreatureAbilityBase_C
{
public:

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Harpy_DropItem_C* GetDefaultObj();

	void HandleEvent(const struct FGameplayTag& EventTags, const struct FGameplayEventData& EventData, class ABP_Creature_Wildlife_Harpy_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Harpy, bool K2Node_DynamicCast_bSuccess, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess);
};

}


