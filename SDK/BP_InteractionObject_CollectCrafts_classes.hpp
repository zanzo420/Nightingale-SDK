#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass BP_InteractionObject_CollectCrafts.BP_InteractionObject_CollectCrafts_C
class UBP_InteractionObject_CollectCrafts_C : public UBP_StructureInteractionObject_C
{
public:

	static class UClass* StaticClass();
	static class UBP_InteractionObject_CollectCrafts_C* GetDefaultObj();

	void GetDisabledDescription(class UObject* Structure, class APawn* Pawn, class FText* Description, bool CallFunc_HasCraftCollectionAvailable_ReturnValue);
	bool HasCraftCollectionAvailable(class UObject* Structure, class UObject* Pawn, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, class UBP_CraftingStationComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_GetCraftForID_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCraftForID_CraftInProgressData, bool CallFunc_Less_IntInt_ReturnValue);
	void ExecuteInteraction(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, const struct FGameplayAbilityPayloadHandle& Payload, int32 StartingParseIndex, bool* Success, int32* NewParsingIndex, const struct FS_Crafting_CraftInProgress& InProgressData, class UAbilitySystemComponent* CrafterASC, class UBP_CraftingStationComponent_C* CraftingStationComponent, class AActor* CraftingStation, const class FString& PlayerId, const struct FGameplayEffectContextHandle& NewEffectContext, const struct FGameplayAbilityPayloadHandle& AbilityPayload, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_RemoveCraftInProgressData_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromBool_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, class UBP_CraftingStationComponent_C* CallFunc_GetComponentByClass_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromBool_ReturnValue_1, bool CallFunc_GetCraftForID_Success, const struct FS_Crafting_CraftInProgress& CallFunc_GetCraftForID_CraftInProgressData, const struct FGameplayAbilityPayloadHandle& CallFunc_AppendPayloadHandle_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue);
	void IsInteractionAvailable(class UObject* Structure, class APawn* Pawn, class UStructureInteraction_PostConstructionInteraction_DataAsset* Data, bool* CanInteract, class UObject* LStructure, bool CallFunc_IsInteractionAvailable_CanInteract, bool CallFunc_HasCraftCollectionAvailable_ReturnValue);
};

}


