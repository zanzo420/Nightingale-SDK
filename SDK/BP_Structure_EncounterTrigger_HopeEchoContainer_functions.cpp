#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C
// (Actor)

class UClass* ABP_Structure_EncounterTrigger_HopeEchoContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Structure_EncounterTrigger_HopeEchoContainer_C");

	return Clss;
}


// BP_Structure_EncounterTrigger_HopeEchoContainer_C BP_Structure_EncounterTrigger_HopeEchoContainer.Default__BP_Structure_EncounterTrigger_HopeEchoContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* ABP_Structure_EncounterTrigger_HopeEchoContainer_C::GetDefaultObj()
{
	static class ABP_Structure_EncounterTrigger_HopeEchoContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Structure_EncounterTrigger_HopeEchoContainer_C*>(ABP_Structure_EncounterTrigger_HopeEchoContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.ClearCachedHopeEcho
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_HopeEchoContainer_C::ClearCachedHopeEcho(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_HopeEchoContainer_C", "ClearCachedHopeEcho");

	Params::ABP_Structure_EncounterTrigger_HopeEchoContainer_C_ClearCachedHopeEcho_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.SetFaeCageAudioSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_HopeEchoContainer_C::SetFaeCageAudioSwitch(class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_HopeEchoContainer_C", "SetFaeCageAudioSwitch");

	Params::ABP_Structure_EncounterTrigger_HopeEchoContainer_C_SetFaeCageAudioSwitch_Params Parms{};

	Parms.CallFunc_GetEncounterScopedAk_ScopedAk = CallFunc_GetEncounterScopedAk_ScopedAk;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.StopTrappedRewardLoops
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                StopEssBundleIdle                                                (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams                          (ContainsInstancedReference, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_HopeEchoContainer_C::StopTrappedRewardLoops(const struct FGameplayTag& StopEssBundleIdle, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_HopeEchoContainer_C", "StopTrappedRewardLoops");

	Params::ABP_Structure_EncounterTrigger_HopeEchoContainer_C_StopTrappedRewardLoops_Params Parms{};

	Parms.StopEssBundleIdle = StopEssBundleIdle;
	Parms.CallFunc_GetEncounterScopedAk_ScopedAk = CallFunc_GetEncounterScopedAk_ScopedAk;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams = K2Node_MakeStruct_S_EncounterAVFXParams;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.OnRep_Reveal Cage AVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_HopeEchoContainer_C::OnRep_Reveal_Cage_AVFX(bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_HopeEchoContainer_C", "OnRep_Reveal Cage AVFX");

	Params::ABP_Structure_EncounterTrigger_HopeEchoContainer_C_OnRep_Reveal_Cage_AVFX_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Set Fae Cage On Encounter Complete
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              Encounter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Encounter_Reward_Actor_Class                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Encounter_HopeEcho_Base_C*K2Node_DynamicCast_AsBP_Encounter_Hope_Echo_Base                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_HopeEchoContainer_C::Set_Fae_Cage_On_Encounter_Complete(class AEncounterBase* Encounter, class UClass* Encounter_Reward_Actor_Class, bool K2Node_SwitchEnum_CmpSuccess, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class ABP_Encounter_HopeEcho_Base_C* K2Node_DynamicCast_AsBP_Encounter_Hope_Echo_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_HopeEchoContainer_C", "Set Fae Cage On Encounter Complete");

	Params::ABP_Structure_EncounterTrigger_HopeEchoContainer_C_Set_Fae_Cage_On_Encounter_Complete_Params Parms{};

	Parms.Encounter = Encounter;
	Parms.Encounter_Reward_Actor_Class = Encounter_Reward_Actor_Class;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Encounter_Hope_Echo_Base = K2Node_DynamicCast_AsBP_Encounter_Hope_Echo_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.OnRep_Encounter Reward Actor Type
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_HopeEchoContainer_C::OnRep_Encounter_Reward_Actor_Type(bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_HopeEchoContainer_C", "OnRep_Encounter Reward Actor Type");

	Params::ABP_Structure_EncounterTrigger_HopeEchoContainer_C_OnRep_Encounter_Reward_Actor_Type_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Set Fae Cage State On Combat Ended
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              Encounter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_HopeEchoContainer_C::Set_Fae_Cage_State_On_Combat_Ended(class AEncounterBase* Encounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_HopeEchoContainer_C", "Set Fae Cage State On Combat Ended");

	Params::ABP_Structure_EncounterTrigger_HopeEchoContainer_C_Set_Fae_Cage_State_On_Combat_Ended_Params Parms{};

	Parms.Encounter = Encounter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Set Fae Cage State On Combat Started
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              Encounter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_HopeEchoContainer_C::Set_Fae_Cage_State_On_Combat_Started(class AEncounterBase* Encounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_HopeEchoContainer_C", "Set Fae Cage State On Combat Started");

	Params::ABP_Structure_EncounterTrigger_HopeEchoContainer_C_Set_Fae_Cage_State_On_Combat_Started_Params Parms{};

	Parms.Encounter = Encounter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Set Fae Cage State On Encounter Started
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_HopeEchoContainer_C::Set_Fae_Cage_State_On_Encounter_Started()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_HopeEchoContainer_C", "Set Fae Cage State On Encounter Started");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.OnRep_Fae Cage State
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_HopeEchoContainer_C::OnRep_Fae_Cage_State(bool CallFunc_HasAuthority_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_HopeEchoContainer_C", "OnRep_Fae Cage State");

	Params::ABP_Structure_EncounterTrigger_HopeEchoContainer_C_OnRep_Fae_Cage_State_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Create Cage Open AVFX When Time Out
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                LoopStopTag                                                      (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams                          (ContainsInstancedReference, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams_1                        (ContainsInstancedReference, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_HopeEchoContainer_C::Create_Cage_Open_AVFX_When_Time_Out(const struct FGameplayTag& LoopStopTag, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_HopeEchoContainer_C", "Create Cage Open AVFX When Time Out");

	Params::ABP_Structure_EncounterTrigger_HopeEchoContainer_C_Create_Cage_Open_AVFX_When_Time_Out_Params Parms{};

	Parms.LoopStopTag = LoopStopTag;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_GetEncounterScopedAk_ScopedAk = CallFunc_GetEncounterScopedAk_ScopedAk;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams = K2Node_MakeStruct_S_EncounterAVFXParams;
	Parms.CallFunc_GetEncounterScopedAk_ScopedAk_1 = CallFunc_GetEncounterScopedAk_ScopedAk_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams_1 = K2Node_MakeStruct_S_EncounterAVFXParams_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Trigger Open Fae Cage AVFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_HopeEchoContainer_C::Trigger_Open_Fae_Cage_AVFX(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_HopeEchoContainer_C", "Trigger Open Fae Cage AVFX");

	Params::ABP_Structure_EncounterTrigger_HopeEchoContainer_C_Trigger_Open_Fae_Cage_AVFX_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Trigger Agitated Fae Cage AVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Update_Fae_Cage_AVFX_Param_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_HopeEchoContainer_C::Trigger_Agitated_Fae_Cage_AVFX(float CallFunc_Update_Fae_Cage_AVFX_Param_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_HopeEchoContainer_C", "Trigger Agitated Fae Cage AVFX");

	Params::ABP_Structure_EncounterTrigger_HopeEchoContainer_C_Trigger_Agitated_Fae_Cage_AVFX_Params Parms{};

	Parms.CallFunc_Update_Fae_Cage_AVFX_Param_ImplicitCast = CallFunc_Update_Fae_Cage_AVFX_Param_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Trigger Trapped Fae Cage AVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Update_Fae_Cage_AVFX_Param_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_HopeEchoContainer_C::Trigger_Trapped_Fae_Cage_AVFX(float CallFunc_Update_Fae_Cage_AVFX_Param_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_HopeEchoContainer_C", "Trigger Trapped Fae Cage AVFX");

	Params::ABP_Structure_EncounterTrigger_HopeEchoContainer_C_Trigger_Trapped_Fae_Cage_AVFX_Params Parms{};

	Parms.CallFunc_Update_Fae_Cage_AVFX_Param_ImplicitCast = CallFunc_Update_Fae_Cage_AVFX_Param_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Trigger Idle Fae Cage AVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_HopeEchoContainer_C::Trigger_Idle_Fae_Cage_AVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_HopeEchoContainer_C", "Trigger Idle Fae Cage AVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Initialize Trapped Fae Reward Idle AVFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Affinity_Table_Row                                               (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams                          (ContainsInstancedReference, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_HopeEchoContainer_C::Initialize_Trapped_Fae_Reward_Idle_AVFX(const struct FGameplayTag& Affinity_Table_Row, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_HopeEchoContainer_C", "Initialize Trapped Fae Reward Idle AVFX");

	Params::ABP_Structure_EncounterTrigger_HopeEchoContainer_C_Initialize_Trapped_Fae_Reward_Idle_AVFX_Params Parms{};

	Parms.Affinity_Table_Row = Affinity_Table_Row;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetEncounterScopedAk_ScopedAk = CallFunc_GetEncounterScopedAk_ScopedAk;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams = K2Node_MakeStruct_S_EncounterAVFXParams;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Initialize Idle Fae Cage AVFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams                          (ContainsInstancedReference, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_HopeEchoContainer_C::Initialize_Idle_Fae_Cage_AVFX(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_HopeEchoContainer_C", "Initialize Idle Fae Cage AVFX");

	Params::ABP_Structure_EncounterTrigger_HopeEchoContainer_C_Initialize_Idle_Fae_Cage_AVFX_Params Parms{};

	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetEncounterScopedAk_ScopedAk = CallFunc_GetEncounterScopedAk_ScopedAk;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams = K2Node_MakeStruct_S_EncounterAVFXParams;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Update Fae Cage AVFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                HostileToCalmTransitionTag                                       (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          EncounterScopedAk                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           Fae_Cage_AVFX                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk_2                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams_1                        (ContainsInstancedReference, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Map_Find_Value_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_InstabilityCache_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_InstabilityCache_ImplicitCast_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_HopeEchoContainer_C::Update_Fae_Cage_AVFX(float Param, const struct FGameplayTag& HostileToCalmTransitionTag, class UScopedAkComponent* EncounterScopedAk, class UNiagaraComponent* Fae_Cage_AVFX, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_1, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_2, class UAkSwitchValue* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class UAkSwitchValue* Temp_object_Variable_1, class UAkSwitchValue* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_1, class UNiagaraComponent* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, double K2Node_VariableSet_InstabilityCache_ImplicitCast, double K2Node_VariableSet_InstabilityCache_ImplicitCast_1, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_HopeEchoContainer_C", "Update Fae Cage AVFX");

	Params::ABP_Structure_EncounterTrigger_HopeEchoContainer_C_Update_Fae_Cage_AVFX_Params Parms{};

	Parms.Param = Param;
	Parms.HostileToCalmTransitionTag = HostileToCalmTransitionTag;
	Parms.EncounterScopedAk = EncounterScopedAk;
	Parms.Fae_Cage_AVFX = Fae_Cage_AVFX;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_GetEncounterScopedAk_ScopedAk = CallFunc_GetEncounterScopedAk_ScopedAk;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams = K2Node_MakeStruct_S_EncounterAVFXParams;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_1 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetEncounterScopedAk_ScopedAk_1 = CallFunc_GetEncounterScopedAk_ScopedAk_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_2 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetEncounterScopedAk_ScopedAk_2 = CallFunc_GetEncounterScopedAk_ScopedAk_2;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams_1 = K2Node_MakeStruct_S_EncounterAVFXParams_1;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_VariableSet_InstabilityCache_ImplicitCast = K2Node_VariableSet_InstabilityCache_ImplicitCast;
	Parms.K2Node_VariableSet_InstabilityCache_ImplicitCast_1 = K2Node_VariableSet_InstabilityCache_ImplicitCast_1;
	Parms.CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast = CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;
	Parms.CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast_1 = CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.OnDestroyedEvent
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_HopeEchoContainer_C::OnDestroyedEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_HopeEchoContainer_C", "OnDestroyedEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Initialize Hope Echo Container
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              Owning_Encounter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Essence_Bundle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Combat_Encounter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_HopeEchoContainer_C::Initialize_Hope_Echo_Container(class AEncounterBase* Owning_Encounter, bool Is_Essence_Bundle, bool Is_Combat_Encounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_HopeEchoContainer_C", "Initialize Hope Echo Container");

	Params::ABP_Structure_EncounterTrigger_HopeEchoContainer_C_Initialize_Hope_Echo_Container_Params Parms{};

	Parms.Owning_Encounter = Owning_Encounter;
	Parms.Is_Essence_Bundle = Is_Essence_Bundle;
	Parms.Is_Combat_Encounter = Is_Combat_Encounter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.Unbind from Encounter Events
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_HopeEchoContainer_C::Unbind_from_Encounter_Events()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_HopeEchoContainer_C", "Unbind from Encounter Events");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_HopeEchoContainer_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_HopeEchoContainer_C", "ReceiveEndPlay");

	Params::ABP_Structure_EncounterTrigger_HopeEchoContainer_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_HopeEchoContainer.BP_Structure_EncounterTrigger_HopeEchoContainer_C.ExecuteUbergraph_BP_Structure_EncounterTrigger_HopeEchoContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterBase*              K2Node_CustomEvent_Owning_Encounter                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Is_Essence_Bundle                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Is_Combat_Encounter                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_HopeEchoContainer_C::ExecuteUbergraph_BP_Structure_EncounterTrigger_HopeEchoContainer(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AEncounterBase* K2Node_CustomEvent_Owning_Encounter, bool K2Node_CustomEvent_Is_Essence_Bundle, bool K2Node_CustomEvent_Is_Combat_Encounter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_HopeEchoContainer_C", "ExecuteUbergraph_BP_Structure_EncounterTrigger_HopeEchoContainer");

	Params::ABP_Structure_EncounterTrigger_HopeEchoContainer_C_ExecuteUbergraph_BP_Structure_EncounterTrigger_HopeEchoContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_CustomEvent_Owning_Encounter = K2Node_CustomEvent_Owning_Encounter;
	Parms.K2Node_CustomEvent_Is_Essence_Bundle = K2Node_CustomEvent_Is_Essence_Bundle;
	Parms.K2Node_CustomEvent_Is_Combat_Encounter = K2Node_CustomEvent_Is_Combat_Encounter;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


