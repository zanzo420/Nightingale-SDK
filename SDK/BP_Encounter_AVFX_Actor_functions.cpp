#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Encounter_AVFX_Actor.BP_Encounter_AVFX_Actor_C
// (Actor)

class UClass* ABP_Encounter_AVFX_Actor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Encounter_AVFX_Actor_C");

	return Clss;
}


// BP_Encounter_AVFX_Actor_C BP_Encounter_AVFX_Actor.Default__BP_Encounter_AVFX_Actor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Encounter_AVFX_Actor_C* ABP_Encounter_AVFX_Actor_C::GetDefaultObj()
{
	static class ABP_Encounter_AVFX_Actor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Encounter_AVFX_Actor_C*>(ABP_Encounter_AVFX_Actor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Encounter_AVFX_Actor.BP_Encounter_AVFX_Actor_C.DestroyAfterTimeOut
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DestroyTimer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_AVFX_Actor_C::DestroyAfterTimeOut(double DestroyTimer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_AVFX_Actor_C", "DestroyAfterTimeOut");

	Params::ABP_Encounter_AVFX_Actor_C_DestroyAfterTimeOut_Params Parms{};

	Parms.DestroyTimer = DestroyTimer;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_AVFX_Actor.BP_Encounter_AVFX_Actor_C.OnNiagaraComponentDestroy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*             Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_AVFX_Actor_C::OnNiagaraComponentDestroy(class UActorComponent* Component, bool CallFunc_PostAkEventScoped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_AVFX_Actor_C", "OnNiagaraComponentDestroy");

	Params::ABP_Encounter_AVFX_Actor_C_OnNiagaraComponentDestroy_Params Parms{};

	Parms.Component = Component;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_AVFX_Actor.BP_Encounter_AVFX_Actor_C.Clear AVFX
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_AVFX_Actor_C::Clear_AVFX(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_AVFX_Actor_C", "Clear AVFX");

	Params::ABP_Encounter_AVFX_Actor_C_Clear_AVFX_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_AVFX_Actor.BP_Encounter_AVFX_Actor_C.Create New Encounter AVFX
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                New_Affinity_Table_Row                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_CreateEncounterAVFX_NiagaraSystem                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_AVFX_Actor_C::Create_New_Encounter_AVFX(const struct FGameplayTag& New_Affinity_Table_Row, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams, bool CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned, class UNiagaraComponent* CallFunc_CreateEncounterAVFX_NiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_AVFX_Actor_C", "Create New Encounter AVFX");

	Params::ABP_Encounter_AVFX_Actor_C_Create_New_Encounter_AVFX_Params Parms{};

	Parms.New_Affinity_Table_Row = New_Affinity_Table_Row;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams = K2Node_MakeStruct_S_EncounterAVFXParams;
	Parms.CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned = CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned;
	Parms.CallFunc_CreateEncounterAVFX_NiagaraSystem = CallFunc_CreateEncounterAVFX_NiagaraSystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_AVFX_Actor.BP_Encounter_AVFX_Actor_C.OnLoaded_DC0D00EE4B2FDE5117FDB9970E8552AC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_AVFX_Actor_C::OnLoaded_DC0D00EE4B2FDE5117FDB9970E8552AC(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_AVFX_Actor_C", "OnLoaded_DC0D00EE4B2FDE5117FDB9970E8552AC");

	Params::ABP_Encounter_AVFX_Actor_C_OnLoaded_DC0D00EE4B2FDE5117FDB9970E8552AC_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_AVFX_Actor.BP_Encounter_AVFX_Actor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Encounter_AVFX_Actor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_AVFX_Actor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_AVFX_Actor.BP_Encounter_AVFX_Actor_C.Spawn New Encounter AVFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Affinity_Table_Row                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_AVFX_Actor_C::Spawn_New_Encounter_AVFX(const struct FGameplayTag& Affinity_Table_Row)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_AVFX_Actor_C", "Spawn New Encounter AVFX");

	Params::ABP_Encounter_AVFX_Actor_C_Spawn_New_Encounter_AVFX_Params Parms{};

	Parms.Affinity_Table_Row = Affinity_Table_Row;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_AVFX_Actor.BP_Encounter_AVFX_Actor_C.StopIdleLoopingSFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                LoopRowHandle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_AVFX_Actor_C::StopIdleLoopingSFX(const struct FGameplayTag& LoopRowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_AVFX_Actor_C", "StopIdleLoopingSFX");

	Params::ABP_Encounter_AVFX_Actor_C_StopIdleLoopingSFX_Params Parms{};

	Parms.LoopRowHandle = LoopRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_AVFX_Actor.BP_Encounter_AVFX_Actor_C.DestroyActorItself
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Encounter_AVFX_Actor_C::DestroyActorItself()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_AVFX_Actor_C", "DestroyActorItself");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_AVFX_Actor.BP_Encounter_AVFX_Actor_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Encounter_AVFX_Actor_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_AVFX_Actor_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_AVFX_Actor.BP_Encounter_AVFX_Actor_C.ExecuteUbergraph_BP_Encounter_AVFX_Actor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UScriptStruct*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FGameplayTag                K2Node_CustomEvent_Affinity_Table_Row                            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_LoopRowHandle                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAffinityTableCellDataWrapper>CallFunc_QueryTable_OutMemoryPtrs                                (ReferenceParm)
// bool                               CallFunc_QueryTable_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAudio           CallFunc_GetTableCellData_OutData                                (HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_DynamicCast_AsAk_Audio_Event                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PostAkEventScoped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_AVFX_Actor_C::ExecuteUbergraph_BP_Encounter_AVFX_Actor(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, const struct FGameplayTag& K2Node_CustomEvent_Affinity_Table_Row, bool CallFunc_HasAuthority_ReturnValue_2, const struct FGameplayTag& K2Node_CustomEvent_LoopRowHandle, bool CallFunc_HasAuthority_ReturnValue_3, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FS_EncounterAudio& CallFunc_GetTableCellData_OutData, class UObject* Temp_object_Variable, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event, bool K2Node_DynamicCast_bSuccess, bool CallFunc_PostAkEventScoped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_AVFX_Actor_C", "ExecuteUbergraph_BP_Encounter_AVFX_Actor");

	Params::ABP_Encounter_AVFX_Actor_C_ExecuteUbergraph_BP_Encounter_AVFX_Actor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CustomEvent_Affinity_Table_Row = K2Node_CustomEvent_Affinity_Table_Row;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.K2Node_CustomEvent_LoopRowHandle = K2Node_CustomEvent_LoopRowHandle;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.CallFunc_QueryTable_OutMemoryPtrs = CallFunc_QueryTable_OutMemoryPtrs;
	Parms.CallFunc_QueryTable_ReturnValue = CallFunc_QueryTable_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetTableCellData_OutData = CallFunc_GetTableCellData_OutData;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsAk_Audio_Event = K2Node_DynamicCast_AsAk_Audio_Event;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PostAkEventScoped_ReturnValue = CallFunc_PostAkEventScoped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_AVFX_Actor.BP_Encounter_AVFX_Actor_C.DestroyActor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Encounter_AVFX_Actor_C::DestroyActor__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_AVFX_Actor_C", "DestroyActor__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


