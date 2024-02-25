#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x520 - 0x510)
// BlueprintGeneratedClass GA_CreatureAbility_Harpy_GrabItem.GA_CreatureAbility_Harpy_GrabItem_C
class UGA_CreatureAbility_Harpy_GrabItem_C : public UGA_CreatureAbilityBase_C
{
public:
	struct FDataTableRowHandle                   Item_ID;                                           // 0x510(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Harpy_GrabItem_C* GetDefaultObj();

	void HandleEvent(const struct FGameplayTag& EventTags, const struct FGameplayEventData& EventData, TScriptInterface<class IItemContainer> LHarpyContainer, class ABP_Creature_Wildlife_Harpy_C* LHarpy, const struct FInventoryEntry& LItemEntry, TScriptInterface<class IItemContainer> ContainerInterface, class AActor* ItemToSteal, bool CallFunc_IsValid_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, const struct FGameplayTag& Temp_struct_Variable, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, bool CallFunc_Array_IsNotEmpty_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IItemContainer> CallFunc_GetDefaultContainer_ReturnValue, int32 CallFunc_AddItem_Amount, TArray<struct FGuid>& CallFunc_AddItem_ModifiedInstances, bool CallFunc_AddItem_ReturnValue, const struct FGameplayTagContainer& CallFunc_TryGetItemCharacteristicTags_CharacteristicTags, enum class EGetResult CallFunc_TryGetItemCharacteristicTags_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HasTag_ReturnValue, bool CallFunc_GenerateItemRewardsFromRewardData_bOutAwardItem, TArray<struct FInventoryEntry>& CallFunc_GenerateItemRewardsFromRewardData_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_AddItem_Amount_1, TArray<struct FGuid>& CallFunc_AddItem_ModifiedInstances_1, bool CallFunc_AddItem_ReturnValue_1, bool CallFunc_RemoveItem_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, class ABP_Structure_Functional_Container_C* K2Node_DynamicCast_AsBP_Structure_Functional_Container, bool K2Node_DynamicCast_bSuccess_1, class AItemProxyBase* K2Node_DynamicCast_AsItem_Proxy_Base, bool K2Node_DynamicCast_bSuccess_2, class ABP_Creature_Wildlife_Harpy_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Harpy, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IBPI_EquippedItems_C> K2Node_DynamicCast_AsBPI_Equipped_Items, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_PickUpItemProxy_Success, TScriptInterface<class IItemContainer> CallFunc_GetInventoryContainerInterface_ContainerInterface);
};

}


