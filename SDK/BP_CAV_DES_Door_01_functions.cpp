#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C
// (Actor)

class UClass* ABP_CAV_DES_Door_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CAV_DES_Door_01_C");

	return Clss;
}


// BP_CAV_DES_Door_01_C BP_CAV_DES_Door_01.Default__BP_CAV_DES_Door_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CAV_DES_Door_01_C* ABP_CAV_DES_Door_01_C::GetDefaultObj()
{
	static class ABP_CAV_DES_Door_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CAV_DES_Door_01_C*>(ABP_CAV_DES_Door_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.TriggerDoorIndicatorAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CAV_DES_Door_01_C::TriggerDoorIndicatorAudio(bool CallFunc_PostAkEventScoped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "TriggerDoorIndicatorAudio");

	Params::ABP_CAV_DES_Door_01_C_TriggerDoorIndicatorAudio_Params Parms{};

	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.SetDoorIndicatorAudioSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkSwitchValue*              SwitchValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CAV_DES_Door_01_C::SetDoorIndicatorAudioSwitch(class UAkSwitchValue* SwitchValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "SetDoorIndicatorAudioSwitch");

	Params::ABP_CAV_DES_Door_01_C_SetDoorIndicatorAudioSwitch_Params Parms{};

	Parms.SwitchValue = SwitchValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.DeactivateVFX
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CAV_DES_Door_01_C::DeactivateVFX(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "DeactivateVFX");

	Params::ABP_CAV_DES_Door_01_C_DeactivateVFX_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.ResetDoorAnchorIdleAVFX
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CAV_DES_Door_01_C::ResetDoorAnchorIdleAVFX(bool CallFunc_IsValid_ReturnValue, float CallFunc_SetFloatParameter_Param_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "ResetDoorAnchorIdleAVFX");

	Params::ABP_CAV_DES_Door_01_C_ResetDoorAnchorIdleAVFX_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast = CallFunc_SetFloatParameter_Param_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.OnAcousticOpeningsUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAcousticsSubsystem*         CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAcousticsSubsystem*         CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAcousticOpeningComponent*   CallFunc_GetNearestAcousticOpening_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_CAV_DES_Door_01_C::OnAcousticOpeningsUpdated(bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDedicatedServer_ReturnValue, class UAcousticsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UAcousticsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UAcousticOpeningComponent* CallFunc_GetNearestAcousticOpening_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "OnAcousticOpeningsUpdated");

	Params::ABP_CAV_DES_Door_01_C_OnAcousticOpeningsUpdated_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetNearestAcousticOpening_ReturnValue = CallFunc_GetNearestAcousticOpening_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.DestroyAudio
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAcousticsSubsystem*         CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CAV_DES_Door_01_C::DestroyAudio(bool CallFunc_IsDedicatedServer_ReturnValue, class UAcousticsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "DestroyAudio");

	Params::ABP_CAV_DES_Door_01_C_DestroyAudio_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.InitAudio
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAcousticsSubsystem*         CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CAV_DES_Door_01_C::InitAudio(bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAcousticsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "InitAudio");

	Params::ABP_CAV_DES_Door_01_C_InitAudio_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.UpdateAcousticOpeningState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CentrePos                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CAV_DES_Door_01_C::UpdateAcousticOpeningState(const struct FVector& CentrePos, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "UpdateAcousticOpeningState");

	Params::ABP_CAV_DES_Door_01_C_UpdateAcousticOpeningState_Params Parms{};

	Parms.CentrePos = CentrePos;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.IsGateOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_CAV_DES_Door_01_C::IsGateOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "IsGateOpen");

	Params::ABP_CAV_DES_Door_01_C_IsGateOpen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.DoorAudioStop
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CAV_DES_Door_01_C::DoorAudioStop(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "DoorAudioStop");

	Params::ABP_CAV_DES_Door_01_C_DoorAudioStop_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.DoorAudioPlay
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CAV_DES_Door_01_C::DoorAudioPlay(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "DoorAudioPlay");

	Params::ABP_CAV_DES_Door_01_C_DoorAudioPlay_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.OnRep_GateIsOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CAV_DES_Door_01_C::OnRep_GateIsOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "OnRep_GateIsOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_CAV_DES_Door_01_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "Timeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_CAV_DES_Door_01_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "Timeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.PlayGateAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CAV_DES_Door_01_C::PlayGateAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "PlayGateAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.OpenGate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CAV_DES_Door_01_C::OpenGate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "OpenGate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.CloseGate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CAV_DES_Door_01_C::CloseGate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "CloseGate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CAV_DES_Door_01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.SSMReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AManagerBase*                Manager                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsReady                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CAV_DES_Door_01_C::SSMReady(class AManagerBase* Manager, bool bIsReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "SSMReady");

	Params::ABP_CAV_DES_Door_01_C_SSMReady_Params Parms{};

	Parms.Manager = Manager;
	Parms.bIsReady = bIsReady;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.PerformDirtyRealmReset
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_CAV_DES_Door_01_C::PerformDirtyRealmReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "PerformDirtyRealmReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.OnGateFullyOpened
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CAV_DES_Door_01_C::OnGateFullyOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "OnGateFullyOpened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CAV_DES_Door_01_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "ReceiveEndPlay");

	Params::ABP_CAV_DES_Door_01_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.OnPersistentDataRestored
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_CAV_DES_Door_01_C::OnPersistentDataRestored()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "OnPersistentDataRestored");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.PlayGateOpenAVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CAV_DES_Door_01_C::PlayGateOpenAVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "PlayGateOpenAVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CAV_DES_Door_01.BP_CAV_DES_Door_01_C.ExecuteUbergraph_BP_CAV_DES_Door_01
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AManagerBase*                K2Node_CustomEvent_Manager                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsReady                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NVFX_SpawnSystem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_CreateEncounterAVFX_NiagaraSystem                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams_1                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_CreateEncounterAVFX_NiagaraSystem_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AManagerBase>    Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable_1                                            (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterManagerInterface>K2Node_DynamicCast_AsEncounter_Manager_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterDirtyResetInterface>CallFunc_RegisterDirtyRealmResettable_Resettable_CastInput       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CAV_DES_Door_01_C::ExecuteUbergraph_BP_CAV_DES_Door_01(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AManagerBase* K2Node_CustomEvent_Manager, bool K2Node_CustomEvent_bIsReady, bool CallFunc_IsValid_ReturnValue_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_NVFX_SpawnSystem_ReturnValue, class UNiagaraComponent* CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams, bool CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned, class UNiagaraComponent* CallFunc_CreateEncounterAVFX_NiagaraSystem, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_1, bool CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned_1, class UNiagaraComponent* CallFunc_CreateEncounterAVFX_NiagaraSystem_1, bool CallFunc_IsValid_ReturnValue_5, TSubclassOf<class AManagerBase> Temp_class_Variable, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, TSubclassOf<class IInterface> Temp_class_Variable_1, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterManagerInterface> K2Node_DynamicCast_AsEncounter_Manager_Interface, bool K2Node_DynamicCast_bSuccess, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, TScriptInterface<class IEncounterDirtyResetInterface> CallFunc_RegisterDirtyRealmResettable_Resettable_CastInput, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CAV_DES_Door_01_C", "ExecuteUbergraph_BP_CAV_DES_Door_01");

	Params::ABP_CAV_DES_Door_01_C_ExecuteUbergraph_BP_CAV_DES_Door_01_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Manager = K2Node_CustomEvent_Manager;
	Parms.K2Node_CustomEvent_bIsReady = K2Node_CustomEvent_bIsReady;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_NVFX_SpawnSystem_ReturnValue = CallFunc_NVFX_SpawnSystem_ReturnValue;
	Parms.CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned = CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams = K2Node_MakeStruct_S_EncounterAVFXParams;
	Parms.CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned = CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned;
	Parms.CallFunc_CreateEncounterAVFX_NiagaraSystem = CallFunc_CreateEncounterAVFX_NiagaraSystem;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams_1 = K2Node_MakeStruct_S_EncounterAVFXParams_1;
	Parms.CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned_1 = CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned_1;
	Parms.CallFunc_CreateEncounterAVFX_NiagaraSystem_1 = CallFunc_CreateEncounterAVFX_NiagaraSystem_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.K2Node_DynamicCast_AsEncounter_Manager_Interface = K2Node_DynamicCast_AsEncounter_Manager_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_RegisterDirtyRealmResettable_Resettable_CastInput = CallFunc_RegisterDirtyRealmResettable_Resettable_CastInput;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast = CallFunc_SetFloatParameter_Param_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_1 = CallFunc_SetFloatParameter_Param_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


