#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x224 (0x2CC - 0xA8)
// BlueprintGeneratedClass BTT_HarvestResourceBeaconResource.BTT_HarvestResourceBeaconResource_C
class UBTT_HarvestResourceBeaconResource_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FDataTableRowHandle                   Resource;                                          // 0xB0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_Creature_NPC_Villager_C*           LCharacter;                                        // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer;                                             // 0xC8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 HarvestAbilityTag;                                 // 0xD0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBlackboardKeySelector                Target;                                            // 0xF0(0x28)(Edit, BlueprintVisible)
	int32                                        ModifiedIndex;                                     // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_NWXActor_C*                        ResourceNode;                                      // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FS_ResourceNode_ModifiedInstance      ModifiedInstance;                                  // 0x128(0x24)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIIMInstance                          Instance;                                          // 0x150(0x170)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_ResourceNode_IIM_C*                LNode;                                             // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        LIndex;                                            // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_HarvestResourceBeaconResource_C* GetDefaultObj();

	void GetTargetTransform(struct FTransform* Target, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void CheckCompletion();
	void ExecuteUbergraph_BTT_HarvestResourceBeaconResource(int32 EntryPoint, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_TryActivateAbilitiesByTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTransform& CallFunc_GetTargetTransform_Target, const struct FTagValueContainer& Temp_struct_Variable, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_1, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, class ABP_Creature_NPC_Villager_C* K2Node_DynamicCast_AsBP_Creature_NPC_Villager, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, class AAIC_Creature_NPC_Villager_C* K2Node_DynamicCast_AsAIC_Creature_NPC_Villager, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_SelectFloat_ReturnValue, class ABP_ResourceNode_IIM_C* K2Node_DynamicCast_AsBP_Resource_Node_IIM, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_GetResourceNodeLocation_Success, const struct FVector& CallFunc_GetResourceNodeLocation_Location, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_DoesHaveResourceType_bHasResourceType, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, TScriptInterface<class IDamageEventInterface> CallFunc_DamageActor_self_CastInput, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, TScriptInterface<class IBPI_Interactable_C> K2Node_DynamicCast_AsBPI_Interactable_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_DoesHaveResourceType_bHasResourceType_1, float CallFunc_DamageActor_BaseDamage_ImplicitCast);
};

}


