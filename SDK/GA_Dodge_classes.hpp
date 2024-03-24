#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x160 (0x7D8 - 0x678)
// BlueprintGeneratedClass GA_Dodge.GA_Dodge_C
class UGA_Dodge_C : public UGA_TechniqueBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x678(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               LaunchVector;                                      // 0x680(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            AttackHitResult;                                   // 0x698(0xE8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               ForwardVector;                                     // 0x780(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BaseDodgeForce;                                    // 0x798(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ModifiedDodgeForce;                                // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMovementDirection                DodgeDirection;                                    // 0x7A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5543[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LastTriggerTime;                                   // 0x7B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TimeSinceLastTriggered;                            // 0x7B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer;                                             // 0x7C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_Character_Audio_Component_C*       BPCharacterAudioComponent_Var;                     // 0x7C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CooldownEffectHandle;                              // 0x7D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Dodge_C* GetDefaultObj();

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, const struct FGameplayTagContainer& CallFunc_K2_CanActivateAbility_RelevantTags, bool CallFunc_K2_CanActivateAbility_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class UNWX_CharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_IsFalling_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1);
	void OnFinish_69461B5E45895F4626EB34A8514F1847();
	void EventReceived_2A8B67464B0D949B2E5EC2A1F624D57F(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_2A8B67464B0D949B2E5EC2A1F624D57F(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_2A8B67464B0D949B2E5EC2A1F624D57F(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_2A8B67464B0D949B2E5EC2A1F624D57F(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_2A8B67464B0D949B2E5EC2A1F624D57F(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Dodge(int32 EntryPoint, const struct FGameplayTag& K2Node_CustomEvent_EventTag_4, const struct FGameplayEventData& K2Node_CustomEvent_EventData_4, const struct FGameplayTag& K2Node_CustomEvent_EventTag_3, const struct FGameplayEventData& K2Node_CustomEvent_EventData_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& K2Node_CustomEvent_EventTag_2, const struct FGameplayEventData& K2Node_CustomEvent_EventData_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& K2Node_CustomEvent_EventTag_1, const struct FGameplayEventData& K2Node_CustomEvent_EventData_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTag& K2Node_CustomEvent_EventTag, const struct FGameplayEventData& K2Node_CustomEvent_EventData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayEventData& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, enum class EMovementDirection Temp_byte_Variable, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, class UAnimMontage* Temp_object_Variable_2, class UAnimMontage* Temp_object_Variable_3, class UAnimMontage* Temp_object_Variable_4, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UAbilityTask_ApplyRootMotionConstantForce* CallFunc_ApplyRootMotionConstantForce_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_Emote_Component_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, const struct FVector& CallFunc_GetCurrentAcceleration_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_Vector_IsZero_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UAnimMontage* K2Node_Select_Default, class UNWXPlayMontageAndWaitForEvent* CallFunc_PlayMontageAndWaitForEvent_ReturnValue, class UBP_Character_Audio_Component_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool K2Node_Event_bWasCancelled, double CallFunc_FMax_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_2, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, bool CallFunc_InRange_FloatFloat_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue_1, bool CallFunc_InRange_FloatFloat_ReturnValue_2, bool CallFunc_InRange_FloatFloat_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue_4, float CallFunc_ApplyRootMotionConstantForce_Strength_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_InRange_FloatFloat_Value_ImplicitCast, double CallFunc_InRange_FloatFloat_Value_ImplicitCast_1, double CallFunc_InRange_FloatFloat_Value_ImplicitCast_2, double CallFunc_InRange_FloatFloat_Value_ImplicitCast_3, double CallFunc_InRange_FloatFloat_Value_ImplicitCast_4);
};

}


