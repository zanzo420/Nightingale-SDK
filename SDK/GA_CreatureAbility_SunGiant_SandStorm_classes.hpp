#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x678 - 0x5F0)
// BlueprintGeneratedClass GA_CreatureAbility_SunGiant_SandStorm.GA_CreatureAbility_SunGiant_SandStorm_C
class UGA_CreatureAbility_SunGiant_SandStorm_C : public UGA_CreatureAbility_Melee_Ishmael_C
{
public:
	TArray<class AActor*>                        ProjectileTarget;                                  // 0x5F0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTransform                            Transform;                                         // 0x600(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Creature_Wildlife_SunGiant_C*      SunGiant;                                          // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        ActorsToIgnore;                                    // 0x668(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_SunGiant_SandStorm_C* GetDefaultObj();

	void HandleEvent(const struct FGameplayTag& EventTags, const struct FGameplayEventData& EventData, const struct FTransform& RTransform, const struct FTransform& Transform, const TArray<class AActor*>& ProjectileTarget, const struct FLinearColor& Temp_struct_Variable, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, int32 Temp_int_Array_Index_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& Temp_struct_Variable_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ABP_Creature_Wildlife_SunGiant_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Sun_Giant, bool K2Node_DynamicCast_bSuccess, class ABP_Creature_Wildlife_SunGiant_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Sun_Giant_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_GetObjectTransform_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, class ANWXAIController* CallFunc_GetCreatureController_CreatureController, class AAIC_CreatureBase_C* K2Node_DynamicCast_AsAIC_Creature_Base, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, class AActor* CallFunc_Array_Get_Item, double CallFunc_Subtract_DoubleDouble_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, TArray<class UObject*>& K2Node_MakeArray_Array_1, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FHitResult& CallFunc_NWXLineTraceSingle_OutHit, bool CallFunc_NWXLineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_AoePayload_Dispellable_SunGiant_Sandstorm_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const struct FTransform& CallFunc_GetObjectTransform_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_TransformLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast);
};

}


