#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C8 (0x7E8 - 0x420)
// BlueprintGeneratedClass GA_ProjectilePayload.GA_ProjectilePayload_C
class UGA_ProjectilePayload_C : public UBP_NWXGameplayAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FS_ProjectileSourceData               SourceData;                                        // 0x428(0x131)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_480C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class AActor*, struct FS_HitData>       RadiusHitActors;                                   // 0x560(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TMap<class AActor*, struct FHitResult>       RadiusHitResults;                                  // 0x5B0(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	struct FVector                               ImpactDirection;                                   // 0x600(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ImpactRadius;                                      // 0x618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ImpulseStrength;                                   // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  ProjectileTags;                                    // 0x628(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          GCTarget;                                          // 0x638(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ImpactParticleEffect;                              // 0x640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                PersistentAOEClass;                                // 0x648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 Instigator;                                        // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                HitActor;                                          // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ImpactPoint;                                       // 0x660(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    ImpactDecal;                                       // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         ImpactDecalScalesToRadius;                         // 0x680(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4811[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_ProjectileBase_C*                  OwningProjectile;                                  // 0x688(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Async;                                             // 0x690(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4812[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class UClass*>                          ValidHitActorClasses;                              // 0x698(0x50)(Edit, BlueprintVisible)
	TArray<struct FGameplayTag>                  EffectTags;                                        // 0x6E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTagValueContainer                    TagValueContainer;                                 // 0x6F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FActiveGameplayEffectHandle>   ActivePayloadGEHandle;                             // 0x708(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         StopOnPayload;                                     // 0x718(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HideOnPayload;                                     // 0x719(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4815[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Normal;                                            // 0x720(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CheckObstruction;                                  // 0x738(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4816[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        ObstructionCheckIgnoreActors;                      // 0x740(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	double                                       TEMPPassthroughDamage;                             // 0x750(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPassthroughAbility;                              // 0x758(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4817[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                PhysicalImpactEffect;                              // 0x760(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStatusEffectDataAsset*                StatusEffect;                                      // 0x768(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       StatusDuration;                                    // 0x770(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        StatusLevel;                                       // 0x778(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4818[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   Hit_Component;                                     // 0x780(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  HitBoneName;                                       // 0x788(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BoneName;                                          // 0x790(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TraceStart;                                        // 0x798(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TraceEnd;                                          // 0x7B0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          ActivationTag;                                     // 0x7C8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FStatusEffectDOT                      StatusEffectDOT;                                   // 0x7D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UGA_ProjectilePayload_C* GetDefaultObj();

	class AEquippableItem* GetItem(class AEquippableItem* Temp_object_Variable, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue);
	void ApplyDoTs(class UObject* Object, class AActor* Target, int32 Temp_int_Loop_Counter_Variable, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_RangedWeapon_Base_C* K2Node_DynamicCast_AsBP_Ranged_Weapon_Base, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, const struct FItemDataReference& CallFunc_GetLoadedAmmoType_LoadedAmmoType, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FItemData_Ammo& CallFunc_TryGetItemDataAmmo_OutData, enum class EGetResult CallFunc_TryGetItemDataAmmo_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
	void RemovePerks(class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ApplyPerks(class AActor* Hit_Target, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_2, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_3, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1);
	void Setup_Payload(class UObject* Object, struct FGameplayTagContainer* EffectTags, struct FTagValueContainer* TagValueContainer, const struct FTagValueContainer& LTagValueContainer, double AmmoDamage, const struct FGameplayTagContainer& LEffectTags, bool CallFunc_IsValid_ReturnValue, class ABP_RangedWeapon_Base_C* K2Node_DynamicCast_AsBP_Ranged_Weapon_Base, bool K2Node_DynamicCast_bSuccess, const struct FItemDataReference& CallFunc_GetLoadedAmmoType_LoadedAmmoType, double CallFunc_GetLoadedAmmoAttribute_Value, bool CallFunc_GetLoadedAmmoAttribute_Success, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_Ammo& CallFunc_TryGetItemDataAmmo_OutData, enum class EGetResult CallFunc_TryGetItemDataAmmo_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, const struct FGameplayTag& CallFunc_MissileTag_MissileTag, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1, float CallFunc_Add_Value_ImplicitCast);
	void Check_Player_Friendly_Fire(class UObject* Instigator, class AActor* Target, bool* Result, bool Temp_bool_Variable, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, bool Temp_bool_Variable_1, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_2, bool K2Node_DynamicCast_bSuccess_2, bool Temp_bool_Variable_2, const struct FGameplayTag& CallFunc_FriendlyFireTag_FriendlyFireTag, bool CallFunc_HasMatchingGameplayTag_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue);
	void Apply_Status_Effects(class UObject* TargetCreature, TScriptInterface<class IStatusEffectAccessInterface> K2Node_DynamicCast_AsStatus_Effect_Access_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FStatusEffectHandle& CallFunc_ApplyTimedStatusEffect_ActiveStatusEffectHandle, bool CallFunc_ApplyTimedStatusEffect_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_ApplyTimedStatusEffect_Duration_ImplicitCast);
	void Initialize_From_Owning_Projectile();
	void SpawnPersistentAOE(bool CallFunc_IsValidClass_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_AoePayloadBase_C* CallFunc_FinishSpawningActor_ReturnValue);
	void PostPayload();
	void EndPayload();
	void SetPayloadActiveTag(bool SetActive, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_Array_Get_Item, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void AddImpactTargetGC(class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);
	void IsHitActorValid(bool* HitActorValid, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 CallFunc_Set_Length_ReturnValue, TArray<class UClass*>& CallFunc_Set_ToArray_Result, bool CallFunc_Greater_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_ClassIsChildOf_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, const class FString& CallFunc_GetDisplayName_ReturnValue, class ABP_ProjectileBase_C* K2Node_DynamicCast_AsBP_Projectile_Base, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_GetDisplayName_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FGameplayTagContainer& CallFunc_K2_CanActivateAbility_RelevantTags, bool CallFunc_K2_CanActivateAbility_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void ApplyGameplayEffectsToHitActors(TMap<class AActor*, struct FS_HitData> HitActors, TArray<class UClass*>& ImpactGameplayEffects, bool* bSuccess, const struct FGameplayAbilityTargetDataHandle& TargetDataL, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class AActor*>& CallFunc_Map_Keys_Keys, bool CallFunc_Greater_IntInt_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActorArray_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
	void CacheImpactData(bool* bSuccess, class ABP_ProjectileBase_C* Projectile, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Normal_ReturnValue, TMap<class AActor*, struct FS_HitData> CallFunc_CollectRadiusHitActors_HitActors, TMap<class AActor*, struct FHitResult> CallFunc_CollectRadiusHitActors_HitResults, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class ABP_ProjectileBase_C* K2Node_DynamicCast_AsBP_Projectile_Base, bool K2Node_DynamicCast_bSuccess);
	void HandleProjectileImpactDamage(double AmmoDamage, const struct FTagValueContainer& LTagValueContainer, const struct FGameplayTag& LActivationTag, const struct FHitResult& HitResult, const struct FGameplayTagContainer& LEffectTags, class AActor* Target, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName Temp_name_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<struct FGameplayEffectCue>& Temp_struct_Variable, bool Temp_bool_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IBPI_Targeter_C> K2Node_DynamicCast_AsBPI_Targeter, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable_1, bool CallFunc_IsFriend_bIsFriend, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, const struct FHitResult& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class AEquippableItem* CallFunc_GetItem_ReturnValue, class AEquippableItem* CallFunc_GetItem_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_Setup_Payload_EffectTags, const struct FTagValueContainer& CallFunc_Setup_Payload_TagValueContainer, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Check_Player_Friendly_Fire_Result, class FName K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromHitResult_ReturnValue, TArray<class AActor*>& CallFunc_Map_Keys_Keys, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess_1, double K2Node_Select_Default_1, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromTagValueContainer_Payload, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue, double K2Node_Select_Option_0_ImplicitCast, float CallFunc_DamageActor_BaseDamage_ImplicitCast);
	void CollectRadiusHitActors(class ABP_ProjectileBase_C* Projectile, class AActor* Target, const struct FVector& ProjectileImpactPoint, const struct FVector& ProjectileImpactDirection, TMap<class AActor*, struct FS_HitData>* HitActors, TMap<class AActor*, struct FHitResult>* HitResults, const struct FVector& AOECenterLocation, TMap<class AActor*, struct FHitResult> TargetHitResults, TMap<class AActor*, struct FS_HitData> TargetHitMap, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Add_ReturnValue, TArray<class AActor*>& CallFunc_Map_Keys_Keys, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Map_Remove_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, TArray<class UObject*>& Temp_object_Variable, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FS_HitData& K2Node_MakeStruct_S_HitData, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, TArray<struct FHitResult>& CallFunc_NWXMultiSphereTraceByChannel_OutHits, bool CallFunc_NWXMultiSphereTraceByChannel_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const struct FHitResult& CallFunc_Array_Get_Item_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FS_HitData& K2Node_MakeStruct_S_HitData_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, float K2Node_MakeStruct_Strength_20_7869DD7043CFE87EAB2EEDA3D886893F_ImplicitCast, float K2Node_MakeStruct_Strength_20_7869DD7043CFE87EAB2EEDA3D886893F_ImplicitCast_1, float CallFunc_NWXMultiSphereTraceByChannel_Radius_ImplicitCast, float K2Node_MakeStruct_Radius_22_C3E772B2476AAC7053AD3FBA614613E1_ImplicitCast);
	void HandleProjectileImpact(class AEquippableItem* Temp_object_Variable, const struct FGameplayTag& CallFunc_MissileTag_MissileTag, bool CallFunc_IsValid_ReturnValue, class ABP_RangedWeapon_Base_C* K2Node_DynamicCast_AsBP_Ranged_Weapon_Base, bool K2Node_DynamicCast_bSuccess, const struct FItemDataReference& CallFunc_GetLoadedAmmoType_LoadedAmmoType, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, int32 CallFunc_Array_Add_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_Ammo& CallFunc_TryGetItemDataAmmo_OutData, enum class EGetResult CallFunc_TryGetItemDataAmmo_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess_1, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const struct FGameplayTag& CallFunc_StrengthTag_StrengthTag, bool CallFunc_ApplyGameplayEffectsToHitActors_bSuccess, float CallFunc_Add_Value_ImplicitCast);
	void ProjectilePayloadActivate();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_ProjectilePayload(int32 EntryPoint, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class ABP_ProjectileBase_C* K2Node_DynamicCast_AsBP_Projectile_Base, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_CacheImpactData_bSuccess, bool CallFunc_K2_CommitAbility_ReturnValue);
};

}


