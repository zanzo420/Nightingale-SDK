#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x138 - 0xA0)
// BlueprintGeneratedClass BP_PhysicsAVFXComponent.BP_PhysicsAVFXComponent_C
class UBP_PhysicsAVFXComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       VelocityMagnitude;                                 // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         ImpactEvent;                                       // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         RollEvent;                                         // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         RollStopEvent;                                     // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         WaterImpactEvent;                                  // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         OnCooldown;                                        // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RollLoopActive;                                    // 0xD1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E7E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScopedAkComponent*                    AkComponent;                                       // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       MinimumVelocity;                                   // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       MinTimeBetweenImpacts;                             // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TriggerImpactsOverRollLoop;                        // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFirstImpact;                                     // 0xF9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E7F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FirstImpactVelocityOverride;                       // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InWater;                                           // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E80[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               WaterImpactLocation;                               // 0x110(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAkSwitchValue*>                SwitchRefsToLoad;                                  // 0x128(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_PhysicsAVFXComponent_C* GetDefaultObj();

	void TriggerPickUpLiquidSplash(const struct FVector& StartTraceLocation, class AActor* OwnerActor, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, float CallFunc_LineTraceForWaterHit_OutWaterDepth, const struct FHitResult& CallFunc_LineTraceForWaterHit_OutHitResult, bool CallFunc_LineTraceForWaterHit_ReturnValue, class UNiagaraComponent* CallFunc_Spawn_Surface_Impact_VFX_SpawnedSystem, const struct FGameplayTag& CallFunc_Spawn_Surface_Impact_VFX_SurfaceTag, double CallFunc_Spawn_Surface_Impact_VFX_WaterDepth_ImplicitCast);
	void Check_For_Water_Splash_On_Immersion(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPhysicalMaterial* PhysicalMaterial, struct FHitResult& HitResult, const struct FHitResult& FinalHitResult, double FinalWaterDepth, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector& CallFunc_FindClosestCollisionPointOnOverlap_ClosestPoint, bool CallFunc_FindClosestCollisionPointOnOverlap_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_LineTraceForWaterHit_OutWaterDepth, const struct FHitResult& CallFunc_LineTraceForWaterHit_OutHitResult, bool CallFunc_LineTraceForWaterHit_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, double CallFunc_CheckWaterDepth_Water_Depth, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double K2Node_VariableSet_FinalWaterDepth_ImplicitCast);
	void Trigger_Liquid_Splash_Audio(double Velocity, double WaterDepth, class UScopedAkComponent* ScopedAkComponent, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, float CallFunc_SetRTPCValue_Value_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast_1);
	void ExitWater(bool CallFunc_IsValid_ReturnValue);
	void Trigger_Liquid_Splash(double WaterDepth, const struct FGameplayTag& ImpactTag, struct FHitResult& HitResult, double Velocity, class AActor* CallFunc_GetOwner_ReturnValue, class UNiagaraComponent* CallFunc_Spawn_Surface_Impact_VFX_SpawnedSystem, const struct FGameplayTag& CallFunc_Spawn_Surface_Impact_VFX_SurfaceTag, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void CheckWaterDepth(double* Water_Depth, const TArray<enum class EObjectTypeQuery>& TraceObjects, double WaterDepth, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, TArray<class AActor*>& Temp_object_Variable, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, double CallFunc_Vector_Distance_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double K2Node_Select_Default, float CallFunc_SetRTPCValue_Value_ImplicitCast);
	void CheckIfGrounded(bool* Grounded, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, bool CallFunc_IsValid_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue);
	void StopRollLoop(FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue);
	void SetImpactMaterial(class UPhysicalMaterial* PhysMat, class UAkComponent* AkComponent, bool CallFunc_IsValid_ReturnValue, class UNWXPhyiscalMaterial* K2Node_DynamicCast_AsNWXPhyiscal_Material, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void Hit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void StartTimer();
	void ScopedAkTick(enum class EScopedAkComponentState State);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPhysicalMaterial* Physics_Material, struct FHitResult& HitResult);
	void OnEndOverlap(class UPhysicalMaterial* PhysicsMaterial);
	void ExecuteUbergraph_BP_PhysicsAVFXComponent(int32 EntryPoint, class AActor* K2Node_CustomEvent_SelfActor, class AActor* K2Node_CustomEvent_OtherActor_1, const struct FVector& K2Node_CustomEvent_NormalImpulse, const struct FHitResult& K2Node_CustomEvent_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_VSize_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UScopedAkComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, double CallFunc_VSize_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_CheckIfGrounded_Grounded, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_TryResume_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue_1, bool CallFunc_TryResume_ReturnValue_1, enum class EScopedAkComponentState K2Node_CustomEvent_State, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_1, class UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent, class AActor* K2Node_CustomEvent_OtherActor, class UPhysicalMaterial* K2Node_CustomEvent_Physics_Material, const struct FHitResult& K2Node_CustomEvent_HitResult, double CallFunc_CheckWaterDepth_Water_Depth, class UPhysicalMaterial* K2Node_CustomEvent_PhysicsMaterial, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_5, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double K2Node_Select_Default, class UAkSwitchValue* Temp_object_Variable, double CallFunc_CheckWaterDepth_Water_Depth_1, class UAkSwitchValue* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UAkSwitchValue* K2Node_Select_Default_1, float CallFunc_SetRTPCValue_Value_ImplicitCast, float CallFunc_RetriggerableDelay_Duration_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast_1);
};

}


