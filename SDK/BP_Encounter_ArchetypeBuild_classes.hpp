#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x4C0 - 0x448)
// BlueprintGeneratedClass BP_Encounter_ArchetypeBuild.BP_Encounter_ArchetypeBuild_C
class ABP_Encounter_ArchetypeBuild_C : public AEncounterBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_EncounterComponent_Spawners_C*     BP_EncounterComponent_Spawners;                    // 0x450(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_Creature_NPC_C*                    NPCLeader;                                         // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        Number_of_NPCs;                                    // 0x460(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGuid, struct FS_IntArray>       CompositeStructurePieceIds;                        // 0x468(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_Structure_Functional_Container_Instanced_C* Human_Reward_Chest;                                // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Encounter_ArchetypeBuild_C* GetDefaultObj();

	void CompleteBuildEncounter(bool CallFunc_IsValid_ReturnValue);
	void Award(TSubclassOf<class IInterface> Container_Interface, TScriptInterface<class IInWorldItemContainerOwnerInterface> CallFunc_ServerOnly_OnContainerOpenStateChanged_self_CastInput, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, TScriptInterface<class IContainerRewardsInterface> CallFunc_PopulateChest_self_CastInput);
	void SpawnRewardStructure(const TArray<struct FInventoryEntry>& Item_Rewards, const struct FStructureAssetReference& Human_Reward_Chest_SDA, const struct FTransform& Reward_Transform, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue_1, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, TScriptInterface<class IEncounterMarkupDataInterface_RewardProvider> K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Reward_Provider, bool K2Node_DynamicCast_bSuccess_1, class ATargetPoint* CallFunc_GetReward_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FStructureSpawnContext& K2Node_MakeStruct_StructureSpawnContext, class UObject* CallFunc_SpawnStructure_ReturnValue, class AActor* CallFunc_GetDynamicActorAtLocation_Actor, bool CallFunc_GetDynamicActorAtLocation_ReturnValue, class ABP_Structure_Functional_Container_Instanced_C* K2Node_DynamicCast_AsBP_Structure_Functional_Container_Instanced, bool K2Node_DynamicCast_bSuccess_2, class ABP_Structure_Functional_Container_Instanced_C* K2Node_DynamicCast_AsBP_Structure_Functional_Container_Instanced_1, bool K2Node_DynamicCast_bSuccess_3);
	void RespawnStructure(class ANWXStructure* Structure, bool bRespawnedStructure, class ANWXStructure* NewStructure, class ANWXStructure* CurrentStructure, class ANWXStructurePartProxyActor* CurrentProxy, class UEncounterMarkupDataAsset* MarkupAsset, TScriptInterface<class IEncounterStructBuilderInterface> StructureBuilder, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue_1, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue_2, TScriptInterface<class IEncounterStructBuilderInterface> CallFunc_GetEncounterStructBuilderInterface_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TScriptInterface<class IEncounterMarkupDataInterface_StructureProvider> K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_4, TArray<class ANWXStructurePartProxyActor*>& CallFunc_GetStructures_ReturnValue, class ANWXStructurePartProxyActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IStructureOriginatorInterface> CallFunc_SetStructureOriginatorType_self_CastInput, bool CallFunc_BooleanAND_ReturnValue, class ANWXStructure* CallFunc_GetStructure_Structure, enum class EStructureState CallFunc_GetStructureSpawnState_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ANWXStructure* CallFunc_GetStructure_Structure_1, bool CallFunc_IsValid_ReturnValue_5);
	void OnCompositePieceDestroyed(class UObject* OwningStructure, class AStructureComposite* CompositeStructure, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsStructureValidForUse_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IStructureDestroyableInterface> K2Node_DynamicCast_AsStructure_Destroyable_Interface, bool K2Node_DynamicCast_bSuccess, class AStructureComposite* K2Node_DynamicCast_AsStructure_Composite, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_ExecuteDestroyStructure_Success);
	void RegisterCompositeStructure(class AStructureComposite* CompositeStructure, const struct FGuid& StructureUID, TArray<int32>& CallFunc_GetPieceIdsInConstructionOrder_PieceIds, TScriptInterface<class IStructureUniqueIDInterface> CallFunc_GetUniqueIdentifierAsGUID_self_CastInput, const struct FGuid& CallFunc_GetUniqueIdentifierAsGUID_ReturnValue, const struct FS_IntArray& K2Node_MakeStruct_S_IntArray, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void CheckNecessaryCompositePiecesValid(class AStructureComposite* OwningStructure, bool* bAllNecessaryPiecesValid, int32 NecessaryPieceId, class UStructureCompositeComponent* CompositeComponent, const TArray<int32>& CurrentPieceIds, const TArray<int32>& NecessaryPieceIds, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_1, class UStructureCompositeComponent* CallFunc_GetCompositeComponent_ReturnValue, TArray<int32>& CallFunc_GetPieceIdsInConstructionOrder_PieceIds, TScriptInterface<class IStructureUniqueIDInterface> CallFunc_GetUniqueIdentifierAsGUID_self_CastInput, const struct FGuid& CallFunc_GetUniqueIdentifierAsGUID_ReturnValue, class UStructureCompositePiece* CallFunc_GetCompositePieceById_ReturnValue, bool CallFunc_IsStructureValidForUse_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FS_IntArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void BindStructureEvents(class ANWXStructure* Structure, bool CallFunc_IsValid_ReturnValue, class AStructureComposite* K2Node_DynamicCast_AsStructure_Composite, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void GetNPCLeader(class ABP_Creature_NPC_C** NPCLeader);
	void SetupNPCLeader(class ABP_Creature_NPC_C* NPC, class UEncounterPOIPersistedObject* PersistedObject, const struct FDataTableRowHandle& EncounterMenuRowHandle, const struct FGuid& CallFunc_GetEncounterID_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UEncounterPOIPersistedObject* CallFunc_GetEncounterPersistedObject_EncounterPersistedObject, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue);
	void RetrieveNPCFromPersistence(class ABP_Creature_NPC_C** PersistedNPC, class AActor* PersistedLeaderNPC, class UEncounterPOIPersistedObject* PersistedObject, bool CallFunc_IsValid_ReturnValue, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetLeaderNPC_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UEncounterPOIPersistedObject* CallFunc_GetEncounterPersistedObject_EncounterPersistedObject);
	class FString CollectDebuggerInformation(class ANWXStructure* CurrentStructure, class ANWXStructurePartProxyActor* CurrentProxy, int32 Completed_Count, int32 TotalStructures, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class AStructureComposite* K2Node_DynamicCast_AsStructure_Composite, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureStateInterface> CallFunc_GetSchematicState_self_CastInput, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_CheckNecessaryCompositePiecesValid_bAllNecessaryPiecesValid, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Variable_1, class ANWXStructure* CallFunc_GetStructure_Structure, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsStructureValidForUse_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue_1, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, TScriptInterface<class IEncounterMarkupDataInterface_StructureProvider> K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider, bool K2Node_DynamicCast_bSuccess_2, TArray<class ANWXStructurePartProxyActor*>& CallFunc_GetStructures_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ANWXStructurePartProxyActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void OnNPCSpawned(class ABP_CreatureBase_C* Creature, class ABP_Creature_NPC_C* NewNPCLeader, class AActor* NewLeader, TScriptInterface<class ISquadMemberNativeInterface> CallFunc_GetLeaderActor_self_CastInput, class AActor* CallFunc_GetLeaderActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1);
	void InitializeNPC(class AActor* SpawnerLeader, class ABP_Creature_NPC_C* PersistedNPC, class UObject* CreatureSpawner, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class ABP_Creature_NPC_C* CallFunc_RetrieveNPCFromPersistence_PersistedNPC, class ABP_CreatureSpawnerBase_C* CallFunc_Create_NPC_Spawner_Spawner_Actor, bool CallFunc_Create_NPC_Spawner_Spawner_Was_Spawned);
	void Initialize(class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue_1, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, TScriptInterface<class IEncounterMarkupDataInterface_StructureProvider> K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider, bool K2Node_DynamicCast_bSuccess_1, TArray<class ANWXStructurePartProxyActor*>& CallFunc_GetStructures_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Array_IsNotEmpty_ReturnValue);
	void Unbind_Structures(TArray<class ANWXStructurePartProxyActor*>& StructureProxies, class ANWXStructure* Structure, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class ANWXStructurePartProxyActor* CallFunc_Array_Get_Item, class ANWXStructure* CallFunc_GetStructure_Structure, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AStructureComposite* K2Node_DynamicCast_AsStructure_Composite, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void AreAllStructuresCompleted(bool* bAreAllCompleted, class ANWXStructure* CurrentStructure, class ANWXStructurePartProxyActor* CurrentProxy, int32 Completed_Count, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue_1, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, TScriptInterface<class IEncounterMarkupDataInterface_StructureProvider> K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider, bool K2Node_DynamicCast_bSuccess_1, TArray<class ANWXStructurePartProxyActor*>& CallFunc_GetStructures_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ANWXStructurePartProxyActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AStructureComposite* K2Node_DynamicCast_AsStructure_Composite, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_CheckNecessaryCompositePiecesValid_bAllNecessaryPiecesValid, TScriptInterface<class IStructureStateInterface> CallFunc_GetSchematicState_self_CastInput, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ANWXStructure* CallFunc_GetStructure_Structure, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsStructureValidForUse_ReturnValue);
	void OnStructureDestroyed(class AActor* DestroyedActor, class ANWXStructure* Structure, class ANWXStructure* K2Node_DynamicCast_AsNWXStructure, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureUniqueIDInterface> CallFunc_GetUniqueIdentifierAsGUID_self_CastInput, const struct FGuid& CallFunc_GetUniqueIdentifierAsGUID_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnStructureStateChanged(int32 TotalStructures, int32 CompletedStructures, bool CallFunc_AreAllStructuresCompleted_bAreAllCompleted);
	void Register_Structures(TArray<class ANWXStructurePartProxyActor*>& Structure_Objects, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class ANWXStructurePartProxyActor* CallFunc_Array_Get_Item, class ANWXStructure* CallFunc_GetStructure_Structure, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void BeginEncounter();
	void CleanupEncounter();
	void EncounterNPCInteraction();
	void ExecuteUbergraph_BP_Encounter_ArchetypeBuild(int32 EntryPoint, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AEncounterConfig* CallFunc_GetTargetActor_ReturnValue_1, TScriptInterface<class IEncounterMarkupInterface> CallFunc_GetMarkupDataAsset_self_CastInput, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IEncounterMarkupDataInterface_StructureProvider> K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, TArray<class ANWXStructurePartProxyActor*>& CallFunc_GetStructures_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
};

}


