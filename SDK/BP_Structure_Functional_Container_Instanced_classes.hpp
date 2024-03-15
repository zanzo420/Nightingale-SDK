#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0xAD0 - 0xA28)
// BlueprintGeneratedClass BP_Structure_Functional_Container_Instanced.BP_Structure_Functional_Container_Instanced_C
class ABP_Structure_Functional_Container_Instanced_C : public ABP_Structure_Constructed_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UInWorldItemContainerComponent*        CachedItemRewards;                                 // 0xA30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        ProfilesGivenLoot;                                 // 0xA38(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                         bIsUnlocked;                                       // 0xA48(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5717[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConditionalReward>            ConditionalRewards;                                // 0xA50(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<TScriptInterface<class IItemContainer>> Containers;                                        // 0xA60(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TMap<class FString, struct FInventoryEntryPersistedArray> PersistedItems;                                    // 0xA70(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	class USphereComponent*                      AOESphere;                                         // 0xAC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsContainerOpen;                                  // 0xAC8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         bLocalCachedContainerOpen;                         // 0xAC9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5718[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ProximityRadius;                                   // 0xACC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Structure_Functional_Container_Instanced_C* GetDefaultObj();

	TScriptInterface<class IItemContainer> GetContainerFromProvider(struct FItemContainerHandle& ContainerHandle, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FItemContainerHandle& CallFunc_GetContainerHandle_ReturnValue, bool CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue);
	TScriptInterface<class IItemContainer> GetDefaultContainer();
	bool HasContainer(TScriptInterface<class IItemContainer>& Container);
	bool HasContainerFromHandle(struct FItemContainerHandle& ContainerHandle);
	void CheckForOverlappingPlayers(const TArray<class AActor*>& Actors, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnRep_bIsContainerOpen(bool Temp_bool_Variable, enum class EStructureFXActivationTime Temp_byte_Variable, enum class EStructureFXActivationTime Temp_byte_Variable_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, enum class EStructureFXActivationTime K2Node_Select_Default);
	void OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess);
	void OnPersistence(class UInWorldItemContainerComponent* ContainerToPopulate, const TArray<struct FInventoryEntry>& CurrentItems, const class FString& CurrentProfileId, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FInventoryEntry& CallFunc_Array_Get_Item, class UInWorldItemContainerComponent* CallFunc_AddComponentByClass_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IItemContainer> CallFunc_RegisterItemRemovedDelegate_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IItemContainer> CallFunc_RegisterItemAddedDelegate_self_CastInput, TScriptInterface<class IItemContainer> CallFunc_Array_Add_NewItem_CastInput, int32 CallFunc_Array_Add_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_AddItem_self_CastInput, int32 CallFunc_AddItem_Amount, TArray<struct FGuid>& CallFunc_AddItem_ModifiedInstances, bool CallFunc_AddItem_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FInventoryEntryPersistedArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void OnItemChanged(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity, bool bFound, const class FString& ProfileId, int32 ItemIndex, const TArray<struct FInventoryEntry>& PersistedItemArray, int32 ProfileIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FInventoryEntryPersistedArray& K2Node_MakeStruct_InventoryEntryPersistedArray, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FInventoryEntryPersistedArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue);
	void OnRep_bIsUnlocked(bool CallFunc_Not_PreBool_ReturnValue);
	void ResetChest(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UActorComponent* K2Node_DynamicCast_AsActor_Component, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IItemContainer> CallFunc_RemoveAllItems_self_CastInput, bool CallFunc_RemoveAllItems_ReturnValue);
	void AddInstancedLootIfRequired(class APawn* CallingPawn, const class FString& CurrentProfileId, class UInWorldItemContainerComponent* ContainerToPopulate, const TArray<struct FInventoryEntry>& EntriesToGive, int32 Temp_int_Array_Index_Variable, class ANWXPlayerCharacter* K2Node_DynamicCast_AsNWXPlayer_Character, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IItemContainer> CallFunc_RegisterItemRemovedDelegate_self_CastInput, TScriptInterface<class IItemContainer> CallFunc_RegisterItemAddedDelegate_self_CastInput, TScriptInterface<class IItemContainer> CallFunc_Array_Add_NewItem_CastInput, int32 CallFunc_Array_Add_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, bool CallFunc_IsEmpty_ReturnValue, const struct FInventoryEntryPersistedArray& K2Node_MakeStruct_InventoryEntryPersistedArray, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValidUniqueId_IsValid, bool CallFunc_BooleanAND_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_AddItem_self_CastInput, int32 CallFunc_AddItem_Amount, TArray<struct FGuid>& CallFunc_AddItem_ModifiedInstances, bool CallFunc_AddItem_ReturnValue, class ANWXPlayerState* CallFunc_GetPlayerState_PlayerState, TArray<struct FConditionalReward>& CallFunc_AwardConditionalRewards_OutAwardedRewards, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UInWorldItemContainerComponent* CallFunc_AddComponentByClass_ReturnValue);
	void CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetInventoryContainerInterface_ContainerInterface, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetInventoryContainerInterface(class AActor* RequestingActor, TScriptInterface<class IItemContainer>* ContainerInterface, const class FString& ProfileId, int32 Index, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info_1, bool K2Node_DynamicCast_bSuccess_3, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId_1, TScriptInterface<class IItemContainer> CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Find_ReturnValue);
	void PopulateChest(TArray<struct FInventoryEntry>& ItemRewards);
	void PerformDirtyRealmReset();
	void OnPersistentDataRestored();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ServerOnly_OnContainerOpenStateChanged(bool bIsContainerOpen);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Structure_Functional_Container_Instanced(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_HasAuthority_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInventoryEntry>& K2Node_Event_ItemRewards, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FInventoryEntry& CallFunc_Array_Get_Item, TScriptInterface<class IItemContainer> CallFunc_AddItem_self_CastInput, int32 CallFunc_AddItem_Amount, TArray<struct FGuid>& CallFunc_AddItem_ModifiedInstances, bool CallFunc_AddItem_ReturnValue, bool K2Node_Event_bIsContainerOpen, bool CallFunc_HasAuthority_ReturnValue_3, class USphereComponent* CallFunc_AddComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
};

}


