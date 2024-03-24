#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB7 (0xA28 - 0x971)
// BlueprintGeneratedClass BP_Structure_Constructed.BP_Structure_Constructed_C
class ABP_Structure_Constructed_C : public ABP_StructureBase_C
{
public:
	uint8                                        Pad_5BCC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x978(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Structure_Audio_Component_C*       BP_Structure_Audio_Component;                      // 0x980(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_StructureSupportComponent_C*       StructureSupportComponent;                         // 0x988(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionStimuliSourceComponent*   AIPerceptionStimuliSource;                         // 0x990(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       SystemsComponents;                                 // 0x998(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       DecalComponent;                                    // 0x9A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterial*>                     PlacementMaterials;                                // 0x9A8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	double                                       PlacementZOffset;                                  // 0x9B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          OnConstructedProgressTag;                          // 0x9C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         BuildModeIsVisible;                                // 0x9C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AddSimplifiedCollisionBox_;                        // 0x9C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BCD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          PendingRefresh;                                    // 0x9D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SupportMesh;                                       // 0x9D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_StaticMeshObject_C*                CachedSupportMesh;                                 // 0x9E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UNiagaraComponent*>             AttachedNiagaraComponents;                         // 0x9E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UBP_StructureFuelComponent_C*          FuelComponent;                                     // 0x9F8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      AreaOfEffect;                                      // 0xA00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_SnapComponent_C*                   SnapComponent;                                     // 0xA08(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         ConstructionDetectionBox;                          // 0xA10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                RespawnPoint;                                      // 0xA18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_StructureFireComponent_C*          FireComponent;                                     // 0xA20(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Structure_Constructed_C* GetDefaultObj();

	void GetFirstSupportingObject(class UObject** OutFirstSupportingObject);
	void GetSupportingObjects(TArray<struct FStructureSupportObjectData>* OutSupportingStructures);
	bool IsSupported();
	void GetSupportedObjects(TArray<struct FStructureSupportObjectData>* OutSupportedStructures);
	bool IsSupportingOtherObjects();
	void TraceForGroundSupport(bool bIncludeBasePotential, bool* OutIsIntersectingGround, TArray<struct FHitResult>* OutResults, TArray<struct FHitResult>& Temp_struct_Variable, bool Temp_bool_Variable, class UObject* CallFunc_GetSupportInterfaceObject_ReturnValue, TScriptInterface<class ISupportInterface> K2Node_DynamicCast_AsSupport_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TraceForGroundSupport_OutIsIntersectingGround, TArray<struct FHitResult>& CallFunc_TraceForGroundSupport_OutResults);
	bool TryDestroyIfUnsupported(class AActor* DeconstructionSource, class UObject* CallFunc_GetSupportInterfaceObject_ReturnValue, TScriptInterface<class ISupportInterface> K2Node_DynamicCast_AsSupport_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TryDestroyIfUnsupported_ReturnValue);
	struct FStructurePlacementFeedback_Support UpdateSupport();
	class USphereComponent* GetAreaOfEffect();
	class UActorComponent* GetAudioComponent();
	void GetBuildRadiusInformation(float* OutRadius, struct FVector* OutOrigin);
	class FText GetDisplayNameText(bool CallFunc_GetUIData_IsValid, const struct FStructureUIData& CallFunc_GetUIData_OutUIData);
	class FString GetStructureID(const class FString& CallFunc_Conv_GuidToString_ReturnValue);
	TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*> GetStructureInteractions(TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& CallFunc_GetAllStructureInteractions_AvailableInteractions);
	TArray<struct FStructureResourceRequirements> GetTotalResourceRequirements(class UBP_StructureResourcesObject_C* CallFunc_GetResourceInfoObject_ReturnValue, TArray<struct FStructureResourceRequirements>& CallFunc_GetTotalResourceRequirements_TotalResourceRequirements);
	bool StructureHasAddedResources(class UBP_StructureResourcesObject_C* CallFunc_GetResourceInfoObject_ReturnValue, bool CallFunc_StructureHasAddedResources_HasAddedResources);
	void GetSnapPoints(TArray<struct FGridPoint>* SnapPoints, TArray<struct FGridPoint>& K2Node_MakeArray_Array, class UBP_CompositePieceSnapObject_C* CallFunc_GetSnapObject_SnapObject, bool CallFunc_IsValid_ReturnValue, class UBP_CompositePieceSnapObject_C* CallFunc_GetSnapObject_SnapObject_1, TArray<struct FGridPoint>& CallFunc_GetGridPoints_ReturnValue);
	void GetSnapType(enum class ESnapType* SnapPointType, class UBP_CompositePieceSnapObject_C* CallFunc_GetSnapObject_SnapObject, enum class ESnapType CallFunc_GetSnapType_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetSnapComponent(class UCompositePieceSnapObject** SnapObject, class UBP_CompositePieceSnapObject_C* CallFunc_GetSnapObject_SnapObject);
	void GetSupportMesh(class UStaticMeshComponent** SupportMesh);
	void GetFuelComponent(class UBP_StructureFuelComponent_C** FuelComponent);
	void GetInventoryContainerInterface(class AActor* RequestingActor, TScriptInterface<class IItemContainer>* ContainerInterface);
	void IsInteractionDisabled(class AController* Controller, const struct FInteractionData& InteractionData, bool* bIsDisabled, class FString* DisabledText, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsStructureInteractionDisabled_IsDisabled, class FText CallFunc_IsStructureInteractionDisabled_InteractionMessage, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	class UStructureFireComponent* GetStructureFireComponentForModify();
	void Is_Component_AVFXPlane_or_Scatter_Mask(class USceneComponent* SceneComponent, bool* bIsMatchingComponent, class UClass* ComponentClass, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1);
	void Bind_Events(enum class EStructureState CallFunc_GetSchematicState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	class UStructureFireComponent* GetStructureFireComponent();
	void InitalizeFireComponent(class UBP_StructureFireComponent_C* CallFunc_AddComponentByClass_ReturnValue, bool CallFunc_GetFireData_IsValid, class UStructureFireDefinition* CallFunc_GetFireData_OutFireData);
	void Create_Respawn_Point(class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsStructureRespawnPoint_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_CreateRespawnPoint_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	class UPrimitiveComponent* GetStructureTraitAuraCollider();
	class UPrimitiveComponent* GetStructureTraitAuraColliderForModify();
	bool GetInteractionTag(struct FGameplayTag* InteractionTag, const struct FGameplayTag& LocalInteractionTag);
	class UStructurePlacerObject* GetStructurePlacerObject(class UBP_StructurePlacerObject_C* CallFunc_GetDefaultObject_ReturnValue, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool SetPlacementFeedback(struct FGameplayAbilityTargetDataHandle& PlacementTargetData, class AController* Controller, struct FStructurePlacementFeedback* FeedbackData, class UStructurePlacerObject* PlacerObject, bool CallFunc_HasAuthority_ReturnValue, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FStructurePlacementFeedback& CallFunc_SetPlacementFeedback_ReturnValue);
	bool InitializePlacementState(class APawn* PlacingCharacter, enum class EStructureState CallFunc_SetStructureSchematicState_ReturnValue);
	bool FinalizePlacement(class AController* Controller, struct FSnapPlacementTargetData& SnapData, class FString* Message, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, bool CallFunc_FinalizePlacement_ReturnValue);
	void GetPlacementTransform(class ACharacter* Character, float OptionalDeltaRotationZ, float OptionalDeltaHeightZ, struct FGameplayAbilityTargetDataHandle* TargetData, const TArray<struct FHitResult>& CornerHits, const struct FVector& Hit_Location, double MaxZ, const struct FTransform& GroundTransform, double DeltaHeight, const struct FRotator& SpawnRotation, class ACharacter* ControllingCharacter, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_GetPlacementTransform_ReturnValue);
	void IsValidPlacement(class AController* Controller, struct FGameplayAbilityTargetDataHandle& TargetData, struct FStructurePlacementFeedback* PlacementFeedbackData, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, const struct FStructurePlacementFeedback& CallFunc_IsValidPlacement_ReturnValue);
	class UObject* GetSupportInterfaceObject(class UStructureSupportObject* CallFunc_GetSinglePieceSupportObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetEventsObject(class UStructureEventsObject** EventObject, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue);
	void OnSchematicState(bool* Success, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_ToggleVFX_Success, bool CallFunc_IsServer_ReturnValue);
	TArray<class UMeshComponent*> GetMeshComponents(TArray<class UMeshComponent*>& CallFunc_Map_Keys_Keys);
	void OnStructureStateChanged(const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_RefreshState_Success);
	void InitializeStructure(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_RefreshState_Success, class UObject* CallFunc_GetSupportInterfaceObject_ReturnValue, bool CallFunc_IsServer_ReturnValue, TScriptInterface<class ISupportInterface> K2Node_DynamicCast_AsSupport_Interface, bool K2Node_DynamicCast_bSuccess);
	void PopulateSnapDataFromTable(const struct FTransform& Temp_struct_Variable, bool CallFunc_HasAuthority_ReturnValue, class UBP_SnapComponent_C* CallFunc_AddComponent_ReturnValue, const struct FTransform& Temp_struct_Variable_1, bool CallFunc_GetPlacementData_IsValid, class UStructurePlacementData* CallFunc_GetPlacementData_OutPlacementData, class UBoxComponent* CallFunc_AddComponent_ReturnValue_1, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsStructure_Support_Object, bool K2Node_ClassDynamicCast_bSuccess, class FName CallFunc_GetCollisionProfileName_ProfileName, TScriptInterface<class IStructureDataProviderInterface> CallFunc_GetStructureData_self_CastInput, bool CallFunc_GetStructureData_IsValid, const struct FStructureData& CallFunc_GetStructureData_OutStructureData, TScriptInterface<class IStructureDataProviderInterface> CallFunc_GetSnappableData_self_CastInput, bool CallFunc_GetSnappableData_IsValid, class UStructureSnappableData* CallFunc_GetSnappableData_OutSnappableData, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult);
	void GetSnapObject(class UBP_CompositePieceSnapObject_C** SnapObject, bool CallFunc_IsValid_ReturnValue, class UCompositePieceSnapObject* CallFunc_GetSinglePieceSnapObject_ReturnValue, class UBP_CompositePieceSnapObject_C* K2Node_DynamicCast_AsBP_Composite_Piece_Snap_Object, bool K2Node_DynamicCast_bSuccess);
	void EnableAreaOfEffectCollision(class USphereComponent* AOE, bool CallFunc_IsValid_ReturnValue, class USphereComponent* CallFunc_GetAreaOfEffect_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class FName CallFunc_GetCollisionProfileName_ProfileName);
	void InitializeAreaOfEffect(double LAreaOfEffectRadius, const struct FTransform& Temp_struct_Variable, bool CallFunc_Greater_DoubleDouble_ReturnValue, class USphereComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_GetConstructedStructureData_Success, class UStructureTypeData_Constructed* CallFunc_GetConstructedStructureData_OutConstructedStructureData, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_GetMeshOrigin_LocalLocation, const struct FVector& CallFunc_GetMeshOrigin_WorldLocation, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, double K2Node_VariableSet_LAreaOfEffectRadius_ImplicitCast, float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast);
	void LoadDataFromTable(class UStructureTypeData_Constructed* ConstructedStructureData, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item, class UBP_StructureFuelComponent_C* CallFunc_PopulateFuelDataFromTable_FuelComponent, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_GetConstructedStructureData_Success, class UStructureTypeData_Constructed* CallFunc_GetConstructedStructureData_OutConstructedStructureData);
	void GetConstructedStructureData(bool* Success, class UStructureTypeData_Constructed** OutConstructedStructureData, const class FString& StructureName, bool CallFunc_GetStructureType_IsValid, class UStructureTypeData* CallFunc_GetStructureType_OutStructureType, class UStructureTypeData_Constructed* K2Node_DynamicCast_AsStructure_Type_Data_Constructed, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_GetUIData_IsValid, const struct FStructureUIData& CallFunc_GetUIData_OutUIData, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1);
	void PopulateMeshState(class UStaticMeshComponent* NewLocalVar, class USceneComponent* CurrentComponent, const TArray<class USceneComponent*>& CurrentChildComponents, const TArray<class UMeshComponent*>& StructureMeshes, const TArray<class USceneComponent*>& AllMeshesComponents, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, class FName Temp_name_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, class USceneComponent* CallFunc_Array_Get_Item, class UMeshComponent* CallFunc_Array_Get_Item_1, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ComponentHasTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class USceneComponent* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue, class UMeshComponent* K2Node_DynamicCast_AsMesh_Component, bool K2Node_DynamicCast_bSuccess_1, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool K2Node_DynamicCast_bSuccess_2, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, bool CallFunc_GetComponentIsNavRelavent_ReturnValue, const struct FStructureMeshStateDefinition& K2Node_MakeStruct_StructureMeshStateDefinition, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Is_Component_AVFXPlane_or_Scatter_Mask_bIsMatchingComponent, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<class UMeshComponent*>& CallFunc_GetStructureMeshes_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children_1);
	void RefreshOverlappingPawns(const class FString& CurrentFunctionName, class AActor* LCurrentHitActor, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FTimerHandle& CallFunc_RefreshIsStructureCompletionBlocked_ReturnValue);
	void OnAnySchematicStateChange(class UMaterialInterface* Schematic_Material, bool Temp_bool_Variable, class UMaterialInstance* CallFunc_GetPlacementFeedbackMaterial_ReturnValue, class UMaterialInstance* CallFunc_GetPlacementFeedbackMaterial_ReturnValue_1, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* K2Node_Select_Default, const class FString& CallFunc_GetFunctionName_ReturnValue);
	void OnConstructionState(bool* Success, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void RefreshState(bool* Success, bool LSuccess, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_OnSchematicState_Success, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_OnConstructionState_Success, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_OnCompletedState_Success, bool CallFunc_OnConfirmedState_IsSuccess, bool CallFunc_OnPlacementState_Success, bool CallFunc_OnInitState_Success, bool CallFunc_IsServer_ReturnValue);
	void UpdateStateTags(bool CallFunc_HasAuthority_ReturnValue, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsServer_ReturnValue, const struct FGameplayTag& CallFunc_StructureCompleteTag_StructureCompleteTag, const struct FGameplayTag& CallFunc_SchematicTag_SchematicTag, const struct FGameplayTag& CallFunc_StructureCompleteTag_StructureCompleteTag_1, const struct FGameplayTag& CallFunc_SchematicTag_SchematicTag_1);
	void ExecuteDeconstructStructure(enum class EDeconstructionResourceReturn ResourceReturn, class AActor* DeconstructionSource, bool* Success, class AActor* LDeconstructSource, bool LDropAllResources, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UBP_StructureDamageObject_C* CallFunc_GetDamageObject_DamageObject, bool CallFunc_ExecuteDestroyStructure_Success);
	class UBP_StructureResourcesObject_C* GetResourceInfoObject(class UBP_StructureResourcesObject_C* CallFunc_GetDefaultObject_ReturnValue);
	void CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_GetEnabled_Enabled, bool CallFunc_CanInteractWithStructure_CanInteract, class FText CallFunc_CanInteractWithStructure_InteractionMessage);
	void GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_CanInteractWithStructure_CanInteract, class FText CallFunc_CanInteractWithStructure_InteractionMessage, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void OnDestroyedEvent(const TArray<class UMeshComponent*>& MeshComponents, const struct FVector& StructureBounds, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AController* CallFunc_GetOwningPlayerController_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RemoveRespawnPoint_ReturnValue, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FStructureDestructionData& CallFunc_MakeStructureDestructionData_DestructionData);
	void ToggleVFX(bool Enabled, bool* Success, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UNiagaraComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CompleteCompletableStructure(class ANWXAICharacter* AICharacter, bool* Complete, class ANWXAICharacter* LNWXAICharacter, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FStructureResourceRequirements>& CallFunc_GetTotalResourceRequirements_ReturnValue, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, const struct FStructureResourceRequirements& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_GetQuantityRemaining_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, enum class EStructureState CallFunc_SetStructureSchematicState_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasTag_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void SetDropAllResourcesState(bool DropAllResources, const struct FGameplayTag& CallFunc_DropAllResourcesTag_DropAllTag);
	void OnInitState(bool* Success, class UMaterialInterface* InitMaterial, class UMaterialInstance* CallFunc_GetPlacementFeedbackMaterial_ReturnValue);
	void OnConfirmedState(bool* IsSuccess, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_ToggleVFX_Success, bool CallFunc_IsServer_ReturnValue);
	void ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality, class UClass* StaticMeshClassRef, const TArray<class USkeletalMeshComponent*>& SkeletalMeshes, const TArray<class UStaticMeshComponent*>& StaticMeshes, const TArray<class UStaticMeshComponent*>& Highlight, int32 Temp_int_Array_Index_Variable, TArray<class UStaticMeshComponent*>& CallFunc_ReturnMeshToHighlight_StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>& CallFunc_ReturnMeshToHighlight_SkeletalMesh_to_Highlight, bool CallFunc_ReturnMeshToHighlight_Hostile_, enum class EItemQuality CallFunc_ReturnMeshToHighlight_Quality, TArray<class UMeshComponent*>& CallFunc_GetStructureMeshes_ReturnValue, class UMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void InitializeState(bool* bSuccess, bool CallFunc_RefreshState_Success, bool CallFunc_InitializeState_bSuccess);
	void UpdateMeshesCollision(bool LIsPlacement, bool IsCompleted, class UMeshComponent* Mesh, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, enum class EStructureState CallFunc_GetSchematicState_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class FName CallFunc_GetCollisionProfileName_ProfileName, TArray<class UMeshComponent*>& CallFunc_GetStructureMeshes_ReturnValue, bool Temp_bool_Variable, class UMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_GetCollisionProfileName_ProfileName_1, class FName CallFunc_GetCollisionProfileName_ProfileName_2, class FName K2Node_Select_Default);
	void IsSchematic(bool* bIsSchematic, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2);
	void OnPlacementState(bool* Success, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, const struct FStructurePlacementFeedback& CallFunc_GetValidPlacementFeedbackData_ReturnValue, bool CallFunc_ToggleVFX_Success);
	void OnCompletedState(bool* Success, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Array_Index_Variable, class UCompositePieceSnapObject* CallFunc_GetSnapComponent_SnapObject, bool CallFunc_IsValid_ReturnValue, TArray<class UObject*>& CallFunc_GetAllConnectedStructures_ConnectedStructures, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureStateObject* CallFunc_GetStateObject_ReturnValue, bool CallFunc_CheckStateTransition_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void UserConstructionScript(double ZScale, const struct FVector& BaseMeshLocation, const struct FVector& BaseMeshScale, const struct FVector& MeshBounds, class UMeshObject* StaticMeshObject, class UMeshComponent* SourceComp, class UMeshComponent* DuplicatedMeshComp, class USkeletalMeshComponent* DuplicatedSkeletalMeshComp, class USkeletalMesh* SkeletalMesh, class USkeletalMeshComponent* SkeletalMeshComp, class UStaticMesh* StaticMesh, class UStaticMeshComponent* DuplicateStaticMeshComp, class UStaticMeshComponent* StaticMeshComp);
	void BindTo_SupportingObjectsChangedDelegate(FDelegateProperty_& SupportingObjectsChangedDelegate);
	void InvalidateSupportingObjectsCache();
	void OnOwnerInitialized();
	void OnOwnerSnapped();
	void OnPlacementBlockedBeforeSupport();
	void RebuildSupportingObjectsCache();
	void TrackSupportedObject(struct FStructureSupportObjectData& SupportedObject);
	void UnbindFrom_SupportingObjectsChangedDelegate(FDelegateProperty_& SupportingObjectsChangedDelegate);
	void UntrackSupportedObject(struct FStructureSupportObjectData& SupportedObject);
	void OnReceiveCarriedResources(class AController* Controller);
	void OnReachedMinSchematicTimeout();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void CallCrossServerSendGameplayEventToActor(struct FGameplayTag& EventTag, struct FGameplayEventData& Payload);
	void CrossServer_ForwardGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);
	void OnPersistentDataRestored();
	void SetAllMaterialsToConstructed();
	void ExecuteUbergraph_BP_Structure_Constructed(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_Event_SupportingObjectsChangedDelegate_1, const struct FStructureSupportObjectData& K2Node_Event_SupportedObject_1, FDelegateProperty_ K2Node_Event_SupportingObjectsChangedDelegate, const struct FStructureSupportObjectData& K2Node_Event_SupportedObject, class AController* K2Node_Event_Controller, bool CallFunc_ExecuteDestroyStructure_Success, class UBP_StructureDamageObject_C* CallFunc_GetDamageObject_DamageObject, const struct FGameplayTag& K2Node_Event_EventTag, const struct FGameplayEventData& K2Node_Event_Payload, const struct FGameplayTag& K2Node_CustomEvent_EventTag, const struct FGameplayEventData& K2Node_CustomEvent_Payload, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_SendGameplayEventToActor_ReturnValue, bool CallFunc_GetIsStructureReferenceValid_ReturnValue, bool CallFunc_GetIsStructureReferenceValid_ReturnValue_1, bool CallFunc_GetIsStructureInitialized_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UMeshComponent*>& CallFunc_GetStructureMeshes_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FStructureMeshStateDefinition& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}


