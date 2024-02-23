#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB4 (0x16C - 0xB8)
// BlueprintGeneratedClass AIA_Creature_Combat.AIA_Creature_Combat_C
class UAIA_Creature_Combat_C : public UAIA_CreatureBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       ThreatWeight;                                      // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DistanceWeight;                                    // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BonusWeight;                                       // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinThreat;                                         // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxThreat;                                         // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           ProximityCurve;                                    // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       MinDistance;                                       // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxDistance;                                       // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinBonus;                                          // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxBonus;                                          // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TypeWeight;                                        // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StructureScore;                                    // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CreatureScore;                                     // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PlayerScore;                                       // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinArmedBonus;                                     // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxArmedBonus;                                     // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ArmedBonusWeight;                                  // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       IncentiveWeight;                                   // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CooldownWeight;                                    // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ApexTargetWeight;                                  // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StickinessWeight;                                  // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamagersWeight;                                    // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIA_Creature_Combat_C* GetDefaultObj();

	void Get_Distance_Score(class AActor* Target, double* DistanceScore, class APawn* CallFunc_GetOwnerPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, float CallFunc_ClampAndCurveNormalizedScore_ReturnValue, double K2Node_FunctionResult_DistanceScore_ImplicitCast, float CallFunc_ClampAndCurveNormalizedScore_MaxScore_ImplicitCast, float CallFunc_ClampAndCurveNormalizedScore_Score_ImplicitCast, float CallFunc_ClampAndCurveNormalizedScore_MinScore_ImplicitCast);
	void HandleNewTarget(class AActor* Target, bool CallFunc_ObjectIsA_ReturnValue);
	int32 GetTicketPriority(class AActor* Target, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, float CallFunc_ClampAndCurveNormalizedScore_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_ClampAndCurveNormalizedScore_MaxScore_ImplicitCast, float CallFunc_ClampAndCurveNormalizedScore_MinScore_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	float GetNormalizedRunPriority(class AActor* Target, float CallFunc_GetNormalizedScore_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetNormalizedRunPriority_ReturnValue);
	bool CheckTargetRequirements(class AActor* Target, bool LStructure, class AActor* LTarget, class UObject* FocusTarget, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, const struct FGameplayTag& Temp_struct_Variable_4, const struct FGameplayTag& Temp_struct_Variable_5, const struct FGameplayTag& Temp_struct_Variable_6, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName CallFunc_GetSquadBBVar_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsInCooldown_InCooldown, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue_2, const struct FGameplayTag& Temp_struct_Variable_7, bool CallFunc_ActorHasTag_ReturnValue_3, bool CallFunc_ActorHasTag_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_ActorHasTag_ReturnValue_5, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_ActorHasTag_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_4, const struct FGameplayTag& Temp_struct_Variable_8, bool CallFunc_ActorHasTag_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsActorPrey_IsPrey, bool CallFunc_ActorHasTag_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_1, class UBlackboardComponent* CallFunc_GetSquadBlackboard_Blackboard, bool CallFunc_IsValid_ReturnValue_3, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	float GetNormalizedScore(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, const struct FGameplayTag& Temp_struct_Variable_4, const struct FGameplayTag& Temp_struct_Variable_5, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, TScriptInterface<class IAISpawnerInterface> CallFunc_GetDamagers_self_CastInput, TArray<class AActor*>& CallFunc_GetDamagers_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Get_Distance_Score_DistanceScore, const struct FWeightedScore& K2Node_MakeStruct_WeightedScore, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue_2, class ANWXAISpawner* CallFunc_GetSpawner_Spawner_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, const struct FWeightedScore& K2Node_MakeStruct_WeightedScore_1, bool CallFunc_ActorHasTag_ReturnValue_3, double CallFunc_SelectFloat_ReturnValue_2, const struct FWeightedScore& K2Node_MakeStruct_WeightedScore_2, bool CallFunc_IsInCooldown_InCooldown, bool CallFunc_Not_PreBool_ReturnValue_1, double CallFunc_GetIncentiveScore_IncentiveScore, double CallFunc_Conv_BoolToDouble_ReturnValue, const struct FWeightedScore& K2Node_MakeStruct_WeightedScore_3, const struct FWeightedScore& K2Node_MakeStruct_WeightedScore_4, bool CallFunc_ActorHasTag_ReturnValue_4, const struct FWeightedScore& K2Node_MakeStruct_WeightedScore_5, bool CallFunc_ActorHasTag_ReturnValue_5, double CallFunc_GetTypeScore_Type_Score, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_SelectFloat_ReturnValue_3, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, const struct FWeightedScore& K2Node_MakeStruct_WeightedScore_6, double CallFunc_SelectFloat_ReturnValue_4, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FWeightedScore& K2Node_MakeStruct_WeightedScore_7, double CallFunc_SelectFloat_ReturnValue_5, double CallFunc_Add_DoubleDouble_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, double CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, float CallFunc_ClampAndCurveNormalizedScore_ReturnValue, double CallFunc_SelectFloat_ReturnValue_6, float CallFunc_ClampAndCurveNormalizedScore_ReturnValue_1, const struct FWeightedScore& K2Node_MakeStruct_WeightedScore_8, const struct FWeightedScore& K2Node_MakeStruct_WeightedScore_9, float CallFunc_AccumulateWeightedScore_OutTotalScore, float CallFunc_AccumulateWeightedScore_OutTotalWeight, float CallFunc_AccumulateWeightedScore_OutTotalScore_1, float CallFunc_AccumulateWeightedScore_OutTotalWeight_1, float CallFunc_AccumulateWeightedScore_OutTotalScore_2, float CallFunc_AccumulateWeightedScore_OutTotalWeight_2, float CallFunc_AccumulateWeightedScore_OutTotalScore_3, float CallFunc_AccumulateWeightedScore_OutTotalWeight_3, float CallFunc_AccumulateWeightedScore_OutTotalScore_4, float CallFunc_AccumulateWeightedScore_OutTotalWeight_4, float CallFunc_AccumulateWeightedScore_OutTotalScore_5, float CallFunc_AccumulateWeightedScore_OutTotalWeight_5, float CallFunc_AccumulateWeightedScore_OutTotalScore_6, float CallFunc_AccumulateWeightedScore_OutTotalWeight_6, float CallFunc_AccumulateWeightedScore_OutTotalScore_7, float CallFunc_AccumulateWeightedScore_OutTotalWeight_7, float CallFunc_AccumulateWeightedScore_OutTotalScore_8, float CallFunc_AccumulateWeightedScore_OutTotalWeight_8, float CallFunc_AccumulateWeightedScore_OutTotalScore_9, float CallFunc_AccumulateWeightedScore_OutTotalWeight_9, float CallFunc_AccumulateWeightedScore_OutTotalScore_10, float CallFunc_AccumulateWeightedScore_OutTotalWeight_10, float CallFunc_AccumulateWeightedScore_OutTotalScore_11, float CallFunc_AccumulateWeightedScore_OutTotalWeight_11, float CallFunc_AccumulateWeightedScore_OutTotalScore_12, float CallFunc_AccumulateWeightedScore_OutTotalWeight_12, float CallFunc_AccumulateWeightedScore_OutTotalScore_13, float CallFunc_AccumulateWeightedScore_OutTotalWeight_13, float CallFunc_AccumulateWeightedScore_OutTotalScore_14, float CallFunc_AccumulateWeightedScore_OutTotalWeight_14, float CallFunc_AccumulateWeightedScore_OutTotalScore_15, float CallFunc_AccumulateWeightedScore_OutTotalWeight_15, float CallFunc_AccumulateWeightedScore_OutTotalScore_16, float CallFunc_AccumulateWeightedScore_OutTotalWeight_16, float CallFunc_AccumulateWeightedScore_OutTotalScore_17, float CallFunc_AccumulateWeightedScore_OutTotalWeight_17, float CallFunc_CombineWeightedScores_ReturnValue, float CallFunc_AccumulateWeightedScore_OutTotalScore_18, float CallFunc_AccumulateWeightedScore_OutTotalWeight_18, float CallFunc_CombineWeightedScores_ReturnValue_1, float K2Node_MakeStruct_NormalizedScore_ImplicitCast, float K2Node_MakeStruct_NormalizedScore_ImplicitCast_1, float K2Node_MakeStruct_Weight_ImplicitCast, float K2Node_MakeStruct_Weight_ImplicitCast_1, float K2Node_MakeStruct_NormalizedScore_ImplicitCast_2, float K2Node_MakeStruct_NormalizedScore_ImplicitCast_3, float K2Node_MakeStruct_Weight_ImplicitCast_2, float K2Node_MakeStruct_Weight_ImplicitCast_3, float K2Node_MakeStruct_NormalizedScore_ImplicitCast_4, float K2Node_MakeStruct_NormalizedScore_ImplicitCast_5, float K2Node_MakeStruct_Weight_ImplicitCast_4, float K2Node_MakeStruct_Weight_ImplicitCast_5, float K2Node_MakeStruct_Weight_ImplicitCast_6, float K2Node_MakeStruct_NormalizedScore_ImplicitCast_6, float K2Node_MakeStruct_NormalizedScore_ImplicitCast_7, double CallFunc_SelectFloat_A_ImplicitCast, float K2Node_MakeStruct_Weight_ImplicitCast_7, float CallFunc_ClampAndCurveNormalizedScore_MaxScore_ImplicitCast, float CallFunc_ClampAndCurveNormalizedScore_Score_ImplicitCast, float CallFunc_ClampAndCurveNormalizedScore_MinScore_ImplicitCast, float CallFunc_ClampAndCurveNormalizedScore_MaxScore_ImplicitCast_1, float CallFunc_ClampAndCurveNormalizedScore_MinScore_ImplicitCast_1, float CallFunc_ClampAndCurveNormalizedScore_Score_ImplicitCast_1, float K2Node_MakeStruct_Weight_ImplicitCast_8);
	void GetTypeScore(class AActor* Target, double* Type_Score, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable_2, bool CallFunc_ActorHasTag_ReturnValue_2);
	void Start(class AActor* Target);
	void Stop(class AActor* Target);
	void OnTargetChanged(class AActor* OldTarget, class AActor* NewTarget);
	void ExecuteUbergraph_AIA_Creature_Combat(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, TScriptInterface<class ISquadMemberNativeInterface> CallFunc_GetSpawnerActor_self_CastInput, class AActor* CallFunc_GetSpawnerActor_ReturnValue, class AActor* K2Node_Event_OldTarget, class AActor* K2Node_Event_NewTarget, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ISquadMemberNativeInterface> CallFunc_GetSpawnerActor_self_CastInput_1, class AActor* CallFunc_GetSpawnerActor_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable_1, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_VectorVector_ReturnValue_1, class AActor* K2Node_Event_Target, class AActor* K2Node_Event_Target_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable_4);
};

}


