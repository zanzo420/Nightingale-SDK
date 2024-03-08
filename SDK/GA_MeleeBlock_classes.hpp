#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3BA (0xA32 - 0x678)
// BlueprintGeneratedClass GA_MeleeBlock.GA_MeleeBlock_C
class UGA_MeleeBlock_C : public UGA_TechniqueBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x678(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Character_C*                       PlayerCharacter;                                   // 0x680(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionTypes                 ShoveInputSlot;                                    // 0x688(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A6D9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTechniqueDataAsset>    ShoveTechniqueAsset;                               // 0x690(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_A6DA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    UnarmedReference;                                  // 0x6C0(0x80)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FInventoryEntry                       Item_Entry;                                        // 0x740(0x2F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         BlockStarted;                                      // 0xA30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_BlockInjuries                Last_Block_Injury;                                 // 0xA31(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_MeleeBlock_C* GetDefaultObj();

	void BlockReaction(class AActor* Actor, class UCurveFloat* StrengthCurve, const struct FTagValueContainer& LTagValue, const struct FGameplayTagContainer& LEffectTags, TArray<struct FGameplayEffectCue>& Temp_struct_Variable, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class ANWXGameStateBase* CallFunc_GetGameState_GameState, int32 CallFunc_GetCurrentRealmPower_RealmPower, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FGameplayTag& CallFunc_StrengthTag_StrengthTag, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_Add_Value_ImplicitCast);
	void PlayBlockReactionAnimation(double DamageBlocked, const class FString& CallFunc_GetItemIdDebugString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, class ANWXPlayerController* CallFunc_GetPlayerControllerFromCharacter_PlayerController, double CallFunc_SafeDivide_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_SafeDivide_ReturnValue_1, double CallFunc_FMax_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_GetMontageSetForAction_bFoundMontageSet, const struct FAbilityMontages& CallFunc_GetMontageSetForAction_MontageSetForAction, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomFirstPersonItem, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomFirstPersonCharacter, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomThirdPersonItem, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomThirdPersonCharacter, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_SafeDivide_A_ImplicitCast, float CallFunc_ClientStartCameraShake_Scale_ImplicitCast);
	void ApplyBlockStaminaCost(double DamageBlocked, const struct FGameplayAttribute& Temp_struct_Variable, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, float CallFunc_CalculateItemAttributeValue_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_CalculateMeleeBlockStaminaCost_Cost, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast);
	void CharacterEndBlockEvent(bool CallFunc_IsValid_ReturnValue);
	void CharacterStartBlockEvent(bool CallFunc_IsValid_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue);
	bool ShouldGiveShoveTechnique(bool CallFunc_EqualEqual_FItemDataReference_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void EventReceived_1FBA6C404E89DE32912F50AC2BF22923(const struct FGameplayEventData& Payload);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void DamageBlocked(double AmountBlocked, class AActor* AttackingActor);
	void ExecuteUbergraph_GA_MeleeBlock(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, const class FString& CallFunc_Conv_ObjectToString_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool K2Node_Event_bWasCancelled, double K2Node_CustomEvent_AmountBlocked, class AActor* K2Node_CustomEvent_AttackingActor, bool CallFunc_ShouldGiveShoveTechnique_ReturnValue, const struct FGameplayEventData& K2Node_CustomEvent_Payload, bool CallFunc_ShouldGiveShoveTechnique_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, const struct FGameplayEventData& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_5);
};

}


