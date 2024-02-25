#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Structure_Functional_Container_PI.BP_Structure_Functional_Container_PI_C
// (Actor)

class UClass* ABP_Structure_Functional_Container_PI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Structure_Functional_Container_PI_C");

	return Clss;
}


// BP_Structure_Functional_Container_PI_C BP_Structure_Functional_Container_PI.Default__BP_Structure_Functional_Container_PI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Structure_Functional_Container_PI_C* ABP_Structure_Functional_Container_PI_C::GetDefaultObj()
{
	static class ABP_Structure_Functional_Container_PI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Structure_Functional_Container_PI_C*>(ABP_Structure_Functional_Container_PI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Structure_Functional_Container_PI.BP_Structure_Functional_Container_PI_C.GetContainerFromProvider
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemContainerHandle        ContainerHandle                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// TScriptInterface<class IItemContainer>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TScriptInterface<class IItemContainer> ABP_Structure_Functional_Container_PI_C::GetContainerFromProvider(struct FItemContainerHandle& ContainerHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_PI_C", "GetContainerFromProvider");

	Params::ABP_Structure_Functional_Container_PI_C_GetContainerFromProvider_Params Parms{};

	Parms.ContainerHandle = ContainerHandle;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Functional_Container_PI.BP_Structure_Functional_Container_PI_C.GetDefaultContainer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TScriptInterface<class IItemContainer> ABP_Structure_Functional_Container_PI_C::GetDefaultContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_PI_C", "GetDefaultContainer");

	Params::ABP_Structure_Functional_Container_PI_C_GetDefaultContainer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Functional_Container_PI.BP_Structure_Functional_Container_PI_C.HasContainer
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Container                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemContainerHandle        CallFunc_GetContainerHandle_ReturnValue                          (NoDestructor)
// bool                               CallFunc_HasContainerFromHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Structure_Functional_Container_PI_C::HasContainer(TScriptInterface<class IItemContainer>& Container, const struct FItemContainerHandle& CallFunc_GetContainerHandle_ReturnValue, bool CallFunc_HasContainerFromHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_PI_C", "HasContainer");

	Params::ABP_Structure_Functional_Container_PI_C_HasContainer_Params Parms{};

	Parms.Container = Container;
	Parms.CallFunc_GetContainerHandle_ReturnValue = CallFunc_GetContainerHandle_ReturnValue;
	Parms.CallFunc_HasContainerFromHandle_ReturnValue = CallFunc_HasContainerFromHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Functional_Container_PI.BP_Structure_Functional_Container_PI_C.HasContainerFromHandle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemContainerHandle        ContainerHandle                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Structure_Functional_Container_PI_C::HasContainerFromHandle(struct FItemContainerHandle& ContainerHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_PI_C", "HasContainerFromHandle");

	Params::ABP_Structure_Functional_Container_PI_C_HasContainerFromHandle_Params Parms{};

	Parms.ContainerHandle = ContainerHandle;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Functional_Container_PI.BP_Structure_Functional_Container_PI_C.GetInventoryContainerInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      RequestingActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>ContainerInterface                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                PlayerState                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetStorageBox_Container                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetStorageBox_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_Container_PI_C::GetInventoryContainerInterface(class AActor* RequestingActor, TScriptInterface<class IItemContainer>* ContainerInterface, class APlayerState* PlayerState, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_GetStorageBox_Container, bool CallFunc_GetStorageBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_PI_C", "GetInventoryContainerInterface");

	Params::ABP_Structure_Functional_Container_PI_C_GetInventoryContainerInterface_Params Parms{};

	Parms.RequestingActor = RequestingActor;
	Parms.PlayerState = PlayerState;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetStorageBox_Container = CallFunc_GetStorageBox_Container;
	Parms.CallFunc_GetStorageBox_ReturnValue = CallFunc_GetStorageBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ContainerInterface != nullptr)
		*ContainerInterface = Parms.ContainerInterface;

}

}


