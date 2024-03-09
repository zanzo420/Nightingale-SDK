#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x178 (0x5A0 - 0x428)
// BlueprintGeneratedClass GA_TraversalAbility.GA_TraversalAbility_C
class UGA_TraversalAbility_C : public UGA_BaseTraversalAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTraversalTraceResult                 ActivateHitResult;                                 // 0x430(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class ABP_Character_C*                       MyCharacter;                                       // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNWXTraversalComponent*                TraversalComponent;                                // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTraversalTraceResult                 TraceResult;                                       // 0x478(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UNWX_CharacterMovementComponent*       MoveComponent;                                     // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            TraversalMontages_0;                               // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          FullBodyMontage;                                   // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ThirdPersonMontage;                                // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  EndSectionName;                                    // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           AppliedGameplayEffect;                             // 0x4D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowHands;                                         // 0x4E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          EarlyBreakoutTimer;                                // 0x4E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  BreakoutNotifyName;                                // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BreakoutMagnitudeThreshold;                        // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TestedLandingLocation;                             // 0x500(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELedgeType                        Transition_Type;                                   // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BC5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               GoalActorPosition;                                 // 0x520(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Goal_Rotation;                                     // 0x538(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               GoalFloorPosition;                                 // 0x550(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SyncPointName;                                     // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FromLocation;                                      // 0x570(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              FromRotation;                                      // 0x588(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UGA_TraversalAbility_C* GetDefaultObj();

	bool IsServerAndNotTesting(bool CallFunc_AreAutomatedTestsRunning_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetClientServerDebugName(class FName Name, class FName* CS_DebugName, bool CallFunc_IsServer_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	void StopAllMantleMontages(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class USkeletalMeshComponent* CallFunc_GetTPMesh_SkeletalMesh, class USkeletalMeshComponent* CallFunc_GetFP_FullBodyMesh_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1);
	void SimpleValidate(double MaximumDistance, bool* Valid, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, bool CallFunc_Greater_DoubleDouble_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, float CallFunc_GetScaledCapsuleRadius_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FHitResult& CallFunc_CapsuleTraceSingleForObjects_OutHit, bool CallFunc_CapsuleTraceSingleForObjects_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_Vector_Distance_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, float CallFunc_CapsuleTraceSingleForObjects_HalfHeight_ImplicitCast, float CallFunc_CapsuleTraceSingleForObjects_Radius_ImplicitCast);
	void Validate_LedgeCatchMantle(bool* Valid, bool CallFunc_SimpleValidate_Valid);
	void Validate_100cmMantle(bool* Valid, bool CallFunc_SimpleValidate_Valid);
	void Validate_200cmMantle(bool* Valid, bool CallFunc_SimpleValidate_Valid);
	void PrimeTransition(bool ShowHands, class FName SyncPointName, class UAnimMontage* FP_Body_Montage, class UAnimMontage* Third_Person_Montage, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
	void GetPlayerRelativeMantleHeight(const struct FVector& TestPosition, double MaxDistanceAbove, double MaxDistanceBelow, class ACharacter* Character, bool* IsInRange, bool* IsShoulderRange, bool* IsPelvisRange, bool* IsKneeRange, const struct FVector& TestPositionBottom, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_3, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1);
	void SweepLandingLocation(const struct FVector& LandingLocation, struct FVector* TestedPosition, TArray<class AActor*>& K2Node_MakeArray_Array, float CallFunc_GetScaledCapsuleRadius_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_SelectVector_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast);
	void GetTargetTransformFromTraceResult(const struct FVector& LandingPosition, struct FVector* GoalLocation, struct FRotator* GoalRotation, const struct FVector& CallFunc_SweepLandingLocation_TestedPosition, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue);
	void RemoveAirborneEffect(class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue);
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, class ABP_Character_C* LocalCharacter, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTagContainer& CallFunc_K2_CanActivateAbility_RelevantTags, bool CallFunc_K2_CanActivateAbility_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, class ANWXGameStateBase* CallFunc_GetGameState_GameState, bool CallFunc_IsClimbing_ReturnValue, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsTraversalEnabled_IsEnabled, bool CallFunc_IsServer_ReturnValue, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, bool CallFunc_IsInAir_IsInAir, TArray<class AActor*>& K2Node_MakeArray_Array, double CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_AreAutomatedTestsRunning_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, const struct FGameplayTagContainer& CallFunc_CanActivateAbilityByEvent_OptionalRelevantTags, bool CallFunc_CanActivateAbilityByEvent_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FRotator& CallFunc_GetControlRotation_ReturnValue_2, const struct FVector& CallFunc_LessLess_VectorRotator_ReturnValue, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FTraversalTraceResult& CallFunc_TraversalTrace_OutResult, bool CallFunc_TraversalTrace_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_GetPlayerRelativeMantleHeight_IsInRange, bool CallFunc_GetPlayerRelativeMantleHeight_IsShoulderRange, bool CallFunc_GetPlayerRelativeMantleHeight_IsPelvisRange, bool CallFunc_GetPlayerRelativeMantleHeight_IsKneeRange, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_MakeVector_Z_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast);
	void OnNotifyEnd_92A57AF74322939267C7959C2ADC8D04(class FName NotifyName);
	void OnNotifyBegin_92A57AF74322939267C7959C2ADC8D04(class FName NotifyName);
	void OnInterrupted_92A57AF74322939267C7959C2ADC8D04(class FName NotifyName);
	void OnBlendOut_92A57AF74322939267C7959C2ADC8D04(class FName NotifyName);
	void OnCompleted_92A57AF74322939267C7959C2ADC8D04(class FName NotifyName);
	void OnNotifyEnd_68E3BE9E403150824FCC8EA2C920316E(class FName NotifyName);
	void OnNotifyBegin_68E3BE9E403150824FCC8EA2C920316E(class FName NotifyName);
	void OnInterrupted_68E3BE9E403150824FCC8EA2C920316E(class FName NotifyName);
	void OnBlendOut_68E3BE9E403150824FCC8EA2C920316E(class FName NotifyName);
	void OnCompleted_68E3BE9E403150824FCC8EA2C920316E(class FName NotifyName);
	void Play_Traversal_Montage();
	void ClimbTransition();
	void Check_For_Breakout();
	void Event_Start_Breakout_Check(class FName NotifyName);
	void Event_End_Breakout_Check(class FName NotifyName);
	void Server_Request_Traversal(const struct FVector& FromLocation, const struct FRotator& FromRotation, enum class ELedgeType TransitionType, const struct FVector& ToLocation, const struct FRotator& ToRotation);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_TraversalAbility(int32 EntryPoint, bool CallFunc_IsServerAndNotTesting_ReturnValue, class FName K2Node_CustomEvent_NotifyName_7, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetEnableLookInput_Success, bool CallFunc_NotEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_6, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName Temp_name_Variable_1, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FVector& CallFunc_GetTargetTransformFromTraceResult_GoalLocation, const struct FRotator& CallFunc_GetTargetTransformFromTraceResult_GoalRotation, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class USkeletalMeshComponent* CallFunc_GetFP_FullBodyMesh_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class FName K2Node_CustomEvent_NotifyName_8, bool CallFunc_IsValid_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_1, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_SetEnableLookInput_Success_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FRotator& CallFunc_GetControlRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsInAir_IsInAir, TArray<class AActor*>& K2Node_MakeArray_Array, double CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_NegateVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class FName K2Node_CustomEvent_NotifyName_9, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromTransform_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_GetPlayLength_ReturnValue, const struct FMotionWarpingTarget& K2Node_MakeStruct_MotionWarpingTarget, class FName K2Node_CustomEvent_NotifyName_10, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FVector& K2Node_CustomEvent_FromLocation, const struct FRotator& K2Node_CustomEvent_FromRotation, enum class ELedgeType K2Node_CustomEvent_TransitionType, const struct FVector& K2Node_CustomEvent_ToLocation, const struct FRotator& K2Node_CustomEvent_ToRotation, bool K2Node_Event_bWasCancelled, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_2, bool CallFunc_Validate_200cmMantle_Valid, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, bool CallFunc_Validate_LedgeCatchMantle_Valid, bool CallFunc_Validate_100cmMantle_Valid, class USkeletalMeshComponent* CallFunc_GetTPMesh_SkeletalMesh, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, const struct FTraversalTraceResult& CallFunc_TraversalTrace_OutResult, bool CallFunc_TraversalTrace_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class USkeletalMeshComponent* CallFunc_GetTPMesh_SkeletalMesh_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class FName K2Node_CustomEvent_NotifyName_11, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServerAndNotTesting_ReturnValue_1, bool CallFunc_GetPlayerRelativeMantleHeight_IsInRange, bool CallFunc_GetPlayerRelativeMantleHeight_IsShoulderRange, bool CallFunc_GetPlayerRelativeMantleHeight_IsPelvisRange, bool CallFunc_GetPlayerRelativeMantleHeight_IsKneeRange, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsServerAndNotTesting_ReturnValue_2, bool CallFunc_IsServerAndNotTesting_ReturnValue_3, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_MakeVector_Z_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast_1);
};

}


