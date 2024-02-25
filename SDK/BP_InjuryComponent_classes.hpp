#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x1A0 - 0xA0)
// BlueprintGeneratedClass BP_InjuryComponent.BP_InjuryComponent_C
class UBP_InjuryComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       SprainedWristDamageThreshold;                      // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BrokenArmDamageThreshold;                          // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SprainedAnkleDamageThreshold;                      // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BrokenLegDamageThreshold;                          // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SprainedAnkleChance;                               // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BrokenLegChance;                                   // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SprainedWristChance;                               // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BrokenArmChance;                                   // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxPoise;                                          // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentPoise;                                      // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAccumulationDataAsset> PoiseAccumulationAsset;                            // 0xF8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	struct FAccumulationHandle                   PoiseAccumulationHandle;                           // 0x120(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E6D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       PoiseDecayRate;                                    // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Character_Audio_Component_C*       AudioComponent;                                    // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               AbilitySystemComponent;                            // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        PossibleRandomRealmCurses;                         // 0x140(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       InjuryDuration;                                    // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxLegInjury_Default;                              // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentLegInjury;                                  // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAccumulationDataAsset> LegInjuryAccumulationAsset;                        // 0x168(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	struct FAccumulationHandle                   LegInjuryAccumulationHandle;                       // 0x190(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E6E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LegInjuryDecayRate;                                // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_InjuryComponent_C* GetDefaultObj();

	void GetLegInjuryCarryover(double LegInjuryDelta, double CurrentInjuryThreshold, double MinInjuryCarryover, double MaxInjuryCarryover, double* LegInjuryCarryover, double CallFunc_GetMaxLegInjury_MaxLegInjury, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_FClamp_ReturnValue);
	void Handle_Fall_Damage(class UCurveFloat* FallDamageCurve, double FallVelocity, double FallDamage, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Abs_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, double CallFunc_GetMaxHealth_MaxHealth, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void UpdateLegInjury(double LegInjuryDelta, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue);
	void SetLegInjury(double LegInjury, double LegInjuryDelta, const struct FHitResult& Temp_struct_Variable, const struct FGameplayTagContainer& Temp_struct_Variable_1, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_2, const struct FTagValueContainer& Temp_struct_Variable_3, const struct FHitResult& Temp_struct_Variable_4, const struct FGameplayTagContainer& Temp_struct_Variable_5, const struct FTagValueContainer& Temp_struct_Variable_6, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_GetLegInjuryCarryover_LegInjuryCarryover, bool CallFunc_HasBrokenLeg_HasBrokenLeg, double CallFunc_GetLegInjuryCarryover_LegInjuryCarryover_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_7, const struct FGameplayTagContainer& Temp_struct_Variable_8, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess, class ANWXActor* CallFunc_GetDamageSource_Falling_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, const struct FHitResult& Temp_struct_Variable_9, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FTagValueContainer& Temp_struct_Variable_10, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_11, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, class ANWXActor* CallFunc_GetDamageSource_Falling_ReturnValue_1, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttribute_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue_3, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags_1, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface_2, bool K2Node_DynamicCast_bSuccess_2, class ANWXActor* CallFunc_GetDamageSource_Falling_ReturnValue_2, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_2, float CallFunc_GetFloatAttribute_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, bool CallFunc_HasSprainedAnkle_HasSprainedAnkle, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, double CallFunc_GetMaxLegInjury_MaxLegInjury, double CallFunc_GetMaxLegInjury_MaxLegInjury_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3, double CallFunc_SafeDivide_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_4, TScriptInterface<class IAccumulationAccessInterface> K2Node_DynamicCast_AsAccumulation_Access_Interface, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_TryUpdateAccumulationInstance_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_DamageActor_BaseDamage_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, float CallFunc_DamageActor_BaseDamage_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2, float CallFunc_DamageActor_BaseDamage_ImplicitCast_2, float CallFunc_TryUpdateAccumulationInstance_NewValue_ImplicitCast);
	void GetMaxLegInjury(double* MaxLegInjury, double CallFunc_GetInjuryResistance_Injury_Resistance, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue);
	void GetInjuryDuration(double* Duration, double CallFunc_GetInjuryResistance_Injury_Resistance, double CallFunc_SafeDivide_ReturnValue);
	void ApplyDisableSpellsCurse(class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue);
	void ApplySprainedAnkle(bool CallFunc_CanOwnerBeInjured_Result, double CallFunc_GetInjuryDuration_Duration, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface, bool K2Node_DynamicCast_bSuccess, const struct FStatusEffectHandle& CallFunc_ApplyTimedStatusEffect_ActiveStatusEffectHandle, bool CallFunc_ApplyTimedStatusEffect_ReturnValue, float CallFunc_ApplyTimedStatusEffect_Duration_ImplicitCast);
	void ApplyBrokenLeg(bool CallFunc_CanOwnerBeInjured_Result, double CallFunc_GetInjuryDuration_Duration, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface, bool K2Node_DynamicCast_bSuccess, const struct FStatusEffectHandle& CallFunc_ApplyTimedStatusEffect_ActiveStatusEffectHandle, bool CallFunc_ApplyTimedStatusEffect_ReturnValue, float CallFunc_ApplyTimedStatusEffect_Duration_ImplicitCast);
	void ApplyInvertedVisionControlCurse(class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue);
	void ApplyInvertedMovementControlCurse(class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue);
	void ApplyDropEquippedItemCurse(class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue);
	void ApplyRandomRealmCurse(TSet<class UClass*> LPossibleCurses, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Set_IsEmpty_ReturnValue, TArray<class UClass*>& CallFunc_Set_ToArray_Result, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Set_Length_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UClass* CallFunc_Array_Get_Item, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, TArray<struct FActiveGameplayEffectHandle>& CallFunc_GetActiveEffectsWithAllTags_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, class UGameplayEffect* CallFunc_GetGameplayEffectFromActiveEffectHandle_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_Set_Remove_ReturnValue);
	void SetPoise(double Poise, TArray<struct FGameplayEffectCue>& Temp_struct_Variable, const struct FTagValueContainer& Temp_struct_Variable_1, const struct FHitResult& Temp_struct_Variable_2, const struct FGameplayTagContainer& Temp_struct_Variable_3, const struct FGameplayTagContainer& Temp_struct_Variable_4, const struct FHitResult& Temp_struct_Variable_5, const struct FTagValueContainer& Temp_struct_Variable_6, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_7, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class ANWXActor* CallFunc_GetDamageSource_ZKill_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, class ANWXActor* CallFunc_GetDamageSource_ZKill_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttribute_ReturnValue_1, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FGameplayTagContainer& Temp_struct_Variable_8, class AActor* CallFunc_GetOwner_ReturnValue_2, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface_2, bool K2Node_DynamicCast_bSuccess_2, class ANWXActor* CallFunc_GetDamageSource_ZKill_ReturnValue_2, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_2, float CallFunc_GetFloatAttribute_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, bool CallFunc_HasSprainedWrist_HasSprainedAnkle, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags_1, const struct FHitResult& Temp_struct_Variable_9, const struct FTagValueContainer& Temp_struct_Variable_10, double CallFunc_GetMaxPoise_Max_Poise, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_11, double CallFunc_GetMaxPoise_Max_Poise_1, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, double CallFunc_GetMaxPoise_Max_Poise_2, double CallFunc_SafeDivide_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_3, TScriptInterface<class IAccumulationAccessInterface> K2Node_DynamicCast_AsAccumulation_Access_Interface, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_TryUpdateAccumulationInstance_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_DamageActor_BaseDamage_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, float CallFunc_DamageActor_BaseDamage_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2, float CallFunc_DamageActor_BaseDamage_ImplicitCast_2, float CallFunc_TryUpdateAccumulationInstance_NewValue_ImplicitCast);
	void GetMaxPoise(double* Max_Poise, class AEquippableItem* Temp_object_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayAttribute& Temp_struct_Variable, float CallFunc_CalculateItemAttributeValue_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, double CallFunc_SelectFloat_ReturnValue, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
	void UpdatePoise(double Poise_Delta, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue);
	void ApplyBlockInjuries(double Blocked_Damage, class AActor* AttackingActor, double PoiseDamage, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, double CallFunc_Add_DoubleDouble_ReturnValue, uint8 CallFunc_GetChallengeRating_ReturnValue, double CallFunc_Conv_ByteToDouble_ReturnValue);
	void CanOwnerBeInjured(bool* Result, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void GetInjuryResistance(double* Injury_Resistance, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double K2Node_FunctionResult_Injury_Resistance_ImplicitCast);
	void ApplySprainedWrist(float Duration, double CallFunc_GetInjuryDuration_Duration, bool CallFunc_CanOwnerBeInjured_Result, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface, bool K2Node_DynamicCast_bSuccess, const struct FStatusEffectHandle& CallFunc_ApplyTimedStatusEffect_ActiveStatusEffectHandle, bool CallFunc_ApplyTimedStatusEffect_ReturnValue, float CallFunc_ApplyTimedStatusEffect_Duration_ImplicitCast);
	void ApplyBrokenArm(double CallFunc_GetInjuryDuration_Duration, bool CallFunc_CanOwnerBeInjured_Result, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface, bool K2Node_DynamicCast_bSuccess, const struct FStatusEffectHandle& CallFunc_ApplyTimedStatusEffect_ActiveStatusEffectHandle, bool CallFunc_ApplyTimedStatusEffect_ReturnValue, float CallFunc_ApplyTimedStatusEffect_Duration_ImplicitCast);
	void HasBrokenArm(bool* HasBrokenArm, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface, bool K2Node_DynamicCast_bSuccess, uint8 CallFunc_GetStatusEffectLevel_Level, bool CallFunc_GetStatusEffectLevel_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void HasSprainedWrist(bool* HasSprainedAnkle, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface, bool K2Node_DynamicCast_bSuccess, uint8 CallFunc_GetStatusEffectLevel_Level, bool CallFunc_GetStatusEffectLevel_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void TryApplySprainedAnkle();
	void TryApplyBrokenLeg();
	void HasBrokenLeg(bool* HasBrokenLeg, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface, bool K2Node_DynamicCast_bSuccess, uint8 CallFunc_GetStatusEffectLevel_Level, bool CallFunc_GetStatusEffectLevel_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void HasSprainedAnkle(bool* HasSprainedAnkle, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface, bool K2Node_DynamicCast_bSuccess, uint8 CallFunc_GetStatusEffectLevel_Level, bool CallFunc_GetStatusEffectLevel_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ApplyFallDamageInjuries(double Damage, double FallDamage, double DamagePct, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double CallFunc_SafeDivide_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_SafeDivide_B_ImplicitCast);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void PlayBrokenLegSFX();
	void PlayBrokenArmSFX();
	void ExecuteUbergraph_BP_InjuryComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, TScriptInterface<class IAccumulationAccessInterface> K2Node_DynamicCast_AsAccumulation_Access_Interface, bool K2Node_DynamicCast_bSuccess, const struct FAccumulationHandle& CallFunc_TryAddAccumulationInstance_OutHandle, bool CallFunc_TryAddAccumulationInstance_ReturnValue, float K2Node_Event_DeltaSeconds, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_3, class UBP_Character_Audio_Component_C* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_4, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_5, class AActor* CallFunc_GetOwner_ReturnValue_6, TScriptInterface<class IAccumulationAccessInterface> K2Node_DynamicCast_AsAccumulation_Access_Interface_1, bool K2Node_DynamicCast_bSuccess_1, const struct FAccumulationHandle& CallFunc_TryAddAccumulationInstance_OutHandle_1, bool CallFunc_TryAddAccumulationInstance_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable, class AActor* CallFunc_GetOwner_ReturnValue_7, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_ActorHasTag_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1);
};

}


