#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x418 - 0x408)
// BlueprintGeneratedClass BPTA_GameplayEventReceived.BPTA_GameplayEventReceived_C
class ABPTA_GameplayEventReceived_C : public ABPTA_TargetingActorLogic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          TagToSend;                                         // 0x410(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPTA_GameplayEventReceived_C* GetDefaultObj();

	void GetTagToSend(bool* Success, struct FGameplayTag* TagToSend, class UGameplayAbility* CallFunc_GetOwningAbility_ReturnValue, class UGA_SwingMeleeWeapon_C* K2Node_DynamicCast_AsGA_Swing_Melee_Weapon, bool K2Node_DynamicCast_bSuccess);
	void ConfirmAndSendTargetData(struct FGameplayAbilityTargetDataHandle* TargetData, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromGameplayTag_ReturnValue);
	void ReceiveStartTargeting(class UGameplayAbility* Ability);
	void ExecuteUbergraph_BPTA_GameplayEventReceived(int32 EntryPoint, class UGameplayAbility* K2Node_Event_Ability, bool CallFunc_GetTagToSend_Success, const struct FGameplayTag& CallFunc_GetTagToSend_TagToSend);
};

}


