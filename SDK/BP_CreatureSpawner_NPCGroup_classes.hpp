#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x168 (0x1780 - 0x1618)
// BlueprintGeneratedClass BP_CreatureSpawner_NPCGroup.BP_CreatureSpawner_NPCGroup_C
class ABP_CreatureSpawner_NPCGroup_C : public ABP_CreatureSpawnerBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1618(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAIPerceptionStimuliSourceComponent*   AIPerceptionStimuliSource;                         // 0x1620(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_NPCClassNPC>                NPCClasses;                                        // 0x1628(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FString                                OwningPlayerName;                                  // 0x1638(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class AActor*>                        ResourceCacheList;                                 // 0x1648(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                        GhostStructureList;                                // 0x1658(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                               EscortDestination;                                 // 0x1668(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EscortSource;                                      // 0x1680(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDialogue*                             AmbientDialog;                                     // 0x1698(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayerEmployees;                                   // 0x16A0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_8324[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       StructureRadius;                                   // 0x16A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 AllStructureDesireTags;                            // 0x16B0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSet<class UObject*>                         RegisteredStructures;                              // 0x16D0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 ActiveStructureDesireTags;                         // 0x1720(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            StructureDesireTagsChanged;                        // 0x1740(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         DestroyWhenAllCreaturesDestroyed;                  // 0x1750(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8326[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           NPCDataHandles;                                    // 0x1758(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          RequiredNPCTag;                                    // 0x1768(0x8)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class AActor*>                        AllCaches;                                         // 0x1770(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_CreatureSpawner_NPCGroup_C* GetDefaultObj();

	void UnregisterNearbyCachePermissionUpdates(class UObject* Structure, class AActor* Instigator, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StructureComponentOwner_C> K2Node_DynamicCast_AsBPI_Structure_Component_Owner, bool K2Node_DynamicCast_bSuccess_1, class UStructureEventsObject* CallFunc_GetEventsObject_EventObject, TScriptInterface<class IPlayerOwnershipInterface> K2Node_DynamicCast_AsPlayer_Ownership_Interface, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Array_RemoveItem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Array_RemoveItem_ReturnValue_1);
	void OnContainerPermissionsChanged(class AActor* Target, TScriptInterface<class IPlayerOwnershipInterface> K2Node_DynamicCast_AsPlayer_Ownership_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPermissionActive_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void RegisterNearbyCacheForPermissionUpdates(class AActor*& Cache, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IPlayerOwnershipInterface> K2Node_DynamicCast_AsPlayer_Ownership_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureEventInterface> K2Node_DynamicCast_AsStructure_Event_Interface, bool K2Node_DynamicCast_bSuccess_1, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_AddUnique_ReturnValue);
	void HasPerceivedContainers(bool* Result, bool CallFunc_Array_IsNotEmpty_ReturnValue);
	void HandleSquadPerceptionUpdates(class AActor* Target, bool WasSensed, bool* Success, class UAbilitySystemComponent* LAbilitySystem, bool LSensed, class AActor* LActor, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_HandleSquadPerceptionUpdates_Success, TScriptInterface<class IPlayerOwnershipInterface> K2Node_DynamicCast_AsPlayer_Ownership_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPermissionActive_ReturnValue, TScriptInterface<class IBPI_SchematicInterfaces_C> K2Node_DynamicCast_AsBPI_Schematic_Interfaces, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IItemContainer> CallFunc_GetInventoryContainerInterface_ContainerInterface, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue_1);
	void PrintNPCSpawningDebugInfo(class ABP_CreatureBase_C* Creature, const class FString& DebugString, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UClass*>& CallFunc_Set_ToArray_Result, const class FString& CallFunc_GetDisplayName_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Get_POILocation_DenLocation, const class FString& CallFunc_Conv_VectorToString_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const struct FVector& CallFunc_Get_POILocation_DenLocation_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Conv_VectorToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, bool Temp_bool_Variable, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_10);
	void SpawnCreatureClass(class UClass* SpawnCreatureClass, const struct FTransform& SpawnTransform, bool SpawnHidden, bool PlayEntrance, bool PlayExit, const struct FItemDataReference& DefaultWeaponReference, class ABP_CreatureBase_C** SpawnedCreature, class UClass* LVillagerClass, class ABP_CreatureBase_C* CallFunc_SpawnCreatureClass_SpawnedCreature, class UClass* K2Node_ClassDynamicCast_AsBP_Creature_NPC_Villager, bool K2Node_ClassDynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ECreatureType Temp_byte_Variable, bool Temp_bool_Variable, enum class ECreatureType K2Node_Select_Default, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Creature_NPC_Villager_C* CallFunc_FinishSpawningActor_ReturnValue);
	void SpawnCreature(const struct FTransform& Transform, class ABP_CreatureBase_C** Creature, class ABP_CreatureBase_C* LCreature, class ABP_CreatureBase_C* CallFunc_SpawnCreature_Creature, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC_1, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Array_Index_Variable, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FS_NPCClassNPC& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FS_NPCClassNPC& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SelectSpawnPawnClass(class UClass** SpawnPawnClass, int32 Temp_int_Array_Index_Variable, class UClass* CallFunc_SelectSpawnPawnClass_SpawnPawnClass, class UClass* CallFunc_SelectSpawnPawnClass_SpawnPawnClass_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_NPCClassNPC& CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void UserConstructionScript(const struct FGameplayTagContainer& LRequiredTags, const struct FGameplayTag& LSelectedFactionTag, const struct FGameplayTagContainer& LFactionTags, const struct FGameplayTagContainer& LRealmTags, bool CallFunc_HasTag_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags_1, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_RandomInteger_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_2, bool CallFunc_HasTag_ReturnValue_3, bool CallFunc_HasTag_ReturnValue_4, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasTag_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_1, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, class ANWXGameStateBase* CallFunc_GetGameState_GameState, int32 CallFunc_Array_Add_ReturnValue, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FNWXNPCHumanData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, bool CallFunc_HasAllTags_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UClass*>& CallFunc_Set_ToArray_Result, class UClass* CallFunc_Array_Get_Item_1, int32 CallFunc_Set_Length_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBP_Creature_NPC, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue_2, const struct FS_NPCClassNPC& K2Node_MakeStruct_S_NPCClassNPC, int32 CallFunc_Array_Add_ReturnValue_1, const struct FS_BPSpawnerData& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_5, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1);
	void ReceiveBeginPlay();
	void DestroySelfIfRequired();
	void ExecuteUbergraph_BP_CreatureSpawner_NPCGroup(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsServer_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void StructureDesireTagsChanged__DelegateSignature(const struct FGameplayTag& Tag, bool Added);
};

}


