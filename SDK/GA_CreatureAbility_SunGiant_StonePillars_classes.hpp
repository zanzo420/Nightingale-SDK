#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x688 - 0x5F0)
// BlueprintGeneratedClass GA_CreatureAbility_SunGiant_StonePillars.GA_CreatureAbility_SunGiant_StonePillars_C
class UGA_CreatureAbility_SunGiant_StonePillars_C : public UGA_CreatureAbility_Melee_Ishmael_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AActor*>                        ProjectileTarget;                                  // 0x5F8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	uint8                                        Pad_9AA7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x610(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Creature_Wildlife_SunGiant_C*      SunGiant;                                          // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        ActorsToIgnore;                                    // 0x678(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_SunGiant_StonePillars_C* GetDefaultObj();

	void HandleEvent(const struct FGameplayTag& EventTags, const struct FGameplayEventData& EventData, const struct FTransform& RTransform, const struct FTransform& Transform, const TArray<class AActor*>& ProjectileTarget, int32 Temp_int_Array_Index_Variable, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, const struct FLinearColor& Temp_struct_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, const struct FLinearColor& Temp_struct_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable_3, const struct FGameplayTag& Temp_struct_Variable_4, const struct FGameplayTag& Temp_struct_Variable_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, class ABP_Creature_Wildlife_SunGiant_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Sun_Giant, bool K2Node_DynamicCast_bSuccess, class ABP_Creature_Wildlife_SunGiant_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Sun_Giant_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_Array_Get_Item, class ANWXAIController* CallFunc_GetCreatureController_CreatureController, bool CallFunc_IsValid_ReturnValue, class AAIC_CreatureBase_C* K2Node_DynamicCast_AsAIC_Creature_Base, bool K2Node_DynamicCast_bSuccess_2, const struct FTransform& CallFunc_GetObjectTransform_ReturnValue, class AActor* CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_TransformLocation_ReturnValue, TScriptInterface<class IAICompanionInterface> K2Node_DynamicCast_AsAICompanion_Interface, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_HasLeader_ReturnValue, TArray<class AActor*>& CallFunc_SortByDistanceToTarget_ReturnValue, class AActor* CallFunc_Array_Get_Item_2, TArray<class UObject*>& K2Node_MakeArray_Array, float CallFunc_GetDistanceTo_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FHitResult& CallFunc_NWXLineTraceSingle_OutHit, bool CallFunc_NWXLineTraceSingle_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_2, float CallFunc_GetDistanceTo_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FTransform& CallFunc_GetObjectTransform_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class ABP_AoePayload_Dispellable_SunGiant_StonePillar_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_CreatureAbility_SunGiant_StonePillars(int32 EntryPoint, bool K2Node_Event_bWasCancelled);
};

}


