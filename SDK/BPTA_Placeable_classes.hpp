#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A8 (0x5B0 - 0x408)
// BlueprintGeneratedClass BPTA_Placeable.BPTA_Placeable_C
class ABPTA_Placeable_C : public ABPTA_TargetingActorLogic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ACharacter*                            PlacingCharacter;                                  // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AController*                           PlacingController;                                 // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       PreviewDeltaRotationZ;                             // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               PlacementActor;                                    // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       PreviewDeltaZHeight;                               // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      PlacementTargetData;                               // 0x438(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       PreviewRotationIncrement;                          // 0x460(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PreviewHeightIncrement;                            // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasPlaceableChanged;                               // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9635[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPlaceableClassLoaded;                            // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FRotator                              PreviousControlRotation;                           // 0x488(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               PreviousCameraLocation;                            // 0x4A0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    EventData;                                         // 0x4B8(0xD0)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         bIsPlacementPreviewActive;                         // 0x588(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9636[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Highlighting_InvalidOverlapSphere_C* InvalidOverlapHighlight;                           // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bForcePlacementUpdate;                             // 0x598(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9637[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TimeUntilForceUpdate;                              // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxTimeBetweenForceUpdates;                        // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPTA_Placeable_C* GetDefaultObj();

	void IsPlacementCooldownActive(bool* IsCooldownActive, class UObject* BuildingInterface, bool Temp_bool_Variable, TSubclassOf<class IInterface> Temp_class_Variable, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanSpawnStructure_ReturnValue, class ABP_PlayerController_C* CallFunc_GetPlacingController_Controller, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_FindFirstImplementor_ReturnValue);
	void IsForceUpdateRequired(bool* bIsRequired, bool CallFunc_Less_DoubleDouble_ReturnValue);
	void UpdateForceUpdateTimer(double DeltaTime, double CallFunc_Subtract_DoubleDouble_ReturnValue);
	void ResetForceUpdateTimer();
	void OnPlacementRotationUpdated(double Amount);
	void RefreshIndicator(struct FStructurePlacementFeedback& StructurePlacementFeedback, const struct FStructurePlacementFeedback& LFeedbackData, TScriptInterface<class IBPI_HUD_Manager_C> CallFunc_Get_HUD_Manager_HUD_Manager);
	void HandleCollisionEmitterIndicator(bool Condition, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue, TArray<class UMeshComponent*>& CallFunc_GetStructureMeshes_ReturnValue, TArray<class UMeshComponent*>& CallFunc_GetStructureMeshes_ReturnValue_1, class UMeshComponent* CallFunc_Array_Get_Item, class UMeshComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IStructureMeshInfoInterface> K2Node_DynamicCast_AsStructure_Mesh_Info_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetMeshExtents_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Highlighting_InvalidOverlapSphere_C* CallFunc_FinishSpawningActor_ReturnValue);
	void OnPlacementEnded(bool bIsPlacementSuccessful, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, class ABP_PlayerController_C* CallFunc_GetPlacingController_Controller, bool CallFunc_IsValid_ReturnValue);
	void OnPlacementStarted(bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class ABP_PlayerController_C* CallFunc_GetPlacingController_Controller, bool CallFunc_IsValid_ReturnValue);
	void IsTextFeedbackVisible(struct FStructurePlacementFeedback& PlacementFeedbackData, bool* IsVisible, bool CallFunc_Not_PreBool_ReturnValue);
	void IsPlaceableVisible(struct FStructurePlacementFeedback& PlacementFeedbackData, bool* IsVisible, bool CallFunc_Not_PreBool_ReturnValue);
	void ChangePlaceableVisibility(bool IsVisible);
	void UpdateTargetData(class UObject* Placeable, struct FGameplayAbilityTargetDataHandle* TargetData, class UObject* LPlaceable, class ACharacter* CallFunc_GetPlacingCharacter_PlayerPawn, TScriptInterface<class IPlaceableEntityInterface> K2Node_DynamicCast_AsPlaceable_Entity_Interface, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_GetPlacementTransform_TargetData, float CallFunc_GetPlacementTransform_OptionalDeltaHeightZ_ImplicitCast, float CallFunc_GetPlacementTransform_OptionalDeltaRotationZ_ImplicitCast);
	bool CanPlaceableBeRaised();
	void IsPreviewUnchanged(const struct FGameplayAbilityTargetDataHandle& TargetData, bool* IsPreviewUnchanged, class ACharacter* CallFunc_GetPlacingCharacter_PlayerPawn, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void ProcessFeedbackData(const struct FStructurePlacementFeedback& FeedbackData, class UObject* L_ClostestObjectOverlapping, double L_ClosestHit, const struct FVector& LPawnLocation, const struct FStructurePlacementFeedback& LFeedbackData, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_BuildModeFeedback_C> K2Node_DynamicCast_AsBPI_Build_Mode_Feedback, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPlaceableVisible_IsVisible, bool CallFunc_CanPlaceableBeRaised_ReturnValue);
	void DestroyPlaceable(class UObject* Placeable, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess);
	void GetPlacementTargetData(class UObject* Placeable, struct FGameplayAbilityTargetDataHandle* TargetData, bool CallFunc_IsForceUpdateRequired_bIsRequired, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsPreviewUnchanged_IsPreviewUnchanged, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_UpdateTargetData_TargetData);
	void ValidateClientTargetData(struct FGameplayAbilityTargetDataHandle& Data, bool* bIsTargetDataValid, const struct FGameplayAbilityTargetDataHandle& LPlacementTargetData, class UObject* SpawnedPlaceable, class AController* L_Controller, class ACharacter* L_Character, bool CallFunc_IsValid_ReturnValue, class ACharacter* CallFunc_GetPlacingCharacter_PlayerPawn, TScriptInterface<class IPlaceableEntityInterface> K2Node_DynamicCast_AsPlaceable_Entity_Interface, bool K2Node_DynamicCast_bSuccess, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, const struct FStructurePlacementFeedback& CallFunc_IsValidPlacement_PlacementFeedbackData, class UObject* CallFunc_SpawnPlaceableObject_SpawnedPlaceable, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void SetDeltaHeight(double PreviewDeltaZHeight);
	void UpdateDeltaHeight(double Delta, double NewDelta, double CallFunc_SignOfFloat_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_CanPlaceableBeRaised_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue);
	void UpdateDeltaRotation(double AxisValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue);
	void ConfirmAndSendTargetData(struct FGameplayAbilityTargetDataHandle* TargetData, class UAkComponent* Ak_Component, class AActor* SpawnedActor, const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, bool CallFunc_IsValid_ReturnValue, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_GetPlacementTargetData_TargetData, const struct FGameplayAbilityTargetDataHandle& CallFunc_GetInitialPlacementTargetData_TargetData, class UObject* CallFunc_SpawnPlaceableObject_SpawnedPlaceable, class ACharacter* CallFunc_GetPlacingCharacter_PlayerPawn, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void InitializePreviewActor(bool CallFunc_HasAuthority_ReturnValue, class ACharacter* CallFunc_GetPlacingCharacter_PlayerPawn, bool CallFunc_IsServer_ReturnValue, const struct FTransform& CallFunc_GetObjectTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, TScriptInterface<class IPlaceableEntityInterface> K2Node_DynamicCast_AsPlaceable_Entity_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_InitializePlacementState_ReturnValue, double CallFunc_SetPreviewRotation_Angle_ImplicitCast);
	void SetPreviewRotation(double Angle, float CallFunc_ClampAxis_ReturnValue, float CallFunc_ClampAxis_Angle_ImplicitCast, double K2Node_VariableSet_PreviewDeltaRotationZ_ImplicitCast);
	void GetInitialPlacementTargetData(struct FGameplayAbilityTargetDataHandle* TargetData, const struct FRotator& LSpawnRotation, int32 Temp_int_Array_Index_Variable, class ACharacter* CallFunc_GetPlacingCharacter_PlayerPawn, bool CallFunc_GetPlacementRaytraceHits_OutFoundHits, TArray<struct FHitResult>& CallFunc_GetPlacementRaytraceHits_OutHitResults, class ACharacter* CallFunc_GetPlacingCharacter_PlayerPawn_1, const struct FHitResult& CallFunc_Array_Get_Item, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_Round_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromTransform_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromTransform_ReturnValue_1, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	void SpawnPlaceableObject(const struct FGameplayAbilityTargetDataHandle& TargetData, class UObject** SpawnedPlaceable);
	void CleanupPlacementPreview(bool bIsPlacementSuccessful, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FStructurePlacementFeedback& K2Node_MakeStruct_StructurePlacementFeedback, TScriptInterface<class IBPI_HUD_Manager_C> CallFunc_Get_HUD_Manager_HUD_Manager);
	void GetPlacingController(class ABP_PlayerController_C** Controller, class ACharacter* CallFunc_GetPlacingCharacter_PlayerPawn, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1);
	void GetPlacingCharacter(class ACharacter** PlayerPawn, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess);
	void UpdatePlacementPreview(const struct FTransform& LPreviewTransform, class FText FoundPlacementMessage, bool IsValidPlacement, bool FoundPlacementTransform, const struct FTransform& CallFunc_GetTargetDataOrigin_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_GetPlacementTargetData_TargetData, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class ABP_PlayerController_C* CallFunc_GetPlacingController_Controller, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IStructureWorldInterface> K2Node_DynamicCast_AsStructure_World_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IPlaceableEntityInterface> K2Node_DynamicCast_AsPlaceable_Entity_Interface, bool K2Node_DynamicCast_bSuccess_1, const struct FStructurePlacementFeedback& CallFunc_SetPlacementFeedback_FeedbackData, bool CallFunc_SetPlacementFeedback_ReturnValue);
	void InpActEvt_InputAction_AdjustStructureHeight_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_InputAction_CancelPlacementMode_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_InputAction_RotateStructure_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_InputAction_Place_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveStartTargeting(class UGameplayAbility* Ability);
	void ReceiveCancelTargeting();
	void ReceiveDestroyed();
	void ReceiveCleanup();
	void Async_LoadFromEventData();
	void StartPlacing();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BPTA_Placeable(int32 EntryPoint, bool CallFunc_IsPlacementCooldownActive_IsCooldownActive, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_2, float K2Node_EnhancedInputActionEvent_ElapsedTime_2, float K2Node_EnhancedInputActionEvent_TriggeredTime_2, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_2, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, class UInputAction* Temp_object_Variable, double Temp_real_Variable, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable, double Temp_real_Variable_1, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, class UInputAction* Temp_object_Variable_1, double CallFunc_Conv_InputActionValueToAxis1D_ReturnValue, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, double CallFunc_Abs_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UInputAction* Temp_object_Variable_2, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_5, double Temp_real_Variable_6, bool Temp_bool_Variable_1, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_DeltaSeconds, class UGameplayAbility* K2Node_Event_Ability, class ACharacter* CallFunc_GetPlacingCharacter_PlayerPawn, class ABP_PlayerController_C* CallFunc_GetPlacingController_Controller, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, TScriptInterface<class IPlaceableEntityInterface> K2Node_DynamicCast_AsPlaceable_Entity_Interface, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_GetInitialPlacementTargetData_TargetData, class UObject* CallFunc_SpawnPlaceableObject_SpawnedPlaceable, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_PlayerController_C* CallFunc_GetPlacingController_Controller_1, class ABP_PlayerController_C* CallFunc_GetPlacingController_Controller_2, const struct FStructurePlacementFeedback& CallFunc_IsValidPlacement_PlacementFeedbackData, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, double Temp_real_Variable_7, double Temp_real_Variable_8, double CallFunc_Abs_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double Temp_real_Variable_9, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UInputAction* Temp_object_Variable_3, bool CallFunc_IsValid_ReturnValue_2, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_3, float K2Node_EnhancedInputActionEvent_ElapsedTime_3, float K2Node_EnhancedInputActionEvent_TriggeredTime_3, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_3, double Temp_real_Variable_9, double Temp_real_Variable_8, double CallFunc_Conv_InputActionValueToAxis1D_ReturnValue_1, double CallFunc_UpdateForceUpdateTimer_DeltaTime_ImplicitCast);
	void OnPlaceableClassLoaded__DelegateSignature();
};

}

