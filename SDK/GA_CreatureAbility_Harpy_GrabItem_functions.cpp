#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_Harpy_GrabItem.GA_CreatureAbility_Harpy_GrabItem_C
// (None)

class UClass* UGA_CreatureAbility_Harpy_GrabItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_Harpy_GrabItem_C");

	return Clss;
}


// GA_CreatureAbility_Harpy_GrabItem_C GA_CreatureAbility_Harpy_GrabItem.Default__GA_CreatureAbility_Harpy_GrabItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_Harpy_GrabItem_C* UGA_CreatureAbility_Harpy_GrabItem_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_Harpy_GrabItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_Harpy_GrabItem_C*>(UGA_CreatureAbility_Harpy_GrabItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_Harpy_GrabItem.GA_CreatureAbility_Harpy_GrabItem_C.HandleEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTags                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// TScriptInterface<class IItemContainer>LHarpyContainer                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ABP_Creature_Wildlife_Harpy_C*LHarpy                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             LItemEntry                                                       (Edit, BlueprintVisible)
// TScriptInterface<class IItemContainer>ContainerInterface                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ItemToSteal                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries                                     (ReferenceParm)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Random_OutItem                                    (None)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainerProvider>K2Node_DynamicCast_AsItem_Container_Provider                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetDefaultContainer_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_AddItem_Amount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_AddItem_ModifiedInstances                               (ReferenceParm)
// bool                               CallFunc_AddItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_TryGetItemCharacteristicTags_CharacteristicTags         (None)
// enum class EGetResult              CallFunc_TryGetItemCharacteristicTags_Branches                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GenerateItemRewardsFromRewardData_bOutAwardItem         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GenerateItemRewardsFromRewardData_ReturnValue           (ReferenceParm)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_AddItem_Amount_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_AddItem_ModifiedInstances_1                             (ReferenceParm)
// bool                               CallFunc_AddItem_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveItem_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Functional_Container_C*K2Node_DynamicCast_AsBP_Structure_Functional_Container           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AItemProxyBase*              K2Node_DynamicCast_AsItem_Proxy_Base                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_Wildlife_Harpy_C*K2Node_DynamicCast_AsBP_Creature_Wildlife_Harpy                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_EquippedItems_C>K2Node_DynamicCast_AsBPI_Equipped_Items                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PickUpItemProxy_Success                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetInventoryContainerInterface_ContainerInterface       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Harpy_GrabItem_C::HandleEvent(const struct FGameplayTag& EventTags, const struct FGameplayEventData& EventData, TScriptInterface<class IItemContainer> LHarpyContainer, class ABP_Creature_Wildlife_Harpy_C* LHarpy, const struct FInventoryEntry& LItemEntry, TScriptInterface<class IItemContainer> ContainerInterface, class AActor* ItemToSteal, bool CallFunc_IsValid_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, const struct FGameplayTag& Temp_struct_Variable, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, bool CallFunc_Array_IsNotEmpty_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IItemContainer> CallFunc_GetDefaultContainer_ReturnValue, int32 CallFunc_AddItem_Amount, TArray<struct FGuid>& CallFunc_AddItem_ModifiedInstances, bool CallFunc_AddItem_ReturnValue, const struct FGameplayTagContainer& CallFunc_TryGetItemCharacteristicTags_CharacteristicTags, enum class EGetResult CallFunc_TryGetItemCharacteristicTags_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HasTag_ReturnValue, bool CallFunc_GenerateItemRewardsFromRewardData_bOutAwardItem, TArray<struct FInventoryEntry>& CallFunc_GenerateItemRewardsFromRewardData_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_AddItem_Amount_1, TArray<struct FGuid>& CallFunc_AddItem_ModifiedInstances_1, bool CallFunc_AddItem_ReturnValue_1, bool CallFunc_RemoveItem_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, class ABP_Structure_Functional_Container_C* K2Node_DynamicCast_AsBP_Structure_Functional_Container, bool K2Node_DynamicCast_bSuccess_1, class AItemProxyBase* K2Node_DynamicCast_AsItem_Proxy_Base, bool K2Node_DynamicCast_bSuccess_2, class ABP_Creature_Wildlife_Harpy_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Harpy, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IBPI_EquippedItems_C> K2Node_DynamicCast_AsBPI_Equipped_Items, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_PickUpItemProxy_Success, TScriptInterface<class IItemContainer> CallFunc_GetInventoryContainerInterface_ContainerInterface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Harpy_GrabItem_C", "HandleEvent");

	Params::UGA_CreatureAbility_Harpy_GrabItem_C_HandleEvent_Params Parms{};

	Parms.EventTags = EventTags;
	Parms.EventData = EventData;
	Parms.LHarpyContainer = LHarpyContainer;
	Parms.LHarpy = LHarpy;
	Parms.LItemEntry = LItemEntry;
	Parms.ContainerInterface = ContainerInterface;
	Parms.ItemToSteal = ItemToSteal;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetAllItems_Entries = CallFunc_GetAllItems_Entries;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.K2Node_DynamicCast_AsItem_Container_Provider = K2Node_DynamicCast_AsItem_Container_Provider;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDefaultContainer_ReturnValue = CallFunc_GetDefaultContainer_ReturnValue;
	Parms.CallFunc_AddItem_Amount = CallFunc_AddItem_Amount;
	Parms.CallFunc_AddItem_ModifiedInstances = CallFunc_AddItem_ModifiedInstances;
	Parms.CallFunc_AddItem_ReturnValue = CallFunc_AddItem_ReturnValue;
	Parms.CallFunc_TryGetItemCharacteristicTags_CharacteristicTags = CallFunc_TryGetItemCharacteristicTags_CharacteristicTags;
	Parms.CallFunc_TryGetItemCharacteristicTags_Branches = CallFunc_TryGetItemCharacteristicTags_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_GenerateItemRewardsFromRewardData_bOutAwardItem = CallFunc_GenerateItemRewardsFromRewardData_bOutAwardItem;
	Parms.CallFunc_GenerateItemRewardsFromRewardData_ReturnValue = CallFunc_GenerateItemRewardsFromRewardData_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_AddItem_Amount_1 = CallFunc_AddItem_Amount_1;
	Parms.CallFunc_AddItem_ModifiedInstances_1 = CallFunc_AddItem_ModifiedInstances_1;
	Parms.CallFunc_AddItem_ReturnValue_1 = CallFunc_AddItem_ReturnValue_1;
	Parms.CallFunc_RemoveItem_ReturnValue = CallFunc_RemoveItem_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Functional_Container = K2Node_DynamicCast_AsBP_Structure_Functional_Container;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsItem_Proxy_Base = K2Node_DynamicCast_AsItem_Proxy_Base;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBP_Creature_Wildlife_Harpy = K2Node_DynamicCast_AsBP_Creature_Wildlife_Harpy;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsBPI_Equipped_Items = K2Node_DynamicCast_AsBPI_Equipped_Items;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_PickUpItemProxy_Success = CallFunc_PickUpItemProxy_Success;
	Parms.CallFunc_GetInventoryContainerInterface_ContainerInterface = CallFunc_GetInventoryContainerInterface_ContainerInterface;

	UObject::ProcessEvent(Func, &Parms);

}

}


