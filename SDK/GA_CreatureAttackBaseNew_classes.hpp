#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x280 (0x6A0 - 0x420)
// BlueprintGeneratedClass GA_CreatureAttackBaseNew.GA_CreatureAttackBaseNew_C
class UGA_CreatureAttackBaseNew_C : public UNWXGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                PhysicalImpactEffect;                              // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureBase_C*                    CreatureDamageCauser;                              // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 ImpactTags;                                        // 0x438(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHitResult                            HitResult;                                         // 0x458(0xE8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FS_CreatureKnockbackData              KnockbackData;                                     // 0x540(0x2E)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8623[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                HitActor;                                          // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTagValueContainer                    DamageTagValueContainer;                           // 0x578(0x10)(Edit, BlueprintVisible)
	struct FGameplayTagContainer                 CueTag;                                            // 0x588(0x20)(Edit, BlueprintVisible)
	TArray<struct FHitResult>                    PhysicalHits;                                      // 0x5A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FHitResult>                    AllHitResults;                                     // 0x5B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FGameplayTag                          AttackTag;                                         // 0x5C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    Event_Data;                                        // 0x5D0(0xD0)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_CreatureAttackBaseNew_C* GetDefaultObj();

	void SetSquadFocus(class ABP_CreatureSpawnerBase_C* LSpawner, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Targeter_C> CallFunc_IsFriend_self_CastInput, bool CallFunc_IsFriend_bIsFriend, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, bool CallFunc_IsValid_ReturnValue_1, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess);
	void CreatureAbilityError(const class FString& Error_Text, bool EndAbility, enum class ENWXLogLevel NWXLogLevel, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void ApplyKnockback(const struct FGameplayTagContainer& ReduceKnockbackTag, const struct FGameplayTagContainer& Temp_struct_Variable, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasAnyTags_ReturnValue, double CallFunc_SelectFloat_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FS_CreatureKnockbackData& K2Node_MakeStruct_S_CreatureKnockbackData, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float K2Node_MakeStruct_LaunchSpeedOverride_41_7727544F4971B507765877BA738938E5_ImplicitCast);
	void ApplyDamageToTarget(double LAbilityDamage, const struct FGameplayTagContainer& LEffectTags, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, TScriptInterface<class IAICompanionInterface> K2Node_DynamicCast_AsAICompanion_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ActorHasTag_ReturnValue, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, const struct FGameplayTag& CallFunc_StrengthTag_StrengthTag, double CallFunc_SelectFloat_ReturnValue, double CallFunc_FMax_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, const struct FGameplayAttribute& Temp_struct_Variable_4, class AEquippableItem* Temp_object_Variable, bool CallFunc_ActorHasTag_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, float CallFunc_CalculateItemAttributeValue_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, TScriptInterface<class IBPI_Targeter_C> CallFunc_IsFriend_self_CastInput, bool CallFunc_IsFriend_bIsFriend, TScriptInterface<class IBPI_Targeter_C> CallFunc_IsFriend_self_CastInput_1, bool CallFunc_IsFriend_bIsFriend_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_GetAbilityDamage_Damage, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess_1, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_Add_Value_ImplicitCast, float CallFunc_DamageActor_BaseDamage_ImplicitCast);
	void PlayPhysicalResponse(class ABP_CreatureBase_C* Striker, TArray<struct FHitResult>& AllHits, const struct FGameplayEffectContextHandle& LContext, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_MakeNWXEffectContext_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Keys_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_CreatureAttackBaseNew(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, const struct FHitResult& CallFunc_Array_Get_Item, const struct FGameplayEventData& K2Node_Event_EventData, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, class UANS_CreatureConeTrace_C* K2Node_DynamicCast_AsANS_Creature_Cone_Trace, bool K2Node_DynamicCast_bSuccess, class UANS_CreatureBeamTrace_C* K2Node_DynamicCast_AsANS_Creature_Beam_Trace, bool K2Node_DynamicCast_bSuccess_1, class UANS_KnightSocketTrace_C* K2Node_DynamicCast_AsANS_Knight_Socket_Trace, bool K2Node_DynamicCast_bSuccess_2, class UANS_CreatureSocketTrace_C* K2Node_DynamicCast_AsANS_Creature_Socket_Trace, bool K2Node_DynamicCast_bSuccess_3, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess_4, bool Temp_bool_Variable_1, const struct FGameplayTag& CallFunc_MeleeTag_MeleeTag, bool CallFunc_Array_IsEmpty_ReturnValue, TArray<struct FHitResult>& CallFunc_GetAllHitResultsFromTargetData_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainerFromAbilityPayload_ReturnValue, const struct FGameplayTag& CallFunc_MeleeTag_MeleeTag_1, class FName CallFunc_GetTraceData_Override_Data_Socket_Start, class FName CallFunc_GetTraceData_Override_Data_Socket_End, double CallFunc_GetTraceData_Override_Data_Radius, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data, bool CallFunc_GetTraceData_Override_IsBlockable, class FName CallFunc_GetTraceData_Override_Data_Socket_Start_1, class FName CallFunc_GetTraceData_Override_Data_Socket_End_1, double CallFunc_GetTraceData_Override_Data_Radius_1, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag_1, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags_1, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data_1, const struct FGameplayTag& K2Node_Select_Default, class FName CallFunc_GetTraceData_Override_Data_Socket_Start_2, double CallFunc_GetTraceData_Override_Data_Beam_Length, double CallFunc_GetTraceData_Override_Data_Radius_2, bool CallFunc_GetTraceData_Override_Data_Use_Target, double CallFunc_GetTraceData_Override_Data_Tracking_Rate, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag_2, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags_2, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data_2, class FName CallFunc_GetTraceData_Override_Data_Socket_Start_3, class FName CallFunc_GetTraceData_Override_Data_Socket_End_2, double CallFunc_GetTraceData_Override_Data_Radius_3, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag_3, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags_3, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data_3, bool CallFunc_GetTraceData_Override_IsBlockable_1, const struct FGameplayTag& K2Node_Select_Default_1);
};

}


