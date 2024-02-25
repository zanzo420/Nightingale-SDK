#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x140 - 0xA8)
// BlueprintGeneratedClass BTT_HarvestChaosStone.BTT_HarvestChaosStone_C
class UBTT_HarvestChaosStone_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                PreviousTargetKey;                                 // 0xB0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                HarvestIterationsKey;                              // 0xD8(0x28)(Edit, BlueprintVisible)
	struct FTimerHandle                          Timer;                                             // 0x100(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_Creature_NPC_Villager_C*           LCharacter;                                        // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ANWXHarvestableGeometryCollection*     LResource;                                         // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LTempImpact;                                       // 0x118(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGeometryCollection*                   LTempCollection;                                   // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	double                                       LDamageMultiplier;                                 // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_HarvestChaosStone_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void CheckCompletion();
	void ExecuteUbergraph_BTT_HarvestChaosStone(int32 EntryPoint, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABP_Creature_NPC_Villager_C* K2Node_DynamicCast_AsBP_Creature_NPC_Villager, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_TryActivateAbilitiesByTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_GetBlackboardValueAsInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTagValueContainer& Temp_struct_Variable, int32 CallFunc_GetBlackboardValueAsInt_ReturnValue_1, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_1, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UObject* CallFunc_TryGetBlackboardObject_Value, enum class EBlackboardGetResult CallFunc_TryGetBlackboardObject_Branches, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_1, class ANWXHarvestableGeometryCollection* K2Node_DynamicCast_AsNWXHarvestable_Geometry_Collection, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_DamageActor_BaseDamage_ImplicitCast);
};

}


