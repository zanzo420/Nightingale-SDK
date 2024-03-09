#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x428 (0x780 - 0x358)
// BlueprintGeneratedClass BP_ItemProxy_Simple_Torch.BP_ItemProxy_Simple_Torch_C
class ABP_ItemProxy_Simple_Torch_C : public ANWXActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Flames;                                            // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    ScopedAk;                                          // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PhysicsAVFXComponent_C*            BP_Physics_AVFX_Component;                         // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAsyncAssetLoaderComponent*            AsyncAssetLoader;                                  // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_LightPct_40C6900F4569F138AE4D859A5F2473D9; // 0x398(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline__Direction_40C6900F4569F138AE4D859A5F2473D9; // 0x39C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DBF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline;                                          // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Impulse;                                           // 0x3A8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ItemClaimAttempted;                                // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsBonus;                                           // 0x3D0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsInteracting;                                     // 0x3D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DC0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UNiagaraSystem>         ShimmerEffect;                                     // 0x3D8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         Sweeping;                                          // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DC1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               AddedToStructure;                                  // 0x408(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       LastTriggerTime;                                   // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPhysicsStopScheduled;                            // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DC2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       PhysicsStopTimeout;                                // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>         EssenceEffect;                                     // 0x428(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class ABP_TimeOfDayManager_C*                TimeOfDayManager;                                  // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FItemLightSettings                    CachedLightSettings;                               // 0x458(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          WaterCheckHandle;                                  // 0x488(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       InventoryEntry;                                    // 0x490(0x2F0)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ABP_ItemProxy_Simple_Torch_C* GetDefaultObj();

	void Water_Check(const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, TArray<class UObject*>& Temp_object_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_NWXLineTraceSingle_OutHit, bool CallFunc_NWXLineTraceSingle_ReturnValue);
	void SetupLightIntensity(class AActor* ManagerActor, class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class AActor* CallFunc_GetTimeOfDayManagerFromSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_TimeOfDayManager_C* K2Node_DynamicCast_AsBP_Time_Of_Day_Manager, bool K2Node_DynamicCast_bSuccess, class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast);
	void FadeOutTorch(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 CallFunc_PostAkEvent_ReturnValue);
	void UpdateLightIntensity(double CallFunc_GetNormalizedVisualTime_VisualTime, bool CallFunc_IsValid_ReturnValue, float CallFunc_ConvertNormalizedTimeto24Hr_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Lerp_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_Lerp_B_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast, float CallFunc_ConvertNormalizedTimeto24Hr_NormalizedTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_SetIntensity_NewIntensity_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast);
	void OnSpawnAudioLoaded(class UAkAudioEvent* LoadedAudio, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_PostAkEventScoped_ReturnValue);
	void ClientLoadAndPlaySpawnedAudio(TSoftObjectPtr<class UAkAudioEvent> FoundAudioEvent, const struct FGameplayTag& Context, const struct FGameplayTag& AVFX_Tag, const struct FGameplayTagContainer& Temp_struct_Variable, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag, const struct FGameplayTag& CallFunc_GetItemAVFXTag_ReturnValue, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FResourceAudioSpawned& CallFunc_GetTableCellData_OutData, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue);
	void TrySchedulePhysicsTimeout(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void DisablePhysics();
	void SetPhysicsTimeoutOnHit(double TimeoutInSeconds);
	void SpawnImpactVFX(struct FHitResult& Hit, class AActor* Self_Actor, double CallFunc_GetTimeSeconds_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, double CallFunc_VSize_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue);
	void OnWakeup(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void Audio_Event_Loaded_Roll_Stop(class UAkAudioEvent* AudioEvent);
	void Audio_Event_Loaded_Roll_Start(class UAkAudioEvent* AudioEvent);
	void Audio_Event_Loaded_Impact(class UAkAudioEvent* AudioEvent);
	void LoadImpactAudioEvents(TSoftObjectPtr<class UAkAudioEvent> TempSoftPath, const struct FItemAudioPhysics& PhysicsItemAudio, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue_2, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits_2, TArray<class UScriptStruct*>& K2Node_MakeArray_Array_1, TSoftObjectPtr<class UAkAudioEvent> CallFunc_ResolveTaggableSound_ReturnValue_2, const struct FGameplayTag& CallFunc_GetATRowAndColumnFromItemData_ATRow, const struct FGameplayTag& CallFunc_GetATRowAndColumnFromItemData_ATColumn, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs_1, bool CallFunc_QueryTable_ReturnValue_1, const struct FItemAudioPhysics& CallFunc_GetTableCellData_OutData, const struct FItemAudioPhysics& CallFunc_GetTableCellData_OutData_1, bool CallFunc_MatchesTag_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, double K2Node_VariableSet_MinTimeBetweenImpacts_ImplicitCast);
	void DestroyProxyItem();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, class FName BoneName);
	void BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentWakeSignature__DelegateSignature(class UPrimitiveComponent* WakingComponent, class FName BoneName);
	void CrossServerDestroySelf();
	void WakeEvent(class UObject* Structure, class AActor* Instigator);
	void BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__BP_ItemProxy_Mesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void Client_PickUpWaterSplashSpawn(const struct FVector& PickerViewLocation);
	void MulticastSpawnAudio();
	void StructureMovedEvent(class UObject* MovedEntity);
	void ReceiveDestroyed();
	void FadeLight();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ItemProxy_Simple_Torch(int32 EntryPoint, float CallFunc_GetLifeSpan_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_SleepingComponent, class FName K2Node_ComponentBoundEvent_BoneName_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_WakingComponent, class FName K2Node_ComponentBoundEvent_BoneName, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UObject* K2Node_CustomEvent_Structure, class AActor* K2Node_CustomEvent_Instigator, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsAnyRigidBodyAwake_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UObject*>& Temp_object_Variable, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FVector& K2Node_CustomEvent_PickerViewLocation, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UObject* K2Node_CustomEvent_MovedEntity, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float K2Node_Event_DeltaSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_PostAkEventScoped_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_NWXLineTraceSingle_OutHit, bool CallFunc_NWXLineTraceSingle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TArray<class UObject*>& Temp_object_Variable_1, TArray<struct FHitResult>& CallFunc_NWXMultiSphereTraceByChannel_OutHits, bool CallFunc_NWXMultiSphereTraceByChannel_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_GetHitObject_OutObject, TScriptInterface<class IPlaceableEntityInterface> K2Node_DynamicCast_AsPlaceable_Entity_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureEventInterface> K2Node_DynamicCast_AsStructure_Event_Interface, bool K2Node_DynamicCast_bSuccess_1, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetAttenuationRadius_NewRadius_ImplicitCast);
	void ItemClaimAttempted__DelegateSignature();
};

}


