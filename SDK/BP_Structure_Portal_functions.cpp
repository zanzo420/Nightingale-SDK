#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Structure_Portal.BP_Structure_Portal_C
// (Actor)

class UClass* ABP_Structure_Portal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Structure_Portal_C");

	return Clss;
}


// BP_Structure_Portal_C BP_Structure_Portal.Default__BP_Structure_Portal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Structure_Portal_C* ABP_Structure_Portal_C::GetDefaultObj()
{
	static class ABP_Structure_Portal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Structure_Portal_C*>(ABP_Structure_Portal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Structure_Portal.BP_Structure_Portal_C.GetRealmCardMachineComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URealmCardMachineComponent*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class URealmCardMachineComponent* ABP_Structure_Portal_C::GetRealmCardMachineComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Portal_C", "GetRealmCardMachineComponent");

	Params::ABP_Structure_Portal_C_GetRealmCardMachineComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Portal.BP_Structure_Portal_C.GetPlayerSpawnTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform ABP_Structure_Portal_C::GetPlayerSpawnTransform(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Portal_C", "GetPlayerSpawnTransform");

	Params::ABP_Structure_Portal_C_GetPlayerSpawnTransform_Params Parms{};

	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Portal.BP_Structure_Portal_C.GetPortalController
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPortalControllerComponent*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UPortalControllerComponent* ABP_Structure_Portal_C::GetPortalController()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Portal_C", "GetPortalController");

	Params::ABP_Structure_Portal_C_GetPortalController_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Portal.BP_Structure_Portal_C.CleanUpActors
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Portal_C::CleanUpActors(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Portal_C", "CleanUpActors");

	Params::ABP_Structure_Portal_C_CleanUpActors_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Portal.BP_Structure_Portal_C.SetPortalVFXStateFromPersistence
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IPortalControllerInterface>K2Node_DynamicCast_AsPortal_Controller_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETemporalPortalState    CallFunc_GetPortalState_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Portal_C::SetPortalVFXStateFromPersistence(TScriptInterface<class IPortalControllerInterface> K2Node_DynamicCast_AsPortal_Controller_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, enum class ETemporalPortalState CallFunc_GetPortalState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Portal_C", "SetPortalVFXStateFromPersistence");

	Params::ABP_Structure_Portal_C_SetPortalVFXStateFromPersistence_Params Parms{};

	Parms.K2Node_DynamicCast_AsPortal_Controller_Interface = K2Node_DynamicCast_AsPortal_Controller_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPortalState_ReturnValue = CallFunc_GetPortalState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Portal.BP_Structure_Portal_C.GetPortalId
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ID                                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPortalUniqueId_OutSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPortalUniqueId_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Portal_C::GetPortalId(bool* IsValid, class FString* ID, bool CallFunc_GetPortalUniqueId_OutSuccess, const class FString& CallFunc_GetPortalUniqueId_ReturnValue, bool CallFunc_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Portal_C", "GetPortalId");

	Params::ABP_Structure_Portal_C_GetPortalId_Params Parms{};

	Parms.CallFunc_GetPortalUniqueId_OutSuccess = CallFunc_GetPortalUniqueId_OutSuccess;
	Parms.CallFunc_GetPortalUniqueId_ReturnValue = CallFunc_GetPortalUniqueId_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (ID != nullptr)
		*ID = std::move(Parms.ID);

}


// Function BP_Structure_Portal.BP_Structure_Portal_C.GetStartPointId
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ID                                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPortalId_IsValid                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPortalId_Id                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void ABP_Structure_Portal_C::GetStartPointId(bool* IsValid, class FString* ID, bool CallFunc_GetPortalId_IsValid, const class FString& CallFunc_GetPortalId_Id, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Portal_C", "GetStartPointId");

	Params::ABP_Structure_Portal_C_GetStartPointId_Params Parms{};

	Parms.CallFunc_GetPortalId_IsValid = CallFunc_GetPortalId_IsValid;
	Parms.CallFunc_GetPortalId_Id = CallFunc_GetPortalId_Id;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (ID != nullptr)
		*ID = std::move(Parms.ID);

}


// Function BP_Structure_Portal.BP_Structure_Portal_C.IntializeFromPeristence
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetStartPointId_IsValid                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStartPointId_Id                                      (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Server_IsInitialized_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Portal_C::IntializeFromPeristence(bool CallFunc_GetStartPointId_IsValid, const class FString& CallFunc_GetStartPointId_Id, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Server_IsInitialized_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Portal_C", "IntializeFromPeristence");

	Params::ABP_Structure_Portal_C_IntializeFromPeristence_Params Parms{};

	Parms.CallFunc_GetStartPointId_IsValid = CallFunc_GetStartPointId_IsValid;
	Parms.CallFunc_GetStartPointId_Id = CallFunc_GetStartPointId_Id;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Server_IsInitialized_ReturnValue = CallFunc_Server_IsInitialized_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Portal.BP_Structure_Portal_C.OnStateChange
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStructureComplete_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Portal_C::OnStateChange(bool CallFunc_IsServer_ReturnValue, bool CallFunc_GetIsStructureComplete_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Portal_C", "OnStateChange");

	Params::ABP_Structure_Portal_C_OnStateChange_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetIsStructureComplete_ReturnValue = CallFunc_GetIsStructureComplete_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Portal.BP_Structure_Portal_C.InitializePortalController
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetPlayerSpawnTransform_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPortalId_IsValid                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPortalId_Id                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetStartPointId_IsValid                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetStartPointId_Id                                      (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PortalArchVFX_C*         CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerStart*             CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADeploymentPortal*           CallFunc_FinishSpawningActor_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Portal_C::InitializePortalController(bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_GetPlayerSpawnTransform_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, bool CallFunc_GetPortalId_IsValid, const class FString& CallFunc_GetPortalId_Id, bool CallFunc_GetStartPointId_IsValid, const class FString& CallFunc_GetStartPointId_Id, class FName CallFunc_Conv_StringToName_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_PortalArchVFX_C* CallFunc_FinishSpawningActor_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class ANWXPlayerStart* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class ADeploymentPortal* CallFunc_FinishSpawningActor_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Portal_C", "InitializePortalController");

	Params::ABP_Structure_Portal_C_InitializePortalController_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_GetPlayerSpawnTransform_ReturnValue = CallFunc_GetPlayerSpawnTransform_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.CallFunc_GetPortalId_IsValid = CallFunc_GetPortalId_IsValid;
	Parms.CallFunc_GetPortalId_Id = CallFunc_GetPortalId_Id;
	Parms.CallFunc_GetStartPointId_IsValid = CallFunc_GetStartPointId_IsValid;
	Parms.CallFunc_GetStartPointId_Id = CallFunc_GetStartPointId_Id;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_2 = CallFunc_FinishSpawningActor_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Portal.BP_Structure_Portal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Structure_Portal_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Portal_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Portal.BP_Structure_Portal_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Structure_Portal_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Portal_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Portal.BP_Structure_Portal_C.OnLinkedReferencesRestored
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Structure_Portal_C::OnLinkedReferencesRestored()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Portal_C", "OnLinkedReferencesRestored");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Portal.BP_Structure_Portal_C.ExecuteUbergraph_BP_Structure_Portal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Portal_C::ExecuteUbergraph_BP_Structure_Portal(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Portal_C", "ExecuteUbergraph_BP_Structure_Portal");

	Params::ABP_Structure_Portal_C_ExecuteUbergraph_BP_Structure_Portal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


