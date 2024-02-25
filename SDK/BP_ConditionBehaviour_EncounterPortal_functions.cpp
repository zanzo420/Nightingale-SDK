#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ConditionBehaviour_EncounterPortal.BP_ConditionBehaviour_EncounterPortal_C
// (None)

class UClass* UBP_ConditionBehaviour_EncounterPortal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ConditionBehaviour_EncounterPortal_C");

	return Clss;
}


// BP_ConditionBehaviour_EncounterPortal_C BP_ConditionBehaviour_EncounterPortal.Default__BP_ConditionBehaviour_EncounterPortal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ConditionBehaviour_EncounterPortal_C* UBP_ConditionBehaviour_EncounterPortal_C::GetDefaultObj()
{
	static class UBP_ConditionBehaviour_EncounterPortal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ConditionBehaviour_EncounterPortal_C*>(UBP_ConditionBehaviour_EncounterPortal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ConditionBehaviour_EncounterPortal.BP_ConditionBehaviour_EncounterPortal_C.OnPortalStateChanged
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETemporalPortalState    State                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADeploymentPortal*           DeploymentPortal                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FConditionPersistentData    Temp_struct_Variable                                             (ConstParm, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConditionPersistentData    Temp_struct_Variable_1                                           (ConstParm, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_EncounterPortal_C::OnPortalStateChanged(enum class ETemporalPortalState State, class ADeploymentPortal* DeploymentPortal, const struct FConditionPersistentData& Temp_struct_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const struct FConditionPersistentData& Temp_struct_Variable_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_EncounterPortal_C", "OnPortalStateChanged");

	Params::UBP_ConditionBehaviour_EncounterPortal_C_OnPortalStateChanged_Params Parms{};

	Parms.State = State;
	Parms.DeploymentPortal = DeploymentPortal;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_EncounterPortal.BP_ConditionBehaviour_EncounterPortal_C.GetWatchedActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADeploymentPortal*           DeploymentPortal                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Targets                                                          (Edit, BlueprintVisible, DisableEditOnTemplate)
// TScriptInterface<class IEncounterMarkupInterface>CallFunc_GetMarkupDataAsset_self_CastInput                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset*   CallFunc_GetMarkupDataAsset_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterMarkupDataAsset_Portal*K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Portal          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_EncounterPortal_C::GetWatchedActor(class ADeploymentPortal* DeploymentPortal, const TArray<class AActor*>& Targets, TScriptInterface<class IEncounterMarkupInterface> CallFunc_GetMarkupDataAsset_self_CastInput, class UEncounterMarkupDataAsset* CallFunc_GetMarkupDataAsset_ReturnValue, class UEncounterMarkupDataAsset_Portal* K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Portal, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_EncounterPortal_C", "GetWatchedActor");

	Params::UBP_ConditionBehaviour_EncounterPortal_C_GetWatchedActor_Params Parms{};

	Parms.DeploymentPortal = DeploymentPortal;
	Parms.Targets = Targets;
	Parms.CallFunc_GetMarkupDataAsset_self_CastInput = CallFunc_GetMarkupDataAsset_self_CastInput;
	Parms.CallFunc_GetMarkupDataAsset_ReturnValue = CallFunc_GetMarkupDataAsset_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Portal = K2Node_DynamicCast_AsEncounter_Markup_Data_Asset_Portal;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_EncounterPortal.BP_ConditionBehaviour_EncounterPortal_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     ContextObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterConfig*            K2Node_DynamicCast_AsEncounter_Config                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterConditionContextInterface>K2Node_DynamicCast_AsEncounter_Condition_Context_Interface       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTargetActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_EncounterPortal_C::Initialize(class UObject* ContextObject, class AActor* Temp_object_Variable, bool CallFunc_DoesImplementInterface_ReturnValue, class AEncounterConfig* K2Node_DynamicCast_AsEncounter_Config, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IEncounterConditionContextInterface> K2Node_DynamicCast_AsEncounter_Condition_Context_Interface, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetTargetActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_EncounterPortal_C", "Initialize");

	Params::UBP_ConditionBehaviour_EncounterPortal_C_Initialize_Params Parms{};

	Parms.ContextObject = ContextObject;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Config = K2Node_DynamicCast_AsEncounter_Config;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsEncounter_Condition_Context_Interface = K2Node_DynamicCast_AsEncounter_Condition_Context_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetTargetActor_ReturnValue = CallFunc_GetTargetActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_EncounterPortal.BP_ConditionBehaviour_EncounterPortal_C.SetContextObject
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     ContextObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_EncounterPortal_C::SetContextObject(class UObject* ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_EncounterPortal_C", "SetContextObject");

	Params::UBP_ConditionBehaviour_EncounterPortal_C_SetContextObject_Params Parms{};

	Parms.ContextObject = ContextObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ConditionBehaviour_EncounterPortal.BP_ConditionBehaviour_EncounterPortal_C.SetupCondition
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_ConditionBehaviour_EncounterPortal_C::SetupCondition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_EncounterPortal_C", "SetupCondition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ConditionBehaviour_EncounterPortal.BP_ConditionBehaviour_EncounterPortal_C.ExecuteUbergraph_BP_ConditionBehaviour_EncounterPortal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ContextObject                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_EncounterPortal_C::ExecuteUbergraph_BP_ConditionBehaviour_EncounterPortal(int32 EntryPoint, class UObject* K2Node_Event_ContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_EncounterPortal_C", "ExecuteUbergraph_BP_ConditionBehaviour_EncounterPortal");

	Params::UBP_ConditionBehaviour_EncounterPortal_C_ExecuteUbergraph_BP_ConditionBehaviour_EncounterPortal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ContextObject = K2Node_Event_ContextObject;

	UObject::ProcessEvent(Func, &Parms);

}

}


