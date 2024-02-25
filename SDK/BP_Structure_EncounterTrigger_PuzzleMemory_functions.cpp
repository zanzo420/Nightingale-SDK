#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Structure_EncounterTrigger_PuzzleMemory.BP_Structure_EncounterTrigger_PuzzleMemory_C
// (Actor)

class UClass* ABP_Structure_EncounterTrigger_PuzzleMemory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Structure_EncounterTrigger_PuzzleMemory_C");

	return Clss;
}


// BP_Structure_EncounterTrigger_PuzzleMemory_C BP_Structure_EncounterTrigger_PuzzleMemory.Default__BP_Structure_EncounterTrigger_PuzzleMemory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Structure_EncounterTrigger_PuzzleMemory_C* ABP_Structure_EncounterTrigger_PuzzleMemory_C::GetDefaultObj()
{
	static class ABP_Structure_EncounterTrigger_PuzzleMemory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Structure_EncounterTrigger_PuzzleMemory_C*>(ABP_Structure_EncounterTrigger_PuzzleMemory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Structure_EncounterTrigger_PuzzleMemory.BP_Structure_EncounterTrigger_PuzzleMemory_C.AVFXParams
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FS_EncounterAVFXParams      S_EncounterAVFXParams                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams                          (ContainsInstancedReference, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_PuzzleMemory_C::AVFXParams(struct FS_EncounterAVFXParams* S_EncounterAVFXParams, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemory_C", "AVFXParams");

	Params::ABP_Structure_EncounterTrigger_PuzzleMemory_C_AVFXParams_Params Parms{};

	Parms.CallFunc_GetEncounterScopedAk_ScopedAk = CallFunc_GetEncounterScopedAk_ScopedAk;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams = K2Node_MakeStruct_S_EncounterAVFXParams;

	UObject::ProcessEvent(Func, &Parms);

	if (S_EncounterAVFXParams != nullptr)
		*S_EncounterAVFXParams = std::move(Parms.S_EncounterAVFXParams);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemory.BP_Structure_EncounterTrigger_PuzzleMemory_C.PuzzleAdvertiseVFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemory_C::PuzzleAdvertiseVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemory_C", "PuzzleAdvertiseVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemory.BP_Structure_EncounterTrigger_PuzzleMemory_C.PuzzleResetAVFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemory_C::PuzzleResetAVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemory_C", "PuzzleResetAVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemory.BP_Structure_EncounterTrigger_PuzzleMemory_C.PuzzleLockdownVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemory_C::PuzzleLockdownVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemory_C", "PuzzleLockdownVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemory.BP_Structure_EncounterTrigger_PuzzleMemory_C.SpawnVFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemory_C::SpawnVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemory_C", "SpawnVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemory.BP_Structure_EncounterTrigger_PuzzleMemory_C.PuzzleCorrectVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemory_C::PuzzleCorrectVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemory_C", "PuzzleCorrectVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemory.BP_Structure_EncounterTrigger_PuzzleMemory_C.Activated_Enum
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemory_C::Activated_Enum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemory_C", "Activated_Enum");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemory.BP_Structure_EncounterTrigger_PuzzleMemory_C.Deactivated_Enum
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemory_C::Deactivated_Enum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemory_C", "Deactivated_Enum");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemory.BP_Structure_EncounterTrigger_PuzzleMemory_C.PuzzleCompleteVFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemory_C::PuzzleCompleteVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemory_C", "PuzzleCompleteVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemory.BP_Structure_EncounterTrigger_PuzzleMemory_C.Completed_Enum
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemory_C::Completed_Enum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemory_C", "Completed_Enum");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemory.BP_Structure_EncounterTrigger_PuzzleMemory_C.PuzzleINITVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemory_C::PuzzleINITVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemory_C", "PuzzleINITVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemory.BP_Structure_EncounterTrigger_PuzzleMemory_C.Lock SFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemory_C::Lock_SFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemory_C", "Lock SFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemory.BP_Structure_EncounterTrigger_PuzzleMemory_C.PuzzleReset
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemory_C::PuzzleReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemory_C", "PuzzleReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemory.BP_Structure_EncounterTrigger_PuzzleMemory_C.PuzzleLockdown
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemory_C::PuzzleLockdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemory_C", "PuzzleLockdown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemory.BP_Structure_EncounterTrigger_PuzzleMemory_C.PuzzleCorrect
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemory_C::PuzzleCorrect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemory_C", "PuzzleCorrect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemory.BP_Structure_EncounterTrigger_PuzzleMemory_C.InteractVFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemory_C::InteractVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemory_C", "InteractVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemory.BP_Structure_EncounterTrigger_PuzzleMemory_C.InteractionVFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              VFX_Instability                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_PuzzleMemory_C::InteractionVFX(float VFX_Instability)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemory_C", "InteractionVFX");

	Params::ABP_Structure_EncounterTrigger_PuzzleMemory_C_InteractionVFX_Params Parms{};

	Parms.VFX_Instability = VFX_Instability;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemory.BP_Structure_EncounterTrigger_PuzzleMemory_C.ExecuteUbergraph_BP_Structure_EncounterTrigger_PuzzleMemory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      CallFunc_AVFXParams_S_EncounterAVFXParams                        (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      CallFunc_AVFXParams_S_EncounterAVFXParams_1                      (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      CallFunc_AVFXParams_S_EncounterAVFXParams_2                      (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      CallFunc_AVFXParams_S_EncounterAVFXParams_3                      (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      CallFunc_AVFXParams_S_EncounterAVFXParams_4                      (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      CallFunc_AVFXParams_S_EncounterAVFXParams_5                      (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      CallFunc_AVFXParams_S_EncounterAVFXParams_6                      (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Map_Find_Value_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      CallFunc_AVFXParams_S_EncounterAVFXParams_7                      (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      CallFunc_AVFXParams_S_EncounterAVFXParams_8                      (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      CallFunc_AVFXParams_S_EncounterAVFXParams_9                      (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      CallFunc_AVFXParams_S_EncounterAVFXParams_10                     (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      CallFunc_AVFXParams_S_EncounterAVFXParams_11                     (ContainsInstancedReference, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Map_Find_Value_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      CallFunc_AVFXParams_S_EncounterAVFXParams_12                     (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      CallFunc_AVFXParams_S_EncounterAVFXParams_13                     (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams                          (ContainsInstancedReference, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Map_Find_Value_3                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_VFX_Instability                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_PuzzleMemory_C::ExecuteUbergraph_BP_Structure_EncounterTrigger_PuzzleMemory(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue, class FName Temp_name_Variable, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, class FName Temp_name_Variable_1, bool CallFunc_HasAuthority_ReturnValue_4, bool CallFunc_HasAuthority_ReturnValue_5, class FName Temp_name_Variable_2, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_1, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_2, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_3, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_4, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_5, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_6, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue_6, class UNiagaraComponent* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_7, bool CallFunc_HasAuthority_ReturnValue_7, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_8, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_9, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_10, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_11, class FName Temp_name_Variable_3, class UNiagaraComponent* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_12, const struct FS_EncounterAVFXParams& CallFunc_AVFXParams_S_EncounterAVFXParams_13, bool CallFunc_Not_PreBool_ReturnValue, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams, class UNiagaraComponent* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, float K2Node_CustomEvent_VFX_Instability, bool CallFunc_HasAuthority_ReturnValue_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemory_C", "ExecuteUbergraph_BP_Structure_EncounterTrigger_PuzzleMemory");

	Params::ABP_Structure_EncounterTrigger_PuzzleMemory_C_ExecuteUbergraph_BP_Structure_EncounterTrigger_PuzzleMemory_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_HasAuthority_ReturnValue_4 = CallFunc_HasAuthority_ReturnValue_4;
	Parms.CallFunc_HasAuthority_ReturnValue_5 = CallFunc_HasAuthority_ReturnValue_5;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_AVFXParams_S_EncounterAVFXParams = CallFunc_AVFXParams_S_EncounterAVFXParams;
	Parms.CallFunc_AVFXParams_S_EncounterAVFXParams_1 = CallFunc_AVFXParams_S_EncounterAVFXParams_1;
	Parms.CallFunc_AVFXParams_S_EncounterAVFXParams_2 = CallFunc_AVFXParams_S_EncounterAVFXParams_2;
	Parms.CallFunc_AVFXParams_S_EncounterAVFXParams_3 = CallFunc_AVFXParams_S_EncounterAVFXParams_3;
	Parms.CallFunc_AVFXParams_S_EncounterAVFXParams_4 = CallFunc_AVFXParams_S_EncounterAVFXParams_4;
	Parms.CallFunc_AVFXParams_S_EncounterAVFXParams_5 = CallFunc_AVFXParams_S_EncounterAVFXParams_5;
	Parms.CallFunc_AVFXParams_S_EncounterAVFXParams_6 = CallFunc_AVFXParams_S_EncounterAVFXParams_6;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue_6 = CallFunc_HasAuthority_ReturnValue_6;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_AVFXParams_S_EncounterAVFXParams_7 = CallFunc_AVFXParams_S_EncounterAVFXParams_7;
	Parms.CallFunc_HasAuthority_ReturnValue_7 = CallFunc_HasAuthority_ReturnValue_7;
	Parms.CallFunc_AVFXParams_S_EncounterAVFXParams_8 = CallFunc_AVFXParams_S_EncounterAVFXParams_8;
	Parms.CallFunc_AVFXParams_S_EncounterAVFXParams_9 = CallFunc_AVFXParams_S_EncounterAVFXParams_9;
	Parms.CallFunc_AVFXParams_S_EncounterAVFXParams_10 = CallFunc_AVFXParams_S_EncounterAVFXParams_10;
	Parms.CallFunc_AVFXParams_S_EncounterAVFXParams_11 = CallFunc_AVFXParams_S_EncounterAVFXParams_11;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_AVFXParams_S_EncounterAVFXParams_12 = CallFunc_AVFXParams_S_EncounterAVFXParams_12;
	Parms.CallFunc_AVFXParams_S_EncounterAVFXParams_13 = CallFunc_AVFXParams_S_EncounterAVFXParams_13;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetEncounterScopedAk_ScopedAk = CallFunc_GetEncounterScopedAk_ScopedAk;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams = K2Node_MakeStruct_S_EncounterAVFXParams;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;
	Parms.K2Node_CustomEvent_VFX_Instability = K2Node_CustomEvent_VFX_Instability;
	Parms.CallFunc_HasAuthority_ReturnValue_8 = CallFunc_HasAuthority_ReturnValue_8;

	UObject::ProcessEvent(Func, &Parms);

}

}


