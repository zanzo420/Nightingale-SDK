#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x270 (0x8E8 - 0x678)
// BlueprintGeneratedClass GA_FireRangedWeaponPredicted.GA_FireRangedWeaponPredicted_C
class UGA_FireRangedWeaponPredicted_C : public UGA_TechniqueBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x678(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_RangedWeapon_Base_C*               Weapon;                                            // 0x680(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_WeaponUser_C>    Shooter;                                           // 0x688(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                FiringActor;                                       // 0x698(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         ClientCanFire;                                     // 0x6A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_86DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ClientShotLocation;                                // 0x6A8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        ImpactGameplayEffects;                             // 0x6C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                BPTA_Shot_Result_Class;                            // 0x6D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                FeedbackEffect;                                    // 0x6D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         CanEndAbility;                                     // 0x6E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AnimEnded;                                         // 0x6E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_86DE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BulletsPerShot;                                    // 0x6E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData_Ammo                        LoadedAmmoData;                                    // 0x6E8(0xC0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bHitTarget;                                        // 0x7A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_86DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class AActor*, struct FScatterDamageBucket> DamageBuckets;                                     // 0x7B0(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	struct FHitResult                            LastHitResult;                                     // 0x800(0xE8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UGA_FireRangedWeaponPredicted_C* GetDefaultObj();

	void PlayPhysicalResponseOnNextTick(bool CallFunc_IsValid_ReturnValue);
	void ChooseBucketHitResult(const struct FScatterDamageBucket& Bucket, struct FHitResult* Hit_Result, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void ApplyDamageBuckets(const struct FHitResult& EmptyHitResult, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FScatterDamageBucket& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FHitResult& CallFunc_ChooseBucketHitResult_Hit_Result);
	void Format_and_Apply_Damage(class AActor* HitActor, const struct FHitResult& HitResult, float Damage, const struct FTagValueContainer& TagValueContainer, const TArray<struct FGameplayTag>& ImpactTags, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, const struct FGameplayTag& CallFunc_PelletsTag_PelletsTag, const struct FGameplayTag& CallFunc_MissileTag_MissileTag, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetImpactTagsRanged_StrikeTags, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromTagValueContainer_Payload, const struct FGameplayTag& CallFunc_MissileTag_MissileTag_1, int32 CallFunc_Array_Add_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags_1, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Add_Value_ImplicitCast);
	void Add_Damage_to_Bucket(class AActor* HitActor, const struct FHitResult& HitResult, double Damage, const struct FScatterDamageBucket& Bucket, bool IsWeakpoint, class UBP_WeakPointComponent_C* WeakpointComponent, class UBP_WeakPointComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FScatterDamageBucket& K2Node_MakeStruct_ScatterDamageBucket, const struct FScatterDamageBucket& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsWeakpoint_Found, float K2Node_MakeStruct_DamageAmount_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float K2Node_SetFieldsInStruct_DamageAmount_ImplicitCast);
	void RemovePerks(class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ApplyPerks(class AActor* HitTarget, class UAbilitySystemComponent* HitTargetAbilitySystem, class UAbilitySystemComponent* AbilitySystem, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1);
	void HandleBullet(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FVector& CenterVectorEndpoint, const struct FHitResult& LHitResult, int32 Index, int32 Temp_int_Variable, const struct FTransform& CallFunc_GetTargetDataEndPointTransform_ReturnValue, bool CallFunc_TargetDataHasEndPoint_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, bool CallFunc_EqualEqual_VectorVector_ReturnValue, const struct FVector& K2Node_Select_Default, const struct FHitResult& CallFunc_GetHitResultFromTargetData_ReturnValue, bool CallFunc_TargetDataHasHitResult_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
	void InitializeAndValidate(bool* Success, bool CallFunc_CanFire_ReturnValue, bool CallFunc_ValidateItem_bSuccess, bool CallFunc_CanFire_CanFire);
	void ValidateItem(bool* bSuccess, const struct FItemDataReference& EquippedItemID, class FText CallFunc_GetDisplayName_ItemDisplayName, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TScriptInterface<class IBPI_WeaponUser_C> K2Node_DynamicCast_AsBPI_Weapon_User, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetEquippedRangedWeapon_EquippedItem, bool CallFunc_IsValid_ReturnValue);
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, class FName EquippedItemID, class AActor* OwnerActor, const class FString& CallFunc_GetDisplayName_ReturnValue, TScriptInterface<class IBPI_WeaponUser_C> K2Node_DynamicCast_AsBPI_Weapon_User, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FGameplayTagContainer& CallFunc_K2_CanActivateAbility_RelevantTags, bool CallFunc_K2_CanActivateAbility_ReturnValue);
	void PlayHitResponse(struct FS_HitData& HitData, struct FHitResult& HitResult, struct FVector& EndLocation, bool IsCentreHit, bool BulletDroppedOff, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IBPI_WeaponUser_C> K2Node_DynamicCast_AsBPI_Weapon_User, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerForNextTickDelegate_ReturnValue);
	void HandleHitResult(const struct FHitResult& HitResult, bool IsCentreHit, double RangedDamage, class AActor* HitActor, bool BulletDroppedOff, const struct FS_HitData& HitData, const struct FVector& EndPoint, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FGameplayAttribute& Temp_struct_Variable, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& K2Node_Select_Default, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, double CallFunc_GetLoadedAmmoAttribute_Value, bool CallFunc_GetLoadedAmmoAttribute_Success, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit_2, bool CallFunc_BreakHitResult_bInitialOverlap_2, float CallFunc_BreakHitResult_Time_2, float CallFunc_BreakHitResult_Distance_2, const struct FVector& CallFunc_BreakHitResult_Location_2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_2, const struct FVector& CallFunc_BreakHitResult_Normal_2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2, class AActor* CallFunc_BreakHitResult_HitActor_2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2, class FName CallFunc_BreakHitResult_HitBoneName_2, class FName CallFunc_BreakHitResult_BoneName_2, int32 CallFunc_BreakHitResult_HitItem_2, int32 CallFunc_BreakHitResult_ElementIndex_2, int32 CallFunc_BreakHitResult_FaceIndex_2, const struct FVector& CallFunc_BreakHitResult_TraceStart_2, const struct FVector& CallFunc_BreakHitResult_TraceEnd_2, bool CallFunc_BreakHitResult_bBlockingHit_3, bool CallFunc_BreakHitResult_bInitialOverlap_3, float CallFunc_BreakHitResult_Time_3, float CallFunc_BreakHitResult_Distance_3, const struct FVector& CallFunc_BreakHitResult_Location_3, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_3, const struct FVector& CallFunc_BreakHitResult_Normal_3, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_3, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_3, class AActor* CallFunc_BreakHitResult_HitActor_3, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_3, class FName CallFunc_BreakHitResult_HitBoneName_3, class FName CallFunc_BreakHitResult_BoneName_3, int32 CallFunc_BreakHitResult_HitItem_3, int32 CallFunc_BreakHitResult_ElementIndex_3, int32 CallFunc_BreakHitResult_FaceIndex_3, const struct FVector& CallFunc_BreakHitResult_TraceStart_3, const struct FVector& CallFunc_BreakHitResult_TraceEnd_3, class UClass* CallFunc_Array_Get_Item, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetImpactTagsRanged_StrikeTags, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_CalculateDamageFalloff_CalculatedDamage, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_CalculateItemAttributeValue_ReturnValue, const struct FS_HitData& K2Node_MakeStruct_S_HitData, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, float CallFunc_Format_and_Apply_Damage_Damage_ImplicitCast, double CallFunc_CalculateDamageFalloff_Distance_ImplicitCast);
	void GetAssistAngle(double* AssistAngle, bool* Success, double Angle, class UBP_RangedWeaponSnappingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_RangedWeaponHomingComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
	void GetAssistRange(double* AssistRange, bool* Success, double Range, class UBP_RangedWeaponSnappingComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UBP_RangedWeaponHomingComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void CalculateTrajectory(const struct FVector& ProjectileStart, const struct FVector& ForwardVector, class AActor* IntendedTarget, struct FVector* NewForwardVector, const struct FVector& NormalizedForward2d, const struct FVector& NormalizedForward, double RotationAngle, const struct FVector& ToTargetLocation2d, const struct FVector& CallFunc_Normal_ReturnValue, class UBP_RangedWeaponSnappingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_CalculateTrajectory_NewForwardVector);
	void SetVariables(class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, const struct FItemData_Ammo& CallFunc_GetLoadedAmmoData_LoadedAmmo, bool CallFunc_GetLoadedAmmoData_bWasSuccessful, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, TScriptInterface<class IBPI_WeaponUser_C> K2Node_DynamicCast_AsBPI_Weapon_User, bool K2Node_DynamicCast_bSuccess, class ABP_RangedWeapon_Base_C* K2Node_DynamicCast_AsBP_Ranged_Weapon_Base, bool K2Node_DynamicCast_bSuccess_1);
	void PostFire(const struct FGameplayEffectContextHandle& Context, class AActor* IntendedTarget, double ProjectileLaunchDistance, const struct FVector& ForwardVector, class UObject* Projectile, double ProjectileSpeed, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
	void Cancelled_3A8A3C7D41AC9DD474658BAF6F42B538(struct FGameplayAbilityTargetDataHandle& Data);
	void ValidData_3A8A3C7D41AC9DD474658BAF6F42B538(struct FGameplayAbilityTargetDataHandle& Data);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void OnFPAnimEnded(bool bInterrupted);
	void SetupEndAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_FireRangedWeaponPredicted(int32 EntryPoint, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_Data_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_Data, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class UAbilityTask_NWXWaitTargetData* CallFunc_NWXWaitTargetData_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AGameplayAbilityTargetActor* CallFunc_BeginSpawningActor_SpawnedActor, bool CallFunc_BeginSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_CustomEvent_bInterrupted, bool CallFunc_InitializeAndValidate_Success, bool K2Node_Event_bWasCancelled, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


