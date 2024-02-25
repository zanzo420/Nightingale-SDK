#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x120 - 0xA8)
// BlueprintGeneratedClass BTT_HarvestChaosTree.BTT_HarvestChaosTree_C
class UBTT_HarvestChaosTree_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                PreviousTargetKey;                                 // 0xB0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                HarvestIterationsKey;                              // 0xD8(0x28)(Edit, BlueprintVisible)
	struct FTimerHandle                          Timer;                                             // 0x100(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_Creature_NPC_Villager_C*           LCharacter;                                        // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       LDamageMultiplier;                                 // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIIMFallingTreeProxy*                  LTreeResource;                                     // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_HarvestChaosTree_C* GetDefaultObj();

	void CheckAnimComplete(class ANWXTreeTrunkGeometryCollection* LGeomCollection, class UBlackboardComponent* LBlackboard, const struct FVector& LNPCLocation, const struct FVector& LTreeLocation, TArray<struct FGameplayEffectCue>& Temp_struct_Variable, const struct FTagValueContainer& Temp_struct_Variable_1, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ANWXTreeTrunkGeometryCollection* CallFunc_GetTrunkGeometryCollection_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, int32 CallFunc_GetValueAsInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, float CallFunc_DamageActor_BaseDamage_ImplicitCast);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_HarvestChaosTree(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABP_Creature_NPC_Villager_C* K2Node_DynamicCast_AsBP_Creature_NPC_Villager, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_TryActivateAbilitiesByTag_ReturnValue, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_GetBlackboardValueAsInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* CallFunc_TryGetBlackboardObject_Value, enum class EBlackboardGetResult CallFunc_TryGetBlackboardObject_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AIIMFallingTreeProxy* K2Node_DynamicCast_AsIIMFalling_Tree_Proxy, bool K2Node_DynamicCast_bSuccess_1);
};

}


