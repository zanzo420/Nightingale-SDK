#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C
// (None)

class UClass* UBP_ConditionBehaviour_Item_Acquired_Constraint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ConditionBehaviour_Item_Acquired_Constraint_C");

	return Clss;
}


// BP_ConditionBehaviour_Item_Acquired_Constraint_C BP_ConditionBehaviour_Item_Acquired_Constraint.Default__BP_ConditionBehaviour_Item_Acquired_Constraint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ConditionBehaviour_Item_Acquired_Constraint_C* UBP_ConditionBehaviour_Item_Acquired_Constraint_C::GetDefaultObj()
{
	static class UBP_ConditionBehaviour_Item_Acquired_Constraint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ConditionBehaviour_Item_Acquired_Constraint_C*>(UBP_ConditionBehaviour_Item_Acquired_Constraint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C.GetAllInventoryEntries
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     AllInventoryEntries                                              (Parm, OutParm)
// TArray<struct FInventoryEntry>     InventoryEntries                                                 (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TScriptInterface<class IItemContainer>>CallFunc_GetInventoryContainers_Containers                       (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries                                     (ReferenceParm)

void UBP_ConditionBehaviour_Item_Acquired_Constraint_C::GetAllInventoryEntries(TArray<struct FInventoryEntry>* AllInventoryEntries, const TArray<struct FInventoryEntry>& InventoryEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<TScriptInterface<class IItemContainer>>& CallFunc_GetInventoryContainers_Containers, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_Acquired_Constraint_C", "GetAllInventoryEntries");

	Params::UBP_ConditionBehaviour_Item_Acquired_Constraint_C_GetAllInventoryEntries_Params Parms{};

	Parms.InventoryEntries = InventoryEntries;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetInventoryContainers_Containers = CallFunc_GetInventoryContainers_Containers;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllItems_Entries = CallFunc_GetAllItems_Entries;

	UObject::ProcessEvent(Func, &Parms);

	if (AllInventoryEntries != nullptr)
		*AllInventoryEntries = std::move(Parms.AllInventoryEntries);

}


// Function BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C.UnbindContainerEvents
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TScriptInterface<class IItemContainer>>CallFunc_GetInventoryContainers_Containers                       (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Item_Acquired_Constraint_C::UnbindContainerEvents(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<TScriptInterface<class IItemContainer>>& CallFunc_GetInventoryContainers_Containers, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IItemContainer> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_Acquired_Constraint_C", "UnbindContainerEvents");

	Params::UBP_ConditionBehaviour_Item_Acquired_Constraint_C_UnbindContainerEvents_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetInventoryContainers_Containers = CallFunc_GetInventoryContainers_Containers;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C.OnInventoryReadyBindContainerEvents
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<TScriptInterface<class IItemContainer>>CallFunc_GetInventoryContainers_Containers                       (ReferenceParm)
// TScriptInterface<class IItemContainer>CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Item_Acquired_Constraint_C::OnInventoryReadyBindContainerEvents(bool Success, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<TScriptInterface<class IItemContainer>>& CallFunc_GetInventoryContainers_Containers, TScriptInterface<class IItemContainer> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_Acquired_Constraint_C", "OnInventoryReadyBindContainerEvents");

	Params::UBP_ConditionBehaviour_Item_Acquired_Constraint_C_OnInventoryReadyBindContainerEvents_Params Parms{};

	Parms.Success = Success;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetInventoryContainers_Containers = CallFunc_GetInventoryContainers_Containers;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C.OnInventoryReadyCheckCompletion
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewCount                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllInventoryEntries_AllInventoryEntries              (ReferenceParm)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_IsItemRelevantForConstraint_OutBranch                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemConstraintQuantityRequired_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Item_Acquired_Constraint_C::OnInventoryReadyCheckCompletion(bool bSuccess, int32 NewCount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllInventoryEntries_AllInventoryEntries, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, enum class EGetResult CallFunc_IsItemRelevantForConstraint_OutBranch, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_Acquired_Constraint_C", "OnInventoryReadyCheckCompletion");

	Params::UBP_ConditionBehaviour_Item_Acquired_Constraint_C_OnInventoryReadyCheckCompletion_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.NewCount = NewCount;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllInventoryEntries_AllInventoryEntries = CallFunc_GetAllInventoryEntries_AllInventoryEntries;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_IsItemRelevantForConstraint_OutBranch = CallFunc_IsItemRelevantForConstraint_OutBranch;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemConstraintQuantityRequired_ReturnValue = CallFunc_GetItemConstraintQuantityRequired_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C.GetInventoryContainers
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TScriptInterface<class IItemContainer>>Containers                                                       (Parm, OutParm)
// TArray<TScriptInterface<class IItemContainer>>ContainersToReturn                                               (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetRealmCardDeck_Container                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetRealmCardDeck_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetEssencePouch_Container                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetEssencePouch_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Item_Acquired_Constraint_C::GetInventoryContainers(TArray<TScriptInterface<class IItemContainer>>* Containers, const TArray<TScriptInterface<class IItemContainer>>& ContainersToReturn, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetRealmCardDeck_Container, bool CallFunc_GetRealmCardDeck_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetEssencePouch_Container, bool CallFunc_GetEssencePouch_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_Acquired_Constraint_C", "GetInventoryContainers");

	Params::UBP_ConditionBehaviour_Item_Acquired_Constraint_C_GetInventoryContainers_Params Parms{};

	Parms.ContainersToReturn = ContainersToReturn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRealmCardDeck_Container = CallFunc_GetRealmCardDeck_Container;
	Parms.CallFunc_GetRealmCardDeck_ReturnValue = CallFunc_GetRealmCardDeck_ReturnValue;
	Parms.CallFunc_GetEssencePouch_Container = CallFunc_GetEssencePouch_Container;
	Parms.CallFunc_GetEssencePouch_ReturnValue = CallFunc_GetEssencePouch_ReturnValue;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Containers != nullptr)
		*Containers = std::move(Parms.Containers);

}


// Function BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C.OnItemRemoved
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Source                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Quantity                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemConstraintQuantityRequired_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_IsItemRelevantForConstraint_OutBranch                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Item_Acquired_Constraint_C::OnItemRemoved(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue, enum class EGetResult CallFunc_IsItemRelevantForConstraint_OutBranch, int32 CallFunc_Max_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_Acquired_Constraint_C", "OnItemRemoved");

	Params::UBP_ConditionBehaviour_Item_Acquired_Constraint_C_OnItemRemoved_Params Parms{};

	Parms.Source = Source;
	Parms.Item = Item;
	Parms.Quantity = Quantity;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetItemConstraintQuantityRequired_ReturnValue = CallFunc_GetItemConstraintQuantityRequired_ReturnValue;
	Parms.CallFunc_IsItemRelevantForConstraint_OutBranch = CallFunc_IsItemRelevantForConstraint_OutBranch;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C.OnItemAdded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Source                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Quantity                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemConstraintQuantityRequired_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_IsItemRelevantForConstraint_OutBranch                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Item_Acquired_Constraint_C::OnItemAdded(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class EGetResult CallFunc_IsItemRelevantForConstraint_OutBranch, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_Acquired_Constraint_C", "OnItemAdded");

	Params::UBP_ConditionBehaviour_Item_Acquired_Constraint_C_OnItemAdded_Params Parms{};

	Parms.Source = Source;
	Parms.Item = Item;
	Parms.Quantity = Quantity;
	Parms.CallFunc_GetItemConstraintQuantityRequired_ReturnValue = CallFunc_GetItemConstraintQuantityRequired_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsItemRelevantForConstraint_OutBranch = CallFunc_IsItemRelevantForConstraint_OutBranch;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C.GetDebugText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        Description                                                      (Parm, OutParm)
// int32                              CallFunc_GetItemConstraintQuantityRequired_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemConstraintPresentationDataCallFunc_GetItemConstraintUIData_OutPresentationData             (None)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBP_ConditionBehaviour_Item_Acquired_Constraint_C::GetDebugText(class FText* Description, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue, const struct FItemConstraintPresentationData& CallFunc_GetItemConstraintUIData_OutPresentationData, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_Acquired_Constraint_C", "GetDebugText");

	Params::UBP_ConditionBehaviour_Item_Acquired_Constraint_C_GetDebugText_Params Parms{};

	Parms.CallFunc_GetItemConstraintQuantityRequired_ReturnValue = CallFunc_GetItemConstraintQuantityRequired_ReturnValue;
	Parms.CallFunc_GetItemConstraintUIData_OutPresentationData = CallFunc_GetItemConstraintUIData_OutPresentationData;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Description != nullptr)
		*Description = Parms.Description;

}


// Function BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C.InitializeFromPersistence
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FConditionPersistentData    UpdatedProgressData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UBP_ConditionBehaviour_Item_Acquired_Constraint_C::InitializeFromPersistence(struct FConditionPersistentData& UpdatedProgressData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_Acquired_Constraint_C", "InitializeFromPersistence");

	Params::UBP_ConditionBehaviour_Item_Acquired_Constraint_C_InitializeFromPersistence_Params Parms{};

	Parms.UpdatedProgressData = UpdatedProgressData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C.SetupCondition
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ConditionBehaviour_Item_Acquired_Constraint_C::SetupCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_Acquired_Constraint_C", "SetupCondition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C.CompleteIfSatisfiedOnSetup
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ConditionBehaviour_Item_Acquired_Constraint_C::CompleteIfSatisfiedOnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_Acquired_Constraint_C", "CompleteIfSatisfiedOnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C.OnConditionRemoved
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ConditionBehaviour_Item_Acquired_Constraint_C::OnConditionRemoved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_Acquired_Constraint_C", "OnConditionRemoved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConditionBehaviour_Item_Acquired_Constraint.BP_ConditionBehaviour_Item_Acquired_Constraint_C.ExecuteUbergraph_BP_ConditionBehaviour_Item_Acquired_Constraint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConditionPersistentData    K2Node_Event_UpdatedProgressData                                 (ConstParm, NoDestructor)
// class ABP_PlayerState_C*           CallFunc_GetConditionPlayerState_PlayerState                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetConditionPlayerState_PlayerState_1                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetConditionPlayerState_PlayerState_2                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBasicAwaiter*               CallFunc_GetInventoryAwaiter_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBasicAwaiter*               CallFunc_GetInventoryAwaiter_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDelegateHandleBPWrapper    CallFunc_AwaitBP_Handle                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput_1                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDelegateHandleBPWrapper    CallFunc_AwaitBP_Handle_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ConditionBehaviour_Item_Acquired_Constraint_C::ExecuteUbergraph_BP_ConditionBehaviour_Item_Acquired_Constraint(int32 EntryPoint, const struct FConditionPersistentData& K2Node_Event_UpdatedProgressData, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_2, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UBasicAwaiter* CallFunc_GetInventoryAwaiter_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_1, class UBasicAwaiter* CallFunc_GetInventoryAwaiter_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput_1, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Item_Acquired_Constraint_C", "ExecuteUbergraph_BP_ConditionBehaviour_Item_Acquired_Constraint");

	Params::UBP_ConditionBehaviour_Item_Acquired_Constraint_C_ExecuteUbergraph_BP_ConditionBehaviour_Item_Acquired_Constraint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_UpdatedProgressData = K2Node_Event_UpdatedProgressData;
	Parms.CallFunc_GetConditionPlayerState_PlayerState = CallFunc_GetConditionPlayerState_PlayerState;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetConditionPlayerState_PlayerState_1 = CallFunc_GetConditionPlayerState_PlayerState_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetConditionPlayerState_PlayerState_2 = CallFunc_GetConditionPlayerState_PlayerState_2;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller = K2Node_DynamicCast_AsNWXPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetInventoryAwaiter_ReturnValue = CallFunc_GetInventoryAwaiter_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller_1 = K2Node_DynamicCast_AsNWXPlayer_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetInventoryAwaiter_ReturnValue_1 = CallFunc_GetInventoryAwaiter_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_AwaitBP_Awaitable_CastInput = CallFunc_AwaitBP_Awaitable_CastInput;
	Parms.CallFunc_AwaitBP_Handle = CallFunc_AwaitBP_Handle;
	Parms.CallFunc_AwaitBP_Awaitable_CastInput_1 = CallFunc_AwaitBP_Awaitable_CastInput_1;
	Parms.CallFunc_AwaitBP_Handle_1 = CallFunc_AwaitBP_Handle_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


