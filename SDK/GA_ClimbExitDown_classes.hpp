#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x498 - 0x458)
// BlueprintGeneratedClass GA_ClimbExitDown.GA_ClimbExitDown_C
class UGA_ClimbExitDown_C : public UGA_ClimbExitBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x458(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               ExitDownLocation;                                  // 0x460(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNWXTraversalComponent*                TraversalComp;                                     // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ELedgeType                        ExitDownTransitionType;                            // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8DF4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          FBMontageToPlay;                                   // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TPMontageToPlay;                                   // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_ClimbExitDown_C* GetDefaultObj();

	void CanExitDownBP(const struct FGameplayAbilityActorInfo& ActorInfo, bool* CanExit, struct FVector* ExitLocation, class UCapsuleComponent* LocalCapsuleComp, class ABP_Character_C* LocalCharacter, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_K2_GetWalkableFloorAngle_ReturnValue, const struct FVector& CallFunc_Vector_Up_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, float CallFunc_GetScaledCapsuleRadius_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, const struct FVector& CallFunc_Vector_Down_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_1, float CallFunc_GetScaledCapsuleRadius_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_GetScaledCapsuleRadius_ReturnValue_2, const struct FVector& CallFunc_GetUpVector_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_2, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Vector_Down_ReturnValue_1, const struct FVector& CallFunc_NegateVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Vector_Down_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_NegateVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, const struct FHitResult& CallFunc_CapsuleTraceSingle_OutHit, bool CallFunc_CapsuleTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, float CallFunc_AngleBetween_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast, double CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void CheckExitConditions(const struct FGameplayAbilityActorInfo& ActorInfo, bool* CanExit, bool CallFunc_CanExitDownBP_CanExit, const struct FVector& CallFunc_CanExitDownBP_ExitLocation);
	void OnNotifyEnd_06F79FC248E02B6B0BD45F91C96DE13B(class FName NotifyName);
	void OnNotifyBegin_06F79FC248E02B6B0BD45F91C96DE13B(class FName NotifyName);
	void OnInterrupted_06F79FC248E02B6B0BD45F91C96DE13B(class FName NotifyName);
	void OnBlendOut_06F79FC248E02B6B0BD45F91C96DE13B(class FName NotifyName);
	void OnCompleted_06F79FC248E02B6B0BD45F91C96DE13B(class FName NotifyName);
	void OnCancelled_E1720D5E4BAD7764920FBEA517252480();
	void OnInterrupted_E1720D5E4BAD7764920FBEA517252480();
	void OnBlendOut_E1720D5E4BAD7764920FBEA517252480();
	void OnCompleted_E1720D5E4BAD7764920FBEA517252480();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_ClimbExitDown(int32 EntryPoint, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, bool CallFunc_CanExitDownBP_CanExit, const struct FVector& CallFunc_CanExitDownBP_ExitLocation, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_4, class USkeletalMeshComponent* CallFunc_GetFP_FullBodyMesh_ReturnValue, bool CallFunc_GetTraversalRow_IsValid, class UAnimMontage* CallFunc_GetTraversalRow_FPMontage, class UAnimMontage* CallFunc_GetTraversalRow_FBMontage, class UAnimMontage* CallFunc_GetTraversalRow_TPMontage, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool K2Node_Event_bWasCancelled, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
};

}


