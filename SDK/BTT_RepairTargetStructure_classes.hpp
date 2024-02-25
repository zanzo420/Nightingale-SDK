#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xD0 - 0xA8)
// BlueprintGeneratedClass BTT_RepairTargetStructure.BTT_RepairTargetStructure_C
class UBTT_RepairTargetStructure_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAbilitySystemComponent*               AbilitySystem;                                     // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          RepairTag;                                         // 0xB8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimeoutHandle;                                     // 0xC0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNWXAbilitySystemComponent*            NWXAbilitySystem;                                  // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_RepairTargetStructure_C* GetDefaultObj();

	void OnAbilityEnded(class UGameplayAbility* Ability, class UNWXGameplayAbility* K2Node_DynamicCast_AsNWXGameplay_Ability, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAbilityTag_ReturnValue);
	void TimeoutAction();
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_RepairTargetStructure(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UNWXAbilitySystemComponent* K2Node_DynamicCast_AsNWXAbility_System_Component, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool CallFunc_TryActivateAbilitiesByTag_ReturnValue);
};

}


