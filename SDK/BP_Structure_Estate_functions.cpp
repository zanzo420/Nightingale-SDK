#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Structure_Estate.BP_Structure_Estate_C
// (Actor)

class UClass* ABP_Structure_Estate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Structure_Estate_C");

	return Clss;
}


// BP_Structure_Estate_C BP_Structure_Estate.Default__BP_Structure_Estate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Structure_Estate_C* ABP_Structure_Estate_C::GetDefaultObj()
{
	static class ABP_Structure_Estate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Structure_Estate_C*>(ABP_Structure_Estate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Structure_Estate.BP_Structure_Estate_C.GetRealmCardMachineComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URealmCardMachineComponent*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class URealmCardMachineComponent* ABP_Structure_Estate_C::GetRealmCardMachineComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Estate_C", "GetRealmCardMachineComponent");

	Params::ABP_Structure_Estate_C_GetRealmCardMachineComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Estate.BP_Structure_Estate_C.GetPlayerSpawnTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform ABP_Structure_Estate_C::GetPlayerSpawnTransform(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Estate_C", "GetPlayerSpawnTransform");

	Params::ABP_Structure_Estate_C_GetPlayerSpawnTransform_Params Parms{};

	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Estate.BP_Structure_Estate_C.GetPortalController
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPortalControllerComponent*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UPortalControllerComponent* ABP_Structure_Estate_C::GetPortalController()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Estate_C", "GetPortalController");

	Params::ABP_Structure_Estate_C_GetPortalController_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Estate.BP_Structure_Estate_C.GetStructureEstateComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStructureEstateComponent*   ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UStructureEstateComponent* ABP_Structure_Estate_C::GetStructureEstateComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Estate_C", "GetStructureEstateComponent");

	Params::ABP_Structure_Estate_C_GetStructureEstateComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Estate.BP_Structure_Estate_C.GetStructureEstateComponentForModify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStructureEstateComponent*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UStructureEstateComponent* ABP_Structure_Estate_C::GetStructureEstateComponentForModify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Estate_C", "GetStructureEstateComponentForModify");

	Params::ABP_Structure_Estate_C_GetStructureEstateComponentForModify_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Estate.BP_Structure_Estate_C.GetDisplayNameText
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetLocalPlayerPersistentId_PlayerId                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOwningPlayerID_OutPlayerId                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetOwningPlayerID_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayNameText_ReturnValue                          (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FText ABP_Structure_Estate_C::GetDisplayNameText(const class FString& CallFunc_GetLocalPlayerPersistentId_PlayerId, const class FString& CallFunc_GetOwningPlayerID_OutPlayerId, bool CallFunc_GetOwningPlayerID_ReturnValue, class FText CallFunc_GetDisplayNameText_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Estate_C", "GetDisplayNameText");

	Params::ABP_Structure_Estate_C_GetDisplayNameText_Params Parms{};

	Parms.CallFunc_GetLocalPlayerPersistentId_PlayerId = CallFunc_GetLocalPlayerPersistentId_PlayerId;
	Parms.CallFunc_GetOwningPlayerID_OutPlayerId = CallFunc_GetOwningPlayerID_OutPlayerId;
	Parms.CallFunc_GetOwningPlayerID_ReturnValue = CallFunc_GetOwningPlayerID_ReturnValue;
	Parms.CallFunc_GetDisplayNameText_ReturnValue = CallFunc_GetDisplayNameText_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Estate.BP_Structure_Estate_C.OnInit
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStructureComplete_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Estate_C::OnInit(class UObject* Structure, bool CallFunc_IsServer_ReturnValue, bool CallFunc_GetIsStructureComplete_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Estate_C", "OnInit");

	Params::ABP_Structure_Estate_C_OnInit_Params Parms{};

	Parms.Structure = Structure;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetIsStructureComplete_ReturnValue = CallFunc_GetIsStructureComplete_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Estate.BP_Structure_Estate_C.GetStructureTraitAuraCollider
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPrimitiveComponent*         ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UPrimitiveComponent* ABP_Structure_Estate_C::GetStructureTraitAuraCollider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Estate_C", "GetStructureTraitAuraCollider");

	Params::ABP_Structure_Estate_C_GetStructureTraitAuraCollider_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Estate.BP_Structure_Estate_C.GetStructureTraitAuraColliderForModify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPrimitiveComponent*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UPrimitiveComponent* ABP_Structure_Estate_C::GetStructureTraitAuraColliderForModify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Estate_C", "GetStructureTraitAuraColliderForModify");

	Params::ABP_Structure_Estate_C_GetStructureTraitAuraColliderForModify_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Estate.BP_Structure_Estate_C.InitializeEstateBounds
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetTraitInitData_IsValid                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureTraitInitData*     CallFunc_GetTraitInitData_OutTraitInitData                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCollisionProfileName_ProfileName                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Estate_C::InitializeEstateBounds(bool CallFunc_GetTraitInitData_IsValid, class UStructureTraitInitData* CallFunc_GetTraitInitData_OutTraitInitData, bool CallFunc_IsServer_ReturnValue, class FName CallFunc_GetCollisionProfileName_ProfileName, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Estate_C", "InitializeEstateBounds");

	Params::ABP_Structure_Estate_C_InitializeEstateBounds_Params Parms{};

	Parms.CallFunc_GetTraitInitData_IsValid = CallFunc_GetTraitInitData_IsValid;
	Parms.CallFunc_GetTraitInitData_OutTraitInitData = CallFunc_GetTraitInitData_OutTraitInitData;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetCollisionProfileName_ProfileName = CallFunc_GetCollisionProfileName_ProfileName;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Estate.BP_Structure_Estate_C.OnStateChange
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStructureComplete_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Estate_C::OnStateChange(bool CallFunc_IsServer_ReturnValue, bool CallFunc_GetIsStructureComplete_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Estate_C", "OnStateChange");

	Params::ABP_Structure_Estate_C_OnStateChange_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetIsStructureComplete_ReturnValue = CallFunc_GetIsStructureComplete_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Estate.BP_Structure_Estate_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Structure_Estate_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Estate_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Estate.BP_Structure_Estate_C.ExecuteUbergraph_BP_Structure_Estate
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Estate_C::ExecuteUbergraph_BP_Structure_Estate(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Estate_C", "ExecuteUbergraph_BP_Structure_Estate");

	Params::ABP_Structure_Estate_C_ExecuteUbergraph_BP_Structure_Estate_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


