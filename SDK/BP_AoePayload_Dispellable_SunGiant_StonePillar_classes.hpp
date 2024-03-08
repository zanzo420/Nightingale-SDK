#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x160 (0x868 - 0x708)
// BlueprintGeneratedClass BP_AoePayload_Dispellable_SunGiant_StonePillar.BP_AoePayload_Dispellable_SunGiant_StonePillar_C
class ABP_AoePayload_Dispellable_SunGiant_StonePillar_C : public ABP_AoePayload_Dispellable_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x708(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScopedAkComponent*                    ScopedAk;                                          // 0x710(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        LBrambleInt;                                       // 0x718(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_9CDE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Telltime;                                          // 0x720(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                       WallObjects;                                       // 0x728(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayAbilitySpecDef               BrambleAbility;                                    // 0x738(0x98)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          TellHandle;                                        // 0x7D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        TellInt;                                           // 0x7D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CDF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_CreatureBase_C*                    OwnerCreature;                                     // 0x7E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               UpdateBeam;                                        // 0x7E8(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         ActivateBeam;                                      // 0x800(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CE0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     BeamSystem;                                        // 0x808(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_Creature_Wildlife_SunGiant_C*      BP_Creature_Wildlife_SunGiant;                     // 0x810(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               BeamShootLocation;                                 // 0x818(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    BeamScopedAk;                                      // 0x830(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ImpactPoint;                                       // 0x838(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    PillarScopedAk;                                    // 0x850(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class APawn*>                         Players_0;                                         // 0x858(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_AoePayload_Dispellable_SunGiant_StonePillar_C* GetDefaultObj();

	void OnRep_ActivateBeam(class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FVector& CallFunc_TransformLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetTargetGroundLevel_HitDetected, const struct FVector& CallFunc_GetTargetGroundLevel_GroundLocation, const struct FVector& CallFunc_GetTargetGroundLevel_GroundNormal, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NVFX_Spawn_System_Attached_SpawnSuccessful, class UNiagaraComponent* CallFunc_NVFX_Spawn_System_Attached_NiagaraSystemSpawned, bool CallFunc_IsValid_ReturnValue_2);
	void OnRep_UpdateBeam(bool CallFunc_IsValid_ReturnValue);
	void BrambleWallSpawnAudio(const struct FVector& AudioLocation, class UAkAudioEvent* AkEvent, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue);
	void BrambleWallBuildUpAudio(const struct FVector& AudioLocation, int32 Temp_int_Variable, class UAkAudioEvent* Temp_object_Variable, class UAkAudioEvent* Temp_object_Variable_1, class UAkAudioEvent* Temp_object_Variable_2, class UAkAudioEvent* Temp_object_Variable_3, class UAkAudioEvent* Temp_object_Variable_4, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UAkAudioEvent* K2Node_Select_Default, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue);
	void BeginFadeIn(bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class ABP_Creature_Wildlife_SunGiant_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Sun_Giant, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_CreatureCreatedObstacle_StonePillar_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
	void BeginFadeOut(double TimeOverride, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, class ABP_CreatureCreatedObstacle_C* K2Node_DynamicCast_AsBP_Creature_Created_Obstacle, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CrossServerDestroySelf(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class ABP_CreatureCreatedObstacle_C* K2Node_DynamicCast_AsBP_Creature_Created_Obstacle, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void CustomEvent_1(class AActor* DestroyedActor);
	void CustomEvent_2(class ANWXAICharacter* AICharacter);
	void CustomEvent_0();
	void CustomEvent_3();
	void MoveAudio(const struct FVector& Location);
	void ExecuteUbergraph_BP_AoePayload_Dispellable_SunGiant_StonePillar(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable_5, enum class EMoveComponentAction Temp_byte_Variable, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Variable_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, class AActor* K2Node_CustomEvent_DestroyedActor, int32 CallFunc_Subtract_IntInt_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, class ANWXAICharacter* K2Node_CustomEvent_AICharacter, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_7, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Multiply_IntInt_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_TransformLocation_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_TransformLocation_ReturnValue_3, bool CallFunc_GetTargetGroundLevel_HitDetected, const struct FVector& CallFunc_GetTargetGroundLevel_GroundLocation, const struct FVector& CallFunc_GetTargetGroundLevel_GroundNormal, const struct FGameplayTag& Temp_struct_Variable_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class ABP_Creature_Wildlife_SunGiant_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Sun_Giant, bool K2Node_DynamicCast_bSuccess_2, const struct FGameplayTag& Temp_struct_Variable_3, double CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_4, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FGameplayTag& K2Node_Select_Default_1, class ABP_CreatureCreatedObstacle_StonePillar_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_Hit_Result_Valid, const struct FHitResult& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_Hit_Result, const struct FVector& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_Impact_Point, const struct FRotator& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_ImpactRotation, const struct FLinearColor& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_ImpactSurfaceColor, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const struct FVector& K2Node_CustomEvent_Location, const struct FTransform& CallFunc_GetTransform_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, TArray<class APawn*>& CallFunc_GetPlayersInRange_Players, bool CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_Hit_Result_Valid_1, const struct FHitResult& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_Hit_Result_1, const struct FVector& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_Impact_Point_1, const struct FRotator& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_ImpactRotation_1, const struct FLinearColor& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_ImpactSurfaceColor_1, bool CallFunc_NVFX_SpawnSystem_ReturnValue, class UNiagaraComponent* CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_2, double K2Node_VariableSet_TickDamage_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MoveComponentTo_OverTime_ImplicitCast);
};

}


