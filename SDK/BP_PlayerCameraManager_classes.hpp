#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x319 (0x26F9 - 0x23E0)
// BlueprintGeneratedClass BP_PlayerCameraManager.BP_PlayerCameraManager_C
class ABP_PlayerCameraManager_C : public ANWXPlayerCameraManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x23E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_CameraWaterAudioComponent_C*       BP_CameraWaterAudioComponent;                      // 0x23E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Miasma_Audio_Manager_C*            BP_Miasma_Audio_Manager;                           // 0x23F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_VFX_Ambience_Manager_C*            BP_VFX_Ambience_Manager;                           // 0x23F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                          Ak_2D;                                             // 0x2400(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Ambience_Manager_C*                BP_Ambience_Manager;                               // 0x2408(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                LandImpactTimeline__Direction_DE4988D5424C22F5F74CCD86D807FD81; // 0x2410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    LandImpactTimeline;                                // 0x2418(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        LerpTimeline_ConstraintAlpha_325E9D50491257D1FA9F9AB3DD502ED1; // 0x2420(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                LerpTimeline__Direction_325E9D50491257D1FA9F9AB3DD502ED1; // 0x2424(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    LerpTimeline;                                      // 0x2428(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                DefaultFirstPersonArmsMesh;                        // 0x2430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                DefaultFirstPersonBodyMesh;                        // 0x2438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXCharacter*                         CharacterRef;                                      // 0x2440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       BPCharacterRef;                                    // 0x2448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      FPCameraComponentRef;                              // 0x2450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ECameraConstraintMode             CurrentConstraintMode;                             // 0x2458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                CurrentConstraintMesh;                             // 0x2460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CurrentSocketName;                                 // 0x2468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECameraConstraintMode             PreviousConstraintMode;                            // 0x2470(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                PreviousConstraintMesh;                            // 0x2478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  PreviousSocketName;                                // 0x2480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AccumulatedLerpTime;                               // 0x2488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CurrentOrientationOffset;                          // 0x2490(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              PreviousOrientationOffset;                         // 0x24A8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                       LastDebugArrowTime;                                // 0x24C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              FocusedWorldRotation;                              // 0x24C8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DrawDebug;                                         // 0x24E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentDriveControlRotation;                       // 0x24E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PreviousDriveControlRotation;                      // 0x24E2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TetherActive;                                      // 0x24E3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3401[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ConstraintAlpha;                                   // 0x24E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CameraRelativeTransformOrig;                       // 0x24F0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CameraRelativeTransformOrig_Crouching;             // 0x2550(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TetherTImeoutTime;                                 // 0x25B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SimulateHeadLookMovement;                          // 0x25B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3403[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       HeadSimForwardTranslation;                         // 0x25C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LookUpTranslation;                                 // 0x25C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LookSideTranslation;                               // 0x25D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ConstraintLerpAlpha;                               // 0x25D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ConstraintLerpActive;                              // 0x25E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3404[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       HeadSimAlpha;                                      // 0x25E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ConstraintTimerHandle;                             // 0x25F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<enum class ECameraConstraintMode>     ConstraintStack;                                   // 0x25F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  ActiveTetherSocketName;                            // 0x2608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECameraTetherType                 ActiveTetherType;                                  // 0x2610(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3406[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ActiveTetherRotationOffset;                        // 0x2618(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                       TetherAlpha;                                       // 0x2630(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Initialized;                                       // 0x2638(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3408[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TetherPitchInput;                                  // 0x2640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TetherYawInput;                                    // 0x2648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentLandImpactTime;                             // 0x2650(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           CurrentLandImpactCurve;                            // 0x2658(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentLandImpactOffsetValue;                      // 0x2660(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ViewPitchMinClamp;                                 // 0x2668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ViewPitchMaxClamp;                                 // 0x2670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CameraShakeIntensity;                              // 0x2678(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HeadSimUpTranslation;                              // 0x2680(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeadSimLeftTranslation;                            // 0x2688(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeadSimLowerLimit;                                 // 0x268C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Spectator_C*                       SpectatorRef;                                      // 0x2690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CurrentBaseLocation;                               // 0x2698(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CurrentBaseRotation;                               // 0x26B0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               LandingOffset;                                     // 0x26C8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HeadSimOffset;                                     // 0x26E0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WasCrouched;                                       // 0x26F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PlayerCameraManager_C* GetDefaultObj();

	class UAmbienceManager* GetAmbienceManager();
	class UAkComponent* GetAk2DComponent();
	void Calculate_Land_Impact_Offset(struct FVector* OffsetPosition, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void PopConstraint(enum class ECameraConstraintMode ConstraintType, bool* Popped, int32 FoundIndex, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue);
	void PushConstraint(enum class ECameraConstraintMode ConstraintType, int32 CallFunc_Array_Add_ReturnValue);
	struct FRotator LerpFromControlRotation(const struct FRotator& B, double ALPHA, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, float CallFunc_RLerp_Alpha_ImplicitCast);
	void GetSocketRotationWithAppliedOffset(class USceneComponent* SkeletalMesh, class FName SocketName, const struct FRotator& OffsetRotation, struct FRotator* OffsetRotator, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_NegateRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FRotator& CallFunc_NegateRotator_ReturnValue_1);
	struct FVector LerpToSocketPosition(class USceneComponent* SkeletalMesh, class FName SocketName, const struct FVector& FromPosition, double ALPHA, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, float CallFunc_VLerp_Alpha_ImplicitCast);
	struct FVector GetOriginCameraWorldPosition(const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void ApplyAdditiveCameraOffset(const struct FVector& BasePosition, const struct FRotator& BaseRotation, struct FVector* OffsetPosition, struct FRotator* OffsetRotation, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, bool CallFunc_GetEnableCameraShake_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, float CallFunc_Multiply_RotatorFloat_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, float CallFunc_MakeRotator_Roll_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast);
	void AcquireMeshReferences(class USkeletalMeshComponent* CallFunc_GetFP_FullBodyMesh_ReturnValue, TArray<class USkeletalMeshComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void Calculate_Simulated_Head_Look_Offset(struct FVector* OffsetCameraLocation, const struct FVector& PitchCompBack, const struct FVector& PitchCompForward, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FTransform& CallFunc_GetTransform_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, bool CallFunc_IsClimbing_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_2, double CallFunc_MakeLiteralDouble_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_3, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_InverseTransformRotation_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_NegateVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_3, const struct FRotator& CallFunc_GetControlRotation_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_Ease_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_3, const struct FVector& CallFunc_SelectVector_ReturnValue, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, double CallFunc_MapRangeClamped_InRangeA_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_2);
	void IsCameraTethered(bool* CameraIsTethered, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_2, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast_1, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast_2, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast_3);
	void CacheFPCamera(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class ICameraProviderInterface> CallFunc_GetCamera_self_CastInput, class UCameraComponent* CallFunc_GetCamera_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsActive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void GetCharacterRef(class ANWXCharacter** CharacterRef, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void CacheCurrentConstraint(enum class ECameraConstraintMode NewConstraintMode, class USkeletalMeshComponent* NewConstraintMeshComponent, class FName NewSocketName, const struct FRotator& NewOrientationOffset, bool NewDriveControlRotation);
	bool BlueprintUpdateCamera(class AActor* CameraTarget, struct FVector* NewCameraLocation, struct FRotator* NewCameraRotation, float* NewCameraFOV, const struct FRotator& CalculatedBaseRotation, const struct FVector& CalculatedBasePosition, bool CallFunc_UsingAThirdPersonCamera_ReturnValue, float CallFunc_GetCrouchedHalfHeight_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_GetCrouchedHalfHeight_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_ApplyAdditiveCameraOffset_OffsetPosition, const struct FRotator& CallFunc_ApplyAdditiveCameraOffset_OffsetRotation, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FVector& CallFunc_Calculate_Simulated_Head_Look_Offset_OffsetCameraLocation, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Calculate_Land_Impact_Offset_OffsetPosition, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_1, float CallFunc_GetCurveValue_ReturnValue_2, float CallFunc_GetCurveValue_ReturnValue_3, float CallFunc_GetCurveValue_ReturnValue_4, float CallFunc_GetCurveValue_ReturnValue_5, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FRotator& CallFunc_GetSocketRotationWithAppliedOffset_OffsetRotator, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, const struct FRotator& CallFunc_LerpFromControlRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, const struct FTransform& K2Node_Select_Default, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue, class ASpectatorPawn* CallFunc_GetSpectatorPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_3, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_4, const struct FRotator& CallFunc_GetSocketRotationWithAppliedOffset_OffsetRotator_1, const struct FRotator& CallFunc_GetControlRotation_ReturnValue_1, const struct FRotator& CallFunc_LerpFromControlRotation_ReturnValue_1, const struct FVector& CallFunc_LerpToSocketPosition_ReturnValue, const struct FVector& CallFunc_LerpToSocketPosition_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1, float CallFunc_VInterpTo_Constant_DeltaTime_ImplicitCast, double K2Node_VariableSet_HeadSimUpTranslation_ImplicitCast, double K2Node_VariableSet_HeadSimForwardTranslation_ImplicitCast, double K2Node_VariableSet_HeadSimAlpha_ImplicitCast, double K2Node_VariableSet_ConstraintAlpha_ImplicitCast);
	void LandImpactTimeline__FinishedFunc();
	void LandImpactTimeline__UpdateFunc();
	void LerpTimeline__FinishedFunc();
	void LerpTimeline__UpdateFunc();
	void Event_Remove_Constraint(enum class ECameraConstraintMode ConstraintType);
	void TriggerLandImpact(class UCurveFloat* ImpactCurve);
	void Update_Character_Reference(class APawn* OldPawn, class APawn* NewPawn);
	void TriggerConstraintLerp(double LerpTime);
	void Event_Set_Camera_Constraint__TranslationOnly_(class FName SocketName, class USkeletalMeshComponent* TargetMeshComponent, double Duration);
	void Event_Set_Camera_Constraint__Parent_(class FName SocketName, class USkeletalMeshComponent* TargetMeshComponent, const struct FRotator& OrientationOffset, bool DriveControlRotation, double Duration);
	void Event_Set_Camera_Constraint__Free_();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PlayerCameraManager(int32 EntryPoint, double CallFunc_MakeLiteralDouble_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue_1, enum class ECameraConstraintMode K2Node_CustomEvent_ConstraintType, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_PopConstraint_Popped, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, const struct FRotator& CallFunc_NegateRotator_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FRotator& CallFunc_NegateRotator_ReturnValue_1, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, double CallFunc_MakeLiteralDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, class UCurveFloat* K2Node_CustomEvent_ImpactCurve, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APawn* K2Node_CustomEvent_OldPawn, class APawn* K2Node_CustomEvent_NewPawn, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, float CallFunc_GetCurveValue_ReturnValue_1, float CallFunc_GetCurveValue_ReturnValue_2, TArray<class USkeletalMeshComponent*>& CallFunc_GetComponentsByTag_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, class USkeletalMeshComponent* CallFunc_Array_Get_Item, double CallFunc_Add_DoubleDouble_ReturnValue_3, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_3, TScriptInterface<class ICameraProviderInterface> CallFunc_GetCamera_self_CastInput, class UCameraComponent* CallFunc_GetCamera_ReturnValue, class USkeletalMeshComponent* CallFunc_GetFP_FullBodyMesh_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double K2Node_CustomEvent_LerpTime, double CallFunc_Divide_DoubleDouble_ReturnValue_2, TScriptInterface<class ICameraProviderInterface> CallFunc_GetCamera_self_CastInput_1, class UCameraComponent* CallFunc_GetCamera_ReturnValue_1, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_GetTPFieldOfView_ReturnValue, float CallFunc_GetFieldOfView_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, float CallFunc_BreakRotator_Roll_4, float CallFunc_BreakRotator_Pitch_4, float CallFunc_BreakRotator_Yaw_4, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, double CallFunc_Dot_VectorVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_UsingAThirdPersonCamera_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_4, double CallFunc_FClamp_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_5, double CallFunc_Lerp_ReturnValue_2, double CallFunc_FClamp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_3, double CallFunc_MakeLiteralDouble_ReturnValue_3, double CallFunc_MakeLiteralDouble_ReturnValue_4, double CallFunc_MakeLiteralDouble_ReturnValue_5, double CallFunc_MakeLiteralDouble_ReturnValue_6, class FName K2Node_CustomEvent_SocketName_1, class USkeletalMeshComponent* K2Node_CustomEvent_TargetMeshComponent_1, double K2Node_CustomEvent_Duration_1, bool CallFunc_IsValid_ReturnValue_5, class FName K2Node_CustomEvent_SocketName, class USkeletalMeshComponent* K2Node_CustomEvent_TargetMeshComponent, const struct FRotator& K2Node_CustomEvent_OrientationOffset, bool K2Node_CustomEvent_DriveControlRotation, double K2Node_CustomEvent_Duration, bool CallFunc_IsValid_ReturnValue_6, float K2Node_Event_DeltaSeconds, bool CallFunc_Greater_DoubleDouble_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character_1, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_Spectator_C* K2Node_DynamicCast_AsBP_Spectator, bool K2Node_DynamicCast_bSuccess_2, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess_3, enum class ECameraTetherType Temp_byte_Variable, float CallFunc_GetTimeRange_MinTime, float CallFunc_GetTimeRange_MaxTime, const struct FRotator& K2Node_Select_Default, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_12, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class ABP_Spectator_C* K2Node_DynamicCast_AsBP_Spectator_1, bool K2Node_DynamicCast_bSuccess_4, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter_1, bool K2Node_DynamicCast_bSuccess_5, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_TetherYawInput_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, float K2Node_VariableSet_ViewYawMax_ImplicitCast, float K2Node_VariableSet_ViewYawMin_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast, double K2Node_VariableSet_CurrentLandImpactOffsetValue_ImplicitCast, double K2Node_VariableSet_TetherAlpha_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_1, double K2Node_VariableSet_TetherPitchInput_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast, float CallFunc_SetPlayRate_NewRate_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float K2Node_VariableSet_ViewPitchMin_ImplicitCast, float K2Node_VariableSet_ViewPitchMax_ImplicitCast, float K2Node_VariableSet_ViewPitchMax_ImplicitCast_1, float K2Node_VariableSet_ViewPitchMin_ImplicitCast_1, float K2Node_VariableSet_ViewYawMax_ImplicitCast_1, float K2Node_VariableSet_ViewYawMin_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_ConstraintLerpAlpha_ImplicitCast);
};

}


