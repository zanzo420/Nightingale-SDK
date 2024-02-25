#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ConditionBehaviour_EncounterStructureInteract.BP_ConditionBehaviour_EncounterStructureInteract_C
// (None)

class UClass* UBP_ConditionBehaviour_EncounterStructureInteract_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ConditionBehaviour_EncounterStructureInteract_C");

	return Clss;
}


// BP_ConditionBehaviour_EncounterStructureInteract_C BP_ConditionBehaviour_EncounterStructureInteract.Default__BP_ConditionBehaviour_EncounterStructureInteract_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ConditionBehaviour_EncounterStructureInteract_C* UBP_ConditionBehaviour_EncounterStructureInteract_C::GetDefaultObj()
{
	static class UBP_ConditionBehaviour_EncounterStructureInteract_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ConditionBehaviour_EncounterStructureInteract_C*>(UBP_ConditionBehaviour_EncounterStructureInteract_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ConditionBehaviour_EncounterStructureInteract.BP_ConditionBehaviour_EncounterStructureInteract_C.BindInteract
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructurePartProxyActor* CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               CallFunc_GetStructure_Structure                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_C*K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_EncounterStructureInteract_C::BindInteract(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ANWXStructurePartProxyActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ANWXStructure* CallFunc_GetStructure_Structure, bool CallFunc_Less_IntInt_ReturnValue, class ABP_Structure_EncounterTrigger_C* K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_EncounterStructureInteract_C", "BindInteract");

	Params::UBP_ConditionBehaviour_EncounterStructureInteract_C_BindInteract_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetStructure_Structure = CallFunc_GetStructure_Structure;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger = K2Node_DynamicCast_AsBP_Structure_Encounter_Trigger;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_EncounterStructureInteract.BP_ConditionBehaviour_EncounterStructureInteract_C.OnInteract
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Structure_EncounterTrigger_C*Triggering_Structure                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FConditionPersistentData    Temp_struct_Variable                                             (ConstParm, NoDestructor)
// struct FConditionPersistentData    Temp_struct_Variable_1                                           (ConstParm, NoDestructor)

void UBP_ConditionBehaviour_EncounterStructureInteract_C::OnInteract(class ABP_Structure_EncounterTrigger_C* Triggering_Structure, const struct FConditionPersistentData& Temp_struct_Variable, const struct FConditionPersistentData& Temp_struct_Variable_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_EncounterStructureInteract_C", "OnInteract");

	Params::UBP_ConditionBehaviour_EncounterStructureInteract_C_OnInteract_Params Parms{};

	Parms.Triggering_Structure = Triggering_Structure;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_EncounterStructureInteract.BP_ConditionBehaviour_EncounterStructureInteract_C.OnResetHandler
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConditionPersistentData    Temp_struct_Variable                                             (ConstParm, NoDestructor)

void UBP_ConditionBehaviour_EncounterStructureInteract_C::OnResetHandler(const struct FConditionPersistentData& Temp_struct_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_EncounterStructureInteract_C", "OnResetHandler");

	Params::UBP_ConditionBehaviour_EncounterStructureInteract_C_OnResetHandler_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_EncounterStructureInteract.BP_ConditionBehaviour_EncounterStructureInteract_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     ContextObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupInterface>K2Node_DynamicCast_AsEncounter_Markup_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupDataInterface_StructureProvider>K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ANWXStructurePartProxyActor*>CallFunc_GetStructures_ReturnValue                               (ReferenceParm)
// TScriptInterface<class IEncounterConditionContextInterface>K2Node_DynamicCast_AsEncounter_Condition_Context_Interface       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_EncounterStructureInteract_C::Initialize(class UObject* ContextObject, class AActor* Temp_object_Variable, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, TScriptInterface<class IEncounterMarkupDataInterface_StructureProvider> K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, TArray<class ANWXStructurePartProxyActor*>& CallFunc_GetStructures_ReturnValue, TScriptInterface<class IEncounterConditionContextInterface> K2Node_DynamicCast_AsEncounter_Condition_Context_Interface, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetTargetActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_EncounterStructureInteract_C", "Initialize");

	Params::UBP_ConditionBehaviour_EncounterStructureInteract_C_Initialize_Params Parms{};

	Parms.ContextObject = ContextObject;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Interface = K2Node_DynamicCast_AsEncounter_Markup_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider = K2Node_DynamicCast_AsEncounter_Markup_Data_Interface_Structure_Provider;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetStructures_ReturnValue = CallFunc_GetStructures_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Condition_Context_Interface = K2Node_DynamicCast_AsEncounter_Condition_Context_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_EncounterStructureInteract.BP_ConditionBehaviour_EncounterStructureInteract_C.SetContextObject
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     ContextObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_EncounterStructureInteract_C::SetContextObject(class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_EncounterStructureInteract_C", "SetContextObject");

	Params::UBP_ConditionBehaviour_EncounterStructureInteract_C_SetContextObject_Params Parms{};

	Parms.ContextObject = ContextObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_EncounterStructureInteract.BP_ConditionBehaviour_EncounterStructureInteract_C.SetupCondition
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ConditionBehaviour_EncounterStructureInteract_C::SetupCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_EncounterStructureInteract_C", "SetupCondition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConditionBehaviour_EncounterStructureInteract.BP_ConditionBehaviour_EncounterStructureInteract_C.ExecuteUbergraph_BP_ConditionBehaviour_EncounterStructureInteract
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ContextObject                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_EncounterStructureInteract_C::ExecuteUbergraph_BP_ConditionBehaviour_EncounterStructureInteract(int32 EntryPoint, class UObject* K2Node_Event_ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_EncounterStructureInteract_C", "ExecuteUbergraph_BP_ConditionBehaviour_EncounterStructureInteract");

	Params::UBP_ConditionBehaviour_EncounterStructureInteract_C_ExecuteUbergraph_BP_ConditionBehaviour_EncounterStructureInteract_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ContextObject = K2Node_Event_ContextObject;

	UObject::ProcessEvent(Func, &Parms);

}

}


