#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4A0 (0xB50 - 0x6B0)
// BlueprintGeneratedClass BP_IIMProxy_ChaosFallingTree.BP_IIMProxy_ChaosFallingTree_C
class ABP_IIMProxy_ChaosFallingTree_C : public ABP_IIMProxy_FallingTree_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAIPerceptionStimuliSourceComponent*   AIPerceptionStimuliSource;                         // 0x6B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*           PhysicsConstraint;                                 // 0x6C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Anchor;                                            // 0x6C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Trunk;                                             // 0x6D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         AkEvent_Trunk;                                     // 0x6D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAkAudioEvent>          AkEvent_BranchesInterrupt_Soft;                    // 0x6E0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UAkAudioEvent*                         AkEvent_Branches;                                  // 0x708(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAkAudioEvent>          AkEvent_Branches_Soft;                             // 0x710(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UAkAudioEvent>          AkEvent_Trunk_Soft;                                // 0x738(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UAkAudioEvent*                         AkEvent_BranchesInterrupt;                         // 0x760(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CacheFallSpeedTimerHandle;                         // 0x768(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          UpdateAudioMultipositionTrunkTimerHandle;          // 0x770(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                          AkComponentTrunk;                                  // 0x778(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       CachedFallSpeed;                                   // 0x780(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MinorAudioImpactOnCooldown;                        // 0x788(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2ADA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       BranchesAudioImpactCooldownTime;                   // 0x790(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          UpdateAudioTimerHandle;                            // 0x798(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       AudioCacheTime;                                    // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinimumFallSpeed;                                  // 0x7A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinorAudioImpactCooldownTime;                      // 0x7B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                          AkComponentBranches_Interrupt;                     // 0x7B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                          AkComponentBranches;                               // 0x7C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       MultipositionUpdateTime;                           // 0x7C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AudioUpdateTime;                                   // 0x7D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                    AudioMultipositionTransforms;                      // 0x7D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         BranchesImpactAudioOnCooldown;                     // 0x7E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2ADB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                DamageCauser;                                      // 0x7F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         AudioDebugActive;                                  // 0x7F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayedBranchAudioOnce;                             // 0x7F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DrawColliders;                                     // 0x7FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LeavesScheduled;                                   // 0x7FB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2ADC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FallingLeavesSpeedThreshold;                       // 0x800(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAmbienceData                         AmbienceDataRow;                                   // 0x808(0x110)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UNiagaraComponent*>             FallingLeaves;                                     // 0x918(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         GroundHitEventsCalled;                             // 0x928(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2ADD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FrameFallSpeed;                                    // 0x930(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       JointBreakSpeedThreshold;                          // 0x938(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CutOffsetInCM;                                     // 0x940(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ConstraintsActive;                                 // 0x948(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2ADE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       AnchorHeightInCM;                                  // 0x950(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinimumTrunkRadius;                                // 0x958(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaximumTrunkRadius;                                // 0x960(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinimumJointLimit;                                 // 0x968(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaximumJointLimit;                                 // 0x970(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AngularMotorSizeThreshold;                         // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANWXTreeTrunkGeometryCollection*       TrunkGeometryCollection;                           // 0x980(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2ADF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIIMInstance                          IIMInstance;                                       // 0x990(0x170)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UInstancedResourceNodeComponent*       IIMComponent;                                      // 0xB00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IIIMProxyResourceGranter> ResourceGranter;                                   // 0xB08(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ResourcesGranted;                                  // 0xB18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AE0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 DamageTags;                                        // 0xB20(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       TrunkDamagePower;                                  // 0xB40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StumpTransitionDelayInSecs;                        // 0xB48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_IIMProxy_ChaosFallingTree_C* GetDefaultObj();

	void SetupStub(bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FIIMInstance& K2Node_Copy_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FIIMInstance& K2Node_SetFieldsInStruct_StructOut, const struct FIIMInstance& CallFunc_UpdateInstance_OutInstance, bool CallFunc_UpdateInstance_ReturnValue);
	void DamageTrunk(class AActor*& Other, struct FHitResult& Hit, bool CallFunc_ThrottledDamageGate_DamageAllowed, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FTagValueContainer& Temp_struct_Variable, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue_1, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, float CallFunc_DamageActor_BaseDamage_ImplicitCast);
	void SpawnResources(const TArray<struct FTransform>& ResourceTransforms, bool CallFunc_IsValid_ReturnValue, TArray<struct FTransform>& CallFunc_GenerateRandomTransformsAroundTrunk_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, TScriptInterface<class IIIMProxyResourceGranter> K2Node_DynamicCast_AsIIMProxy_Resource_Granter, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void SetIIM_InstanceData(class UInstancedResourceNodeComponent* IIMComponent, const struct FIIMInstance& IIMInstance, TScriptInterface<class IIIMProxyResourceGranter> ResourceGranter);
	void EnableStubDamage(const struct FIIMInstance& K2Node_Copy_ReturnValue, int32 CallFunc_GetStumpHealth_ReturnValue, const struct FIIMInstance& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_IsValid_ReturnValue, const struct FIIMInstance& CallFunc_UpdateInstance_OutInstance, bool CallFunc_UpdateInstance_ReturnValue);
	void CacheFallSpeed(float CallFunc_GetLinearVelocitySquared_ReturnValue, double CallFunc_Sqrt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Sqrt_A_ImplicitCast);
	void TryScheduleFallingLeaves(double FallingLeavesSpawnRateScale, double CallFunc_Conv_IntToDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_GetLeafColliders_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful, class UNiagaraComponent* CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1);
	void LineTraceFromCollisionSphere(class UStaticMeshComponent* CollisionSphere, bool* WasHit, struct FHitResult* OutHit, TArray<class AActor*>& K2Node_MakeArray_Array, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue);
	void SetAmbienceData(class FName InAmbienceData);
	void DrawDebugColliders(const struct FLinearColor& Color, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_GetLeafColliders_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_DrawDebugSphere_Radius_ImplicitCast);
	void SetDamageCauser(class AActor* Actor);
	void UpdateAudioMultipositionTrunk(const TArray<struct FTransform>& MultipositionTrunk, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_GetStumpProperties_OutBaseWS, float CallFunc_GetStumpProperties_OutRadius, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_GetLeafColliders_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasLeafColliders_Result, bool CallFunc_Less_IntInt_ReturnValue);
	void SpawnBranchAudio(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, TArray<class UStaticMeshComponent*>& CallFunc_GetLeafColliders_ReturnValue, bool CallFunc_HasLeafColliders_Result, class UStaticMeshComponent* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, FDelegateProperty_ Temp_delegate_Variable_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void ClearBranchesImpactAudioOnCooldown();
	void DrawAudioDebug(double TickInterval, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class UStaticMeshComponent*>& CallFunc_GetLeafColliders_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UStaticMeshComponent* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FTransform& CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, float CallFunc_DrawDebugSphere_Duration_ImplicitCast, float CallFunc_DrawDebugSphere_Duration_ImplicitCast_1, float CallFunc_DrawDebugSphere_Radius_ImplicitCast, float CallFunc_DrawDebugSphere_Duration_ImplicitCast_2);
	void UpdateAudio();
	void UpdateAudioMultipositionBranches(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UStaticMeshComponent*>& CallFunc_GetLeafColliders_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetRTPCs(class UAkComponent* AkComponent, class UAmbienceManager* AmbienceManager, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetTreeStandardDensityInner_ReturnValue, class UAmbienceManager* CallFunc_GetAmbienceManager_ReturnValue, float CallFunc_GetSeason_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_SetRTPCValue_Value_ImplicitCast);
	void HasLeafColliders(bool* Result, TArray<class UStaticMeshComponent*>& CallFunc_GetLeafColliders_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void RigConstraints(double AnchorWidthInMts, double GroundToTrunk, const struct FConstraintInstanceAccessor& CallFunc_GetConstraint_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_GetStumpProperties_OutBaseWS, float CallFunc_GetStumpProperties_OutRadius, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_GetStumpProperties_OutBaseWS_1, float CallFunc_GetStumpProperties_OutRadius_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast);
	void OnCollisionPrototype();
	void TryBreakingConstraints(bool CallFunc_IsTreeNearlyHorizontal_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ProcessTreeImpact(class AActor* Other, struct FHitResult& Hit, double DamageConservationThisFrame, double DamagingPowerThisFrame, class ABP_TreeTrunkGeom_Base_C* K2Node_DynamicCast_AsBP_Tree_Trunk_Geom_Base, bool K2Node_DynamicCast_bSuccess);
	void LoadAudio(const TArray<TSoftObjectPtr<class UAkAudioEvent>>& AkAudioEvents, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2);
	void OnAudioBatchLoadComplete(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, class UAkAudioEvent* CallFunc_ResolveAudio_ReturnValue, class UAkAudioEvent* CallFunc_ResolveAudio_ReturnValue_1, bool CallFunc_HasLeafColliders_Result, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_2, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, const struct FVector& CallFunc_GetStumpProperties_OutBaseWS, float CallFunc_GetStumpProperties_OutRadius, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, class UAkAudioEvent* CallFunc_ResolveAudio_ReturnValue_2, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast_1, float CallFunc_K2_SetTimer_Time_ImplicitCast_2);
	void MinorAudioImpact(const struct FHitResult& HitInfo, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable_1, float CallFunc_GetLinearVelocitySquared_ReturnValue, double CallFunc_Sqrt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, bool CallFunc_HasLeafColliders_Result, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_GetLeafColliders_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_PostAkEvent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, FDelegateProperty_ Temp_delegate_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Sqrt_A_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void ClearMinorAudioImpactCooldown();
	void StopAudioUpdates(bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_2);
	void SpawnBreakingEffect(const struct FVector& CallFunc_GetStumpProperties_OutBaseWS, float CallFunc_GetStumpProperties_OutRadius, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_NVFX_SpawnSystem_ReturnValue, class UNiagaraComponent* CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void ShutdownFallingLeaves(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UNiagaraComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SpawnGroundHit(const struct FVector& HitLocation, const struct FVector& ColliderLocation, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, bool CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_Hit_Result_Valid, const struct FHitResult& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_Hit_Result, const struct FVector& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_Impact_Point, const struct FRotator& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_ImpactRotation, const struct FLinearColor& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_ImpactSurfaceColor);
	void OnBeginFalling();
	void OnEndFalling(float TimeToStopTree);
	void OnFallingHit(struct FVector& HitLocation, struct FHitResult& Hit, bool IsNearlyHorizontal);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnCompleteMeshSetup();
	void OnEndOfLife();
	void ReceiveDestroyed();
	void OnVanish();
	void OnEndVerticalFalling();
	void ExecuteUbergraph_BP_IIMProxy_ChaosFallingTree(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, float K2Node_Event_TimeToStopTree, bool CallFunc_IsServer_ReturnValue_1, const struct FVector& K2Node_Event_HitLocation_1, const struct FHitResult& K2Node_Event_Hit_1, bool K2Node_Event_IsNearlyHorizontal, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_3, TArray<class UStaticMeshComponent*>& CallFunc_GetLeafColliders_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsFalling_ReturnValue, float CallFunc_GetLinearVelocitySquared_ReturnValue, double CallFunc_Sqrt_ReturnValue, bool CallFunc_IsServer_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LineTraceFromCollisionSphere_WasHit, const struct FHitResult& CallFunc_LineTraceFromCollisionSphere_OutHit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue_5, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsFalling_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_6, bool CallFunc_IsServer_ReturnValue_7, bool CallFunc_IsServer_ReturnValue_8, bool CallFunc_IsServer_ReturnValue_9, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, double CallFunc_ScheduleCallToOnVanish_TimeToDelayVanish_ImplicitCast, double CallFunc_Sqrt_A_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast);
};

}

