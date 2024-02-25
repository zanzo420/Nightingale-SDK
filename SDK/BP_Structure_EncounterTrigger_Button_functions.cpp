#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Structure_EncounterTrigger_Button.BP_Structure_EncounterTrigger_Button_C
// (Actor)

class UClass* ABP_Structure_EncounterTrigger_Button_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Structure_EncounterTrigger_Button_C");

	return Clss;
}


// BP_Structure_EncounterTrigger_Button_C BP_Structure_EncounterTrigger_Button.Default__BP_Structure_EncounterTrigger_Button_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Structure_EncounterTrigger_Button_C* ABP_Structure_EncounterTrigger_Button_C::GetDefaultObj()
{
	static class ABP_Structure_EncounterTrigger_Button_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Structure_EncounterTrigger_Button_C*>(ABP_Structure_EncounterTrigger_Button_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Structure_EncounterTrigger_Button.BP_Structure_EncounterTrigger_Button_C.CanInteractWithActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               InteractAvailable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_Button_C::CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Button_C", "CanInteractWithActor");

	Params::ABP_Structure_EncounterTrigger_Button_C_CanInteractWithActor_Params Parms{};

	Parms.Controller = Controller;
	Parms.InteractionData = InteractionData;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractAvailable != nullptr)
		*InteractAvailable = Parms.InteractAvailable;

}


// Function BP_Structure_EncounterTrigger_Button.BP_Structure_EncounterTrigger_Button_C.AVFXParams
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_EncounterAVFXParams      S_EncounterAVFXParams                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams                          (ContainsInstancedReference, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_Button_C::AVFXParams(struct FS_EncounterAVFXParams* S_EncounterAVFXParams, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Button_C", "AVFXParams");

	Params::ABP_Structure_EncounterTrigger_Button_C_AVFXParams_Params Parms{};

	Parms.CallFunc_GetEncounterScopedAk_ScopedAk = CallFunc_GetEncounterScopedAk_ScopedAk;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams = K2Node_MakeStruct_S_EncounterAVFXParams;

	UObject::ProcessEvent(Func, &Parms);

	if (S_EncounterAVFXParams != nullptr)
		*S_EncounterAVFXParams = std::move(Parms.S_EncounterAVFXParams);

}


// Function BP_Structure_EncounterTrigger_Button.BP_Structure_EncounterTrigger_Button_C.Activated_Enum
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Button_C::Activated_Enum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Button_C", "Activated_Enum");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Button.BP_Structure_EncounterTrigger_Button_C.Advertise_Enum
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Button_C::Advertise_Enum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Button_C", "Advertise_Enum");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Button.BP_Structure_EncounterTrigger_Button_C.Completed_Enum
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Button_C::Completed_Enum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Button_C", "Completed_Enum");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Button.BP_Structure_EncounterTrigger_Button_C.Deactivated_Enum
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Button_C::Deactivated_Enum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Button_C", "Deactivated_Enum");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Button.BP_Structure_EncounterTrigger_Button_C.Initialize_Enum
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Button_C::Initialize_Enum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Button_C", "Initialize_Enum");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Button.BP_Structure_EncounterTrigger_Button_C.InteractVFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Button_C::InteractVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Button_C", "InteractVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Button.BP_Structure_EncounterTrigger_Button_C.AdvertiseButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Button_C::AdvertiseButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Button_C", "AdvertiseButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Button.BP_Structure_EncounterTrigger_Button_C.EncounterComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Button_C::EncounterComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Button_C", "EncounterComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Button.BP_Structure_EncounterTrigger_Button_C.DeactivatedButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Button_C::DeactivatedButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Button_C", "DeactivatedButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Button.BP_Structure_EncounterTrigger_Button_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Button_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Button_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Button.BP_Structure_EncounterTrigger_Button_C.Call Interact VFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Structure_EncounterTrigger_C*Triggering_Structure                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_Button_C::Call_Interact_VFX(class ABP_Structure_EncounterTrigger_C* Triggering_Structure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Button_C", "Call Interact VFX");

	Params::ABP_Structure_EncounterTrigger_Button_C_Call_Interact_VFX_Params Parms{};

	Parms.Triggering_Structure = Triggering_Structure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_Button.BP_Structure_EncounterTrigger_Button_C.PerformDirtyRealmReset
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Button_C::PerformDirtyRealmReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Button_C", "PerformDirtyRealmReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Button.BP_Structure_EncounterTrigger_Button_C.ExecuteUbergraph_BP_Structure_EncounterTrigger_Button
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      CallFunc_AVFXParams_S_EncounterAVFXParams                        (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      CallFunc_AVFXParams_S_EncounterAVFXParams_1                      (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_EncounterTrigger_C*K2Node_CustomEvent_Triggering_Structure                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_Button_C::ExecuteUbergraph_BP_Structure_EncounterTrigger_Button(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_1, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_Structure_EncounterTrigger_C* K2Node_CustomEvent_Triggering_Structure, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Button_C", "ExecuteUbergraph_BP_Structure_EncounterTrigger_Button");

	Params::ABP_Structure_EncounterTrigger_Button_C_ExecuteUbergraph_BP_Structure_EncounterTrigger_Button_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_AVFXParams_S_EncounterAVFXParams = CallFunc_AVFXParams_S_EncounterAVFXParams;
	Parms.CallFunc_AVFXParams_S_EncounterAVFXParams_1 = CallFunc_AVFXParams_S_EncounterAVFXParams_1;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Triggering_Structure = K2Node_CustomEvent_Triggering_Structure;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


