#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Structure_Functional_Container_Instanced.BP_Structure_Functional_Container_Instanced_C
// (Actor)

class UClass* ABP_Structure_Functional_Container_Instanced_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Structure_Functional_Container_Instanced_C");

	return Clss;
}


// BP_Structure_Functional_Container_Instanced_C BP_Structure_Functional_Container_Instanced.Default__BP_Structure_Functional_Container_Instanced_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Structure_Functional_Container_Instanced_C* ABP_Structure_Functional_Container_Instanced_C::GetDefaultObj()
{
	static class ABP_Structure_Functional_Container_Instanced_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Structure_Functional_Container_Instanced_C*>(ABP_Structure_Functional_Container_Instanced_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Structure_Functional_Container_Instanced.BP_Structure_Functional_Container_Instanced_C.GetContainerFromProvider
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemContainerHandle        ContainerHandle                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// TScriptInterface<class IItemContainer>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemContainerHandle        CallFunc_GetContainerHandle_ReturnValue                          (NoDestructor)
// bool                               CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TScriptInterface<class IItemContainer> ABP_Structure_Functional_Container_Instanced_C::GetContainerFromProvider(struct FItemContainerHandle& ContainerHandle, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FItemContainerHandle& CallFunc_GetContainerHandle_ReturnValue, bool CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_Instanced_C", "GetContainerFromProvider");

	Params::ABP_Structure_Functional_Container_Instanced_C_GetContainerFromProvider_Params Parms{};

	Parms.ContainerHandle = ContainerHandle;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetContainerHandle_ReturnValue = CallFunc_GetContainerHandle_ReturnValue;
	Parms.CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue = CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Functional_Container_Instanced.BP_Structure_Functional_Container_Instanced_C.GetDefaultContainer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TScriptInterface<class IItemContainer> ABP_Structure_Functional_Container_Instanced_C::GetDefaultContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_Instanced_C", "GetDefaultContainer");

	Params::ABP_Structure_Functional_Container_Instanced_C_GetDefaultContainer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Functional_Container_Instanced.BP_Structure_Functional_Container_Instanced_C.HasContainer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Container                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Structure_Functional_Container_Instanced_C::HasContainer(TScriptInterface<class IItemContainer>& Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_Instanced_C", "HasContainer");

	Params::ABP_Structure_Functional_Container_Instanced_C_HasContainer_Params Parms{};

	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Functional_Container_Instanced.BP_Structure_Functional_Container_Instanced_C.HasContainerFromHandle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemContainerHandle        ContainerHandle                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Structure_Functional_Container_Instanced_C::HasContainerFromHandle(struct FItemContainerHandle& ContainerHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_Instanced_C", "HasContainerFromHandle");

	Params::ABP_Structure_Functional_Container_Instanced_C_HasContainerFromHandle_Params Parms{};

	Parms.ContainerHandle = ContainerHandle;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Functional_Container_Instanced.BP_Structure_Functional_Container_Instanced_C.CheckForOverlappingPlayers
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              Actors                                                           (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ReferenceParm)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_Container_Instanced_C::CheckForOverlappingPlayers(const TArray<class AActor*>& Actors, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_Instanced_C", "CheckForOverlappingPlayers");

	Params::ABP_Structure_Functional_Container_Instanced_C_CheckForOverlappingPlayers_Params Parms{};

	Parms.Actors = Actors;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_Container_Instanced.BP_Structure_Functional_Container_Instanced_C.OnRep_bIsContainerOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureFXActivationTimeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureFXActivationTimeTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureFXActivationTimeK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_Container_Instanced_C::OnRep_bIsContainerOpen(bool Temp_bool_Variable, enum class EStructureFXActivationTime Temp_byte_Variable, enum class EStructureFXActivationTime Temp_byte_Variable_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, enum class EStructureFXActivationTime K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_Instanced_C", "OnRep_bIsContainerOpen");

	Params::ABP_Structure_Functional_Container_Instanced_C_OnRep_bIsContainerOpen_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_Container_Instanced.BP_Structure_Functional_Container_Instanced_C.OnOverlap
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_Container_Instanced_C::OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_Instanced_C", "OnOverlap");

	Params::ABP_Structure_Functional_Container_Instanced_C_OnOverlap_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_Container_Instanced.BP_Structure_Functional_Container_Instanced_C.OnPersistence
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInWorldItemContainerComponent*ContainerToPopulate                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CurrentItems                                                     (Edit, BlueprintVisible)
// class FString                      CurrentProfileId                                                 (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// class UInWorldItemContainerComponent*CallFunc_AddComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_RegisterItemRemovedDelegate_self_CastInput              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_RegisterItemAddedDelegate_self_CastInput                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_Array_Add_NewItem_CastInput                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_AddItem_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddItem_Amount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_AddItem_ModifiedInstances                               (ReferenceParm)
// bool                               CallFunc_AddItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntryPersistedArrayCallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_Container_Instanced_C::OnPersistence(class UInWorldItemContainerComponent* ContainerToPopulate, const TArray<struct FInventoryEntry>& CurrentItems, const class FString& CurrentProfileId, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FInventoryEntry& CallFunc_Array_Get_Item, class UInWorldItemContainerComponent* CallFunc_AddComponentByClass_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IItemContainer> CallFunc_RegisterItemRemovedDelegate_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IItemContainer> CallFunc_RegisterItemAddedDelegate_self_CastInput, TScriptInterface<class IItemContainer> CallFunc_Array_Add_NewItem_CastInput, int32 CallFunc_Array_Add_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_AddItem_self_CastInput, int32 CallFunc_AddItem_Amount, TArray<struct FGuid>& CallFunc_AddItem_ModifiedInstances, bool CallFunc_AddItem_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FInventoryEntryPersistedArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_Instanced_C", "OnPersistence");

	Params::ABP_Structure_Functional_Container_Instanced_C_OnPersistence_Params Parms{};

	Parms.ContainerToPopulate = ContainerToPopulate;
	Parms.CurrentItems = CurrentItems;
	Parms.CurrentProfileId = CurrentProfileId;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_AddComponentByClass_ReturnValue = CallFunc_AddComponentByClass_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_RegisterItemRemovedDelegate_self_CastInput = CallFunc_RegisterItemRemovedDelegate_self_CastInput;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_RegisterItemAddedDelegate_self_CastInput = CallFunc_RegisterItemAddedDelegate_self_CastInput;
	Parms.CallFunc_Array_Add_NewItem_CastInput = CallFunc_Array_Add_NewItem_CastInput;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_AddItem_self_CastInput = CallFunc_AddItem_self_CastInput;
	Parms.CallFunc_AddItem_Amount = CallFunc_AddItem_Amount;
	Parms.CallFunc_AddItem_ModifiedInstances = CallFunc_AddItem_ModifiedInstances;
	Parms.CallFunc_AddItem_ReturnValue = CallFunc_AddItem_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_Container_Instanced.BP_Structure_Functional_Container_Instanced_C.OnItemChanged
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Source                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Quantity                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFound                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ProfileId                                                        (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              ItemIndex                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     PersistedItemArray                                               (Edit, BlueprintVisible)
// int32                              ProfileIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntryPersistedArrayK2Node_MakeStruct_InventoryEntryPersistedArray                   (None)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntryPersistedArrayCallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_Container_Instanced_C::OnItemChanged(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity, bool bFound, const class FString& ProfileId, int32 ItemIndex, const TArray<struct FInventoryEntry>& PersistedItemArray, int32 ProfileIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FInventoryEntryPersistedArray& K2Node_MakeStruct_InventoryEntryPersistedArray, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FInventoryEntryPersistedArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_Instanced_C", "OnItemChanged");

	Params::ABP_Structure_Functional_Container_Instanced_C_OnItemChanged_Params Parms{};

	Parms.Source = Source;
	Parms.Item = Item;
	Parms.Quantity = Quantity;
	Parms.bFound = bFound;
	Parms.ProfileId = ProfileId;
	Parms.ItemIndex = ItemIndex;
	Parms.PersistedItemArray = PersistedItemArray;
	Parms.ProfileIndex = ProfileIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_MakeStruct_InventoryEntryPersistedArray = K2Node_MakeStruct_InventoryEntryPersistedArray;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_Container_Instanced.BP_Structure_Functional_Container_Instanced_C.OnRep_bIsUnlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_Container_Instanced_C::OnRep_bIsUnlocked(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_Instanced_C", "OnRep_bIsUnlocked");

	Params::ABP_Structure_Functional_Container_Instanced_C_OnRep_bIsUnlocked_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_Container_Instanced.BP_Structure_Functional_Container_Instanced_C.ResetChest
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_DynamicCast_AsActor_Component                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_RemoveAllItems_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveAllItems_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_Container_Instanced_C::ResetChest(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UActorComponent* K2Node_DynamicCast_AsActor_Component, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IItemContainer> CallFunc_RemoveAllItems_self_CastInput, bool CallFunc_RemoveAllItems_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_Instanced_C", "ResetChest");

	Params::ABP_Structure_Functional_Container_Instanced_C_ResetChest_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor_Component = K2Node_DynamicCast_AsActor_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RemoveAllItems_self_CastInput = CallFunc_RemoveAllItems_self_CastInput;
	Parms.CallFunc_RemoveAllItems_ReturnValue = CallFunc_RemoveAllItems_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_Container_Instanced.BP_Structure_Functional_Container_Instanced_C.AddInstancedLootIfRequired
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallingPawn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CurrentProfileId                                                 (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UInWorldItemContainerComponent*ContainerToPopulate                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     EntriesToGive                                                    (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerCharacter*         K2Node_DynamicCast_AsNWXPlayer_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerAccountInfo_C>K2Node_DynamicCast_AsBPI_Player_Account_Info                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentUniqueIdFromPawn_PersistentId              (ZeroConstructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_RegisterItemRemovedDelegate_self_CastInput              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_RegisterItemAddedDelegate_self_CastInput                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_Array_Add_NewItem_CastInput                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries                                     (ReferenceParm)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntryPersistedArrayK2Node_MakeStruct_InventoryEntryPersistedArray                   (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidUniqueId_IsValid                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_AddItem_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddItem_Amount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_AddItem_ModifiedInstances                               (ReferenceParm)
// bool                               CallFunc_AddItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetPlayerState_PlayerState                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FConditionalReward>  CallFunc_AwardConditionalRewards_OutAwardedRewards               (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries_1                                   (ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInWorldItemContainerComponent*CallFunc_AddComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_Container_Instanced_C::AddInstancedLootIfRequired(class APawn* CallingPawn, const class FString& CurrentProfileId, class UInWorldItemContainerComponent* ContainerToPopulate, const TArray<struct FInventoryEntry>& EntriesToGive, int32 Temp_int_Array_Index_Variable, class ANWXPlayerCharacter* K2Node_DynamicCast_AsNWXPlayer_Character, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IItemContainer> CallFunc_RegisterItemRemovedDelegate_self_CastInput, TScriptInterface<class IItemContainer> CallFunc_RegisterItemAddedDelegate_self_CastInput, TScriptInterface<class IItemContainer> CallFunc_Array_Add_NewItem_CastInput, int32 CallFunc_Array_Add_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, bool CallFunc_IsEmpty_ReturnValue, const struct FInventoryEntryPersistedArray& K2Node_MakeStruct_InventoryEntryPersistedArray, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValidUniqueId_IsValid, bool CallFunc_BooleanAND_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_AddItem_self_CastInput, int32 CallFunc_AddItem_Amount, TArray<struct FGuid>& CallFunc_AddItem_ModifiedInstances, bool CallFunc_AddItem_ReturnValue, class ANWXPlayerState* CallFunc_GetPlayerState_PlayerState, TArray<struct FConditionalReward>& CallFunc_AwardConditionalRewards_OutAwardedRewards, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UInWorldItemContainerComponent* CallFunc_AddComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_Instanced_C", "AddInstancedLootIfRequired");

	Params::ABP_Structure_Functional_Container_Instanced_C_AddInstancedLootIfRequired_Params Parms{};

	Parms.CallingPawn = CallingPawn;
	Parms.CurrentProfileId = CurrentProfileId;
	Parms.ContainerToPopulate = ContainerToPopulate;
	Parms.EntriesToGive = EntriesToGive;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Character = K2Node_DynamicCast_AsNWXPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Player_Account_Info = K2Node_DynamicCast_AsBPI_Player_Account_Info;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPersistentUniqueIdFromPawn_PersistentId = CallFunc_GetPersistentUniqueIdFromPawn_PersistentId;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_RegisterItemRemovedDelegate_self_CastInput = CallFunc_RegisterItemRemovedDelegate_self_CastInput;
	Parms.CallFunc_RegisterItemAddedDelegate_self_CastInput = CallFunc_RegisterItemAddedDelegate_self_CastInput;
	Parms.CallFunc_Array_Add_NewItem_CastInput = CallFunc_Array_Add_NewItem_CastInput;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetAllItems_Entries = CallFunc_GetAllItems_Entries;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.K2Node_MakeStruct_InventoryEntryPersistedArray = K2Node_MakeStruct_InventoryEntryPersistedArray;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValidUniqueId_IsValid = CallFunc_IsValidUniqueId_IsValid;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_AddItem_self_CastInput = CallFunc_AddItem_self_CastInput;
	Parms.CallFunc_AddItem_Amount = CallFunc_AddItem_Amount;
	Parms.CallFunc_AddItem_ModifiedInstances = CallFunc_AddItem_ModifiedInstances;
	Parms.CallFunc_AddItem_ReturnValue = CallFunc_AddItem_ReturnValue;
	Parms.CallFunc_GetPlayerState_PlayerState = CallFunc_GetPlayerState_PlayerState;
	Parms.CallFunc_AwardConditionalRewards_OutAwardedRewards = CallFunc_AwardConditionalRewards_OutAwardedRewards;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllItems_Entries_1 = CallFunc_GetAllItems_Entries_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_AddComponentByClass_ReturnValue = CallFunc_AddComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_Container_Instanced.BP_Structure_Functional_Container_Instanced_C.CanInteractWithActor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               InteractAvailable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetInventoryContainerInterface_ContainerInterface       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries                                     (ReferenceParm)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_Container_Instanced_C::CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetInventoryContainerInterface_ContainerInterface, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_Instanced_C", "CanInteractWithActor");

	Params::ABP_Structure_Functional_Container_Instanced_C_CanInteractWithActor_Params Parms{};

	Parms.Controller = Controller;
	Parms.InteractionData = InteractionData;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInventoryContainerInterface_ContainerInterface = CallFunc_GetInventoryContainerInterface_ContainerInterface;
	Parms.CallFunc_GetAllItems_Entries = CallFunc_GetAllItems_Entries;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractAvailable != nullptr)
		*InteractAvailable = Parms.InteractAvailable;

}


// Function BP_Structure_Functional_Container_Instanced.BP_Structure_Functional_Container_Instanced_C.GetInventoryContainerInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      RequestingActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>ContainerInterface                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ProfileId                                                        (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Index                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerAccountInfo_C>K2Node_DynamicCast_AsBPI_Player_Account_Info                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerAccountInfo_C>K2Node_DynamicCast_AsBPI_Player_Account_Info_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentUniqueIdFromPawn_PersistentId              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentUniqueIdFromPawn_PersistentId_1            (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_Container_Instanced_C::GetInventoryContainerInterface(class AActor* RequestingActor, TScriptInterface<class IItemContainer>* ContainerInterface, const class FString& ProfileId, int32 Index, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info_1, bool K2Node_DynamicCast_bSuccess_3, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId_1, TScriptInterface<class IItemContainer> CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_Instanced_C", "GetInventoryContainerInterface");

	Params::ABP_Structure_Functional_Container_Instanced_C_GetInventoryContainerInterface_Params Parms{};

	Parms.RequestingActor = RequestingActor;
	Parms.ProfileId = ProfileId;
	Parms.Index = Index;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player_Account_Info = K2Node_DynamicCast_AsBPI_Player_Account_Info;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBPI_Player_Account_Info_1 = K2Node_DynamicCast_AsBPI_Player_Account_Info_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetPersistentUniqueIdFromPawn_PersistentId = CallFunc_GetPersistentUniqueIdFromPawn_PersistentId;
	Parms.CallFunc_GetPersistentUniqueIdFromPawn_PersistentId_1 = CallFunc_GetPersistentUniqueIdFromPawn_PersistentId_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ContainerInterface != nullptr)
		*ContainerInterface = Parms.ContainerInterface;

}


// Function BP_Structure_Functional_Container_Instanced.BP_Structure_Functional_Container_Instanced_C.PopulateChest
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     ItemRewards                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Structure_Functional_Container_Instanced_C::PopulateChest(TArray<struct FInventoryEntry>& ItemRewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_Instanced_C", "PopulateChest");

	Params::ABP_Structure_Functional_Container_Instanced_C_PopulateChest_Params Parms{};

	Parms.ItemRewards = ItemRewards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_Container_Instanced.BP_Structure_Functional_Container_Instanced_C.PerformDirtyRealmReset
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Structure_Functional_Container_Instanced_C::PerformDirtyRealmReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_Instanced_C", "PerformDirtyRealmReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Functional_Container_Instanced.BP_Structure_Functional_Container_Instanced_C.OnPersistentDataRestored
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Structure_Functional_Container_Instanced_C::OnPersistentDataRestored()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_Instanced_C", "OnPersistentDataRestored");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Functional_Container_Instanced.BP_Structure_Functional_Container_Instanced_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_Container_Instanced_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_Instanced_C", "ReceiveEndPlay");

	Params::ABP_Structure_Functional_Container_Instanced_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_Container_Instanced.BP_Structure_Functional_Container_Instanced_C.ServerOnly_OnContainerOpenStateChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsContainerOpen                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_Container_Instanced_C::ServerOnly_OnContainerOpenStateChanged(bool bIsContainerOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_Instanced_C", "ServerOnly_OnContainerOpenStateChanged");

	Params::ABP_Structure_Functional_Container_Instanced_C_ServerOnly_OnContainerOpenStateChanged_Params Parms{};

	Parms.bIsContainerOpen = bIsContainerOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_Container_Instanced.BP_Structure_Functional_Container_Instanced_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Structure_Functional_Container_Instanced_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_Instanced_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Functional_Container_Instanced.BP_Structure_Functional_Container_Instanced_C.ExecuteUbergraph_BP_Structure_Functional_Container_Instanced
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     K2Node_Event_ItemRewards                                         (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// TScriptInterface<class IItemContainer>CallFunc_AddItem_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddItem_Amount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_AddItem_ModifiedInstances                               (ReferenceParm)
// bool                               CallFunc_AddItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsContainerOpen                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USphereComponent*            CallFunc_AddComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_Container_Instanced_C::ExecuteUbergraph_BP_Structure_Functional_Container_Instanced(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_HasAuthority_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInventoryEntry>& K2Node_Event_ItemRewards, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FInventoryEntry& CallFunc_Array_Get_Item, TScriptInterface<class IItemContainer> CallFunc_AddItem_self_CastInput, int32 CallFunc_AddItem_Amount, TArray<struct FGuid>& CallFunc_AddItem_ModifiedInstances, bool CallFunc_AddItem_ReturnValue, bool K2Node_Event_bIsContainerOpen, bool CallFunc_HasAuthority_ReturnValue_3, class USphereComponent* CallFunc_AddComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_Instanced_C", "ExecuteUbergraph_BP_Structure_Functional_Container_Instanced");

	Params::ABP_Structure_Functional_Container_Instanced_C_ExecuteUbergraph_BP_Structure_Functional_Container_Instanced_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_ItemRewards = K2Node_Event_ItemRewards;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_AddItem_self_CastInput = CallFunc_AddItem_self_CastInput;
	Parms.CallFunc_AddItem_Amount = CallFunc_AddItem_Amount;
	Parms.CallFunc_AddItem_ModifiedInstances = CallFunc_AddItem_ModifiedInstances;
	Parms.CallFunc_AddItem_ReturnValue = CallFunc_AddItem_ReturnValue;
	Parms.K2Node_Event_bIsContainerOpen = K2Node_Event_bIsContainerOpen;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.CallFunc_AddComponentByClass_ReturnValue = CallFunc_AddComponentByClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


