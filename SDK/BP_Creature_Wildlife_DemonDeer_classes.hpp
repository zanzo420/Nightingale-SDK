#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x33E (0x1958 - 0x161A)
// BlueprintGeneratedClass BP_Creature_Wildlife_DemonDeer.BP_Creature_Wildlife_DemonDeer_C
class ABP_Creature_Wildlife_DemonDeer_C : public ABP_Creature_Wildlife_C
{
public:
	uint8                                        Pad_6837[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1620(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Creature_Audio_Looping_C*          BP_Creature_Audio_Looping;                         // 0x1628(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AILoadoutComponentBase_C*          BP_AILoadoutComponentBase;                         // 0x1630(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight_Incorporeal;                            // 0x1638(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     WP_Indicator;                                      // 0x1640(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_RearRight;                                 // 0x1648(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_RearLeft;                                  // 0x1650(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_Right;                                     // 0x1658(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Foot_Left;                                      // 0x1660(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Body;                                           // 0x1668(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    Ak_Head;                                           // 0x1670(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_DemonDeer_Aura;                                 // 0x1678(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_DemonDeer_Resurrection;                         // 0x1680(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_HarvestComponent_C*                BP_HarvestComponent;                               // 0x1688(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_DemonDeer_Ambient_Breath;                       // 0x1690(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_DemonDeer_Ambient_Pelvis;                       // 0x1698(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_DemonDeer_Ambient_R;                            // 0x16A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_DemonDeer_Ambient_L;                            // 0x16A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_DemonDeer_Ambient;                              // 0x16B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInWorldItemContainerComponent*        InWorldItemContainer;                              // 0x16B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_LoadoutComponent_C*                BP_LoadoutComponent;                               // 0x16C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        ApexHarvestNodeInstance;                           // 0x16C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6838[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ApexHarvestNodeInstanceLocation;                   // 0x16D0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ResourceNode_IIM_C*                ApexHarvestNode;                                   // 0x16E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimerHandle_Trees;                                 // 0x16F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_ResourceNode_IIM_C*                LCached_Resource_Node;                             // 0x16F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         LFound_Instance;                                   // 0x1700(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6839[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                LConsidered_Instances;                             // 0x1708(0x10)(Edit, BlueprintVisible)
	struct FVector                               LCached_Instance_Location;                         // 0x1718(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LCachedInstance;                                   // 0x1730(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_683A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_AoePayload_Dispellable_Eoten_C*> Brambles;                                          // 0x1738(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	uint8                                        Pad_683B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIIMInstance                          TreeIImInst;                                       // 0x1750(0x170)(Edit, BlueprintVisible, Net, RepNotify)
	double                                       PlayerDistanceThreshold;                           // 0x18C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GetAggressive;                                     // 0x18C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_683C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TimerHandle_Aggression;                            // 0x18D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Invincible;                                        // 0x18D8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         Resurrecting;                                      // 0x18D9(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         NearPlayer;                                        // 0x18DA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_683D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        IIMActors;                                         // 0x18E0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                          TimerHandle_GetLocalTrees;                         // 0x18F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        LIndex;                                            // 0x18F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_683E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                ValidIndexs;                                       // 0x1900(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                   BPSpawner_Data;                                    // 0x1910(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDemonDeerCalm;                                   // 0x1920(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        IMMLength;                                         // 0x1930(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IMMCounter;                                        // 0x1934(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_CreatureBase_C*>            WispSummons;                                       // 0x1938(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_CreatureBase_C*>            SpawnedWildlife;                                   // 0x1948(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_Creature_Wildlife_DemonDeer_C* GetDefaultObj();

	void AtMaxWispSummons(const struct FGameplayTag& Temp_struct_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void SummonedWispDead(class ANWXAICharacter* Wisp, const struct FGameplayTag& Temp_struct_Variable, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, bool CallFunc_ActorHasTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ServerDeathLogic();
	void RefreshStatus();
	void OnCreautreAdded(class ABP_CreatureBase_C* Creature, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, int32 CallFunc_Array_AddUnique_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1);
	void OnEQSFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, const struct FVector& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_CreatureSpawner_Wildlife_C* CallFunc_FinishSpawningActor_ReturnValue);
	void BecomeAggressive(const struct FGameplayTagContainer& SummonTags, const TArray<struct FDataTableRowHandle>& ValidCreatures, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_BPSpawnerData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class ANWXGameStateBase* CallFunc_GetNWXGameStateBase_ReturnValue, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager, bool CallFunc_IsValid_ReturnValue, TArray<struct FDataTableRowHandle>& CallFunc_GetValidCreaturesForRealm_ReturnValue);
	void Start_WP_Indicator();
	void HandleTagCountChanged(struct FGameplayTag& Tag, int32 Count, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2);
	void SummonDead(class ANWXAICharacter* Creature, const struct FGameplayTag& Temp_struct_Variable, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& Temp_struct_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void InstanceChanged(int32 InstanceID, enum class EIIMGameplayState OldState, enum class EIIMGameplayState NewState, int32 OldHealth, int32 NewHealth, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FIIMInstance& CallFunc_GetInstance_OutInstance, bool CallFunc_GetInstance_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorFloat_ReturnValue, const struct FBox& CallFunc_MakeBox_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, const struct FVector& CallFunc_FindClosestPointToBoxCenterThatIsReachableFromPawn_PolyLocation, bool CallFunc_FindClosestPointToBoxCenterThatIsReachableFromPawn_ReturnValue, enum class EBlackboardGetResult CallFunc_TrySetBlackboardVector_Branches, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void GetLocalTrees(bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FActorAndInstanceIds>& CallFunc_GetGameplayActorsAndInstancesInRadiusXY_OutActorsAndInstances);
	void OnRep_Resurrecting();
	void ClientDeathLogic();
	void OnRep_Invincible(const struct FGameplayTagContainer& EnterTag, const struct FGameplayTagContainer& ExitTag, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable_1, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, int32 CallFunc_PostAkEvent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_3, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, int32 CallFunc_PostAkEvent_ReturnValue_1, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void CheckDeadTree(const TArray<int32>& LInstances, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABP_ResourceNode_IIM_C* K2Node_DynamicCast_AsBP_Resource_Node_IIM, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& Temp_struct_Variable, enum class EBlackboardGetResult CallFunc_TrySetBlackboardVector_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_IsStateActive_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, TArray<enum class EIIMGameplayState>& K2Node_MakeArray_Array, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetNearestInstanceToPawn_FoundInstance, const struct FVector& CallFunc_GetNearestInstanceToPawn_Location, int32 CallFunc_GetNearestInstanceToPawn_InstanceID, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1);
	void SetHarvestNodeInstanceLocation(const struct FVector& HarvestNodeInstanceLocation);
	void SetHarvestNodeInstancee(int32 HarvestNodeInstance);
	void SetHarvestNode(class ABP_ResourceNode_IIM_C* HarvestNode);
	void GetHarvestNodeInstanceLocation(struct FVector* ApexHarvestNodeInstanceLocation);
	void GetHarvestNodeInstance(int32* HarvestNodeInstance);
	void GetHarvestNode(class ABP_ResourceNodeIIMBase_C** HarvestNode);
	void RemoveItemCreatureGrants(class AEquippableItem* Item);
	void ApplyItemCreatureGrants(class AEquippableItem* Item);
	void CrossServerSendGameplayEventToActor(struct FGameplayTag& EventTag, struct FGameplayEventData& Payload);
	void ReceiveBeginPlay();
	void BndEvt__BP_Creature_Wildlife_DemonDeer_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void BndEvt__BP_Creature_Wildlife_DemonDeer_Mesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ExecuteUbergraph_BP_Creature_Wildlife_DemonDeer(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FGameplayTag& K2Node_Event_EventTag, const struct FGameplayEventData& K2Node_Event_Payload, int32 CallFunc_SendGameplayEventToActor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse_1, const struct FHitResult& K2Node_ComponentBoundEvent_Hit_1, bool CallFunc_HasAuthority_ReturnValue, const struct FHitResult& CallFunc_ResolveHitResult_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess, class AInteractiveInstancedMeshManager* K2Node_DynamicCast_AsInteractive_Instanced_Mesh_Manager, bool K2Node_DynamicCast_bSuccess_1, const struct FTagValueContainer& Temp_struct_Variable, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, const struct FTagValueContainer& Temp_struct_Variable_2, const struct FHitResult& CallFunc_ResolveHitResult_ReturnValue_1, class AInteractiveInstancedMeshManager* K2Node_DynamicCast_AsInteractive_Instanced_Mesh_Manager_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_3, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsServer_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, const struct FGameplayTag& Temp_struct_Variable_4, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_IsStateActive_ReturnValue, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput_1, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer_1, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_5);
	void OnDemonDeerCalm__DelegateSignature();
};

}


