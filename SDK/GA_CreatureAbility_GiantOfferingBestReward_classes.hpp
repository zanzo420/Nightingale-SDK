#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x600 - 0x510)
// BlueprintGeneratedClass GA_CreatureAbility_GiantOfferingBestReward.GA_CreatureAbility_GiantOfferingBestReward_C
class UGA_CreatureAbility_GiantOfferingBestReward_C : public UGA_CreatureAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x510(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	uint8                                        Pad_808A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkillDataReference                   SkillReference;                                    // 0x520(0xE0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_GiantOfferingBestReward_C* GetDefaultObj();

	void HandleEvent(const struct FGameplayTag& EventTags, const struct FGameplayEventData& EventData, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess);
	void SpawnReward(class ANWXPlayerState* PlayerState, const struct FInventoryEntry& LItem, int32 LIndex, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_CreatureAbility_GiantOfferingBestReward(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, const struct FGameplayTag& Temp_struct_Variable_4, bool K2Node_Event_bWasCancelled, class ABP_Creature_Wildlife_SunGiant_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Sun_Giant, bool K2Node_DynamicCast_bSuccess);
};

}


