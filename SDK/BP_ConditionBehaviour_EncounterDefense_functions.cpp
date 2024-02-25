#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ConditionBehaviour_EncounterDefense.BP_ConditionBehaviour_EncounterDefense_C
// (None)

class UClass* UBP_ConditionBehaviour_EncounterDefense_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ConditionBehaviour_EncounterDefense_C");

	return Clss;
}


// BP_ConditionBehaviour_EncounterDefense_C BP_ConditionBehaviour_EncounterDefense.Default__BP_ConditionBehaviour_EncounterDefense_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ConditionBehaviour_EncounterDefense_C* UBP_ConditionBehaviour_EncounterDefense_C::GetDefaultObj()
{
	static class UBP_ConditionBehaviour_EncounterDefense_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ConditionBehaviour_EncounterDefense_C*>(UBP_ConditionBehaviour_EncounterDefense_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ConditionBehaviour_EncounterDefense.BP_ConditionBehaviour_EncounterDefense_C.CheckCompletion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPortalControllerComponent*  PortalController                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Targets                                                          (Edit, BlueprintVisible, DisableEditOnTemplate)
// struct FConditionPersistentData    Temp_struct_Variable                                             (ConstParm, NoDestructor)
// struct FConditionPersistentData    Temp_struct_Variable_1                                           (ConstParm, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_EncounterDefense_C::CheckCompletion(class UPortalControllerComponent* PortalController, const TArray<class AActor*>& Targets, const struct FConditionPersistentData& Temp_struct_Variable, const struct FConditionPersistentData& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_EncounterDefense_C", "CheckCompletion");

	Params::UBP_ConditionBehaviour_EncounterDefense_C_CheckCompletion_Params Parms{};

	Parms.PortalController = PortalController;
	Parms.Targets = Targets;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_EncounterDefense.BP_ConditionBehaviour_EncounterDefense_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     ContextObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Target_POI                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterConditionContextInterface>K2Node_DynamicCast_AsEncounter_Condition_Context_Interface       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterMarkupInterface>K2Node_DynamicCast_AsEncounter_Markup_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset_Defense*K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_StructurePartProxy_C*    K2Node_DynamicCast_AsBP_Structure_Part_Proxy                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               CallFunc_GetStructure_Structure                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_EncounterDefense_C::Initialize(class UObject* ContextObject, class AActor* Target_POI, TScriptInterface<class IEncounterConditionContextInterface> K2Node_DynamicCast_AsEncounter_Condition_Context_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetTargetActor_ReturnValue, class AActor* Temp_object_Variable, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterMarkupInterface> K2Node_DynamicCast_AsEncounter_Markup_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Defense* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, class ABP_StructurePartProxy_C* K2Node_DynamicCast_AsBP_Structure_Part_Proxy, bool K2Node_DynamicCast_bSuccess_3, class ANWXStructure* CallFunc_GetStructure_Structure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_EncounterDefense_C", "Initialize");

	Params::UBP_ConditionBehaviour_EncounterDefense_C_Initialize_Params Parms{};

	Parms.ContextObject = ContextObject;
	Parms.Target_POI = Target_POI;
	Parms.K2Node_DynamicCast_AsEncounter_Condition_Context_Interface = K2Node_DynamicCast_AsEncounter_Condition_Context_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Interface = K2Node_DynamicCast_AsEncounter_Markup_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense = K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Defense;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Structure_Part_Proxy = K2Node_DynamicCast_AsBP_Structure_Part_Proxy;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetStructure_Structure = CallFunc_GetStructure_Structure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_EncounterDefense.BP_ConditionBehaviour_EncounterDefense_C.SetContextObject
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     ContextObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_EncounterDefense_C::SetContextObject(class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_EncounterDefense_C", "SetContextObject");

	Params::UBP_ConditionBehaviour_EncounterDefense_C_SetContextObject_Params Parms{};

	Parms.ContextObject = ContextObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_EncounterDefense.BP_ConditionBehaviour_EncounterDefense_C.SetupCondition
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ConditionBehaviour_EncounterDefense_C::SetupCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_EncounterDefense_C", "SetupCondition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConditionBehaviour_EncounterDefense.BP_ConditionBehaviour_EncounterDefense_C.ExecuteUbergraph_BP_ConditionBehaviour_EncounterDefense
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ContextObject                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_EncounterDefense_C::ExecuteUbergraph_BP_ConditionBehaviour_EncounterDefense(int32 EntryPoint, class UObject* K2Node_Event_ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_EncounterDefense_C", "ExecuteUbergraph_BP_ConditionBehaviour_EncounterDefense");

	Params::UBP_ConditionBehaviour_EncounterDefense_C_ExecuteUbergraph_BP_ConditionBehaviour_EncounterDefense_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ContextObject = K2Node_Event_ContextObject;

	UObject::ProcessEvent(Func, &Parms);

}

}


