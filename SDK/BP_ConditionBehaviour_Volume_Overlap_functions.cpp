#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ConditionBehaviour_Volume_Overlap.BP_ConditionBehaviour_Volume_Overlap_C
// (None)

class UClass* UBP_ConditionBehaviour_Volume_Overlap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ConditionBehaviour_Volume_Overlap_C");

	return Clss;
}


// BP_ConditionBehaviour_Volume_Overlap_C BP_ConditionBehaviour_Volume_Overlap.Default__BP_ConditionBehaviour_Volume_Overlap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ConditionBehaviour_Volume_Overlap_C* UBP_ConditionBehaviour_Volume_Overlap_C::GetDefaultObj()
{
	static class UBP_ConditionBehaviour_Volume_Overlap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ConditionBehaviour_Volume_Overlap_C*>(UBP_ConditionBehaviour_Volume_Overlap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ConditionBehaviour_Volume_Overlap.BP_ConditionBehaviour_Volume_Overlap_C.BindToRegisteredTargetAdded
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterManagerInterface>K2Node_DynamicCast_AsEncounter_Manager_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Volume_Overlap_C::BindToRegisteredTargetAdded(bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IEncounterManagerInterface> K2Node_DynamicCast_AsEncounter_Manager_Interface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Volume_Overlap_C", "BindToRegisteredTargetAdded");

	Params::UBP_ConditionBehaviour_Volume_Overlap_C_BindToRegisteredTargetAdded_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Manager_Interface = K2Node_DynamicCast_AsEncounter_Manager_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_Volume_Overlap.BP_ConditionBehaviour_Volume_Overlap_C.OnActivationVolumeOverlap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConditionPersistentData    Temp_struct_Variable                                             (ConstParm, NoDestructor)
// struct FConditionPersistentData    Temp_struct_Variable_1                                           (ConstParm, NoDestructor)

void UBP_ConditionBehaviour_Volume_Overlap_C::OnActivationVolumeOverlap(const struct FConditionPersistentData& Temp_struct_Variable, const struct FConditionPersistentData& Temp_struct_Variable_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Volume_Overlap_C", "OnActivationVolumeOverlap");

	Params::UBP_ConditionBehaviour_Volume_Overlap_C_OnActivationVolumeOverlap_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_Volume_Overlap.BP_ConditionBehaviour_Volume_Overlap_C.GetWatchedActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupInterface>K2Node_DynamicCast_AsEncounter_Markup_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupDataInterface_ActivationVolumeProvider>K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Activation_Volume_Provider(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActivationVolume*>   CallFunc_GetActivationVolumes_ReturnValue                        (ReferenceParm)
// class AActivationVolume*           CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterManagerInterface>K2Node_DynamicCast_AsEncounter_Manager_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Volume_Overlap_C::GetWatchedActor(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IEncounterMarkupDataInterface_ActivationVolumeProvider> K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Activation_Volume_Provider, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, TArray<class AActivationVolume*>& CallFunc_GetActivationVolumes_ReturnValue, class AActivationVolume* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IEncounterManagerInterface> K2Node_DynamicCast_AsEncounter_Manager_Interface, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Volume_Overlap_C", "GetWatchedActor");

	Params::UBP_ConditionBehaviour_Volume_Overlap_C_GetWatchedActor_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Interface = K2Node_DynamicCast_AsEncounter_Markup_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Activation_Volume_Provider = K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Activation_Volume_Provider;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetActivationVolumes_ReturnValue = CallFunc_GetActivationVolumes_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsEncounter_Manager_Interface = K2Node_DynamicCast_AsEncounter_Manager_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_Volume_Overlap.BP_ConditionBehaviour_Volume_Overlap_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     ContextObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IConditionPOIListenerInterface>K2Node_DynamicCast_AsCondition_POIListener_Interface             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetEncounterManager_Manager                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEncounterManager_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterConditionContextInterface>K2Node_DynamicCast_AsEncounter_Condition_Context_Interface       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Volume_Overlap_C::Initialize(class UObject* ContextObject, class UObject* Temp_object_Variable, bool CallFunc_DoesImplementInterface_ReturnValue, bool Temp_bool_Variable, TScriptInterface<class IConditionPOIListenerInterface> K2Node_DynamicCast_AsCondition_POIListener_Interface, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetEncounterManager_Manager, bool CallFunc_GetEncounterManager_ReturnValue, class AActor* Temp_object_Variable_1, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IEncounterConditionContextInterface> K2Node_DynamicCast_AsEncounter_Condition_Context_Interface, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetTargetActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Volume_Overlap_C", "Initialize");

	Params::UBP_ConditionBehaviour_Volume_Overlap_C_Initialize_Params Parms{};

	Parms.ContextObject = ContextObject;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsCondition_POIListener_Interface = K2Node_DynamicCast_AsCondition_POIListener_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEncounterManager_Manager = CallFunc_GetEncounterManager_Manager;
	Parms.CallFunc_GetEncounterManager_ReturnValue = CallFunc_GetEncounterManager_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Condition_Context_Interface = K2Node_DynamicCast_AsEncounter_Condition_Context_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_Volume_Overlap.BP_ConditionBehaviour_Volume_Overlap_C.SetContextObject
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     ContextObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Volume_Overlap_C::SetContextObject(class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Volume_Overlap_C", "SetContextObject");

	Params::UBP_ConditionBehaviour_Volume_Overlap_C_SetContextObject_Params Parms{};

	Parms.ContextObject = ContextObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_Volume_Overlap.BP_ConditionBehaviour_Volume_Overlap_C.ExecuteUbergraph_BP_ConditionBehaviour_Volume_Overlap
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ContextObject                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Volume_Overlap_C::ExecuteUbergraph_BP_ConditionBehaviour_Volume_Overlap(int32 EntryPoint, class UObject* K2Node_Event_ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Volume_Overlap_C", "ExecuteUbergraph_BP_ConditionBehaviour_Volume_Overlap");

	Params::UBP_ConditionBehaviour_Volume_Overlap_C_ExecuteUbergraph_BP_ConditionBehaviour_Volume_Overlap_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ContextObject = K2Node_Event_ContextObject;

	UObject::ProcessEvent(Func, &Parms);

}

}


