#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C
// (Actor)

class UClass* ABP_Structure_EncounterTrigger_Pedestal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Structure_EncounterTrigger_Pedestal_C");

	return Clss;
}


// BP_Structure_EncounterTrigger_Pedestal_C BP_Structure_EncounterTrigger_Pedestal.Default__BP_Structure_EncounterTrigger_Pedestal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Structure_EncounterTrigger_Pedestal_C* ABP_Structure_EncounterTrigger_Pedestal_C::GetDefaultObj()
{
	static class ABP_Structure_EncounterTrigger_Pedestal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Structure_EncounterTrigger_Pedestal_C*>(ABP_Structure_EncounterTrigger_Pedestal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.StopBeamLoop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams                          (ContainsInstancedReference, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_Pedestal_C::StopBeamLoop(class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "StopBeamLoop");

	Params::ABP_Structure_EncounterTrigger_Pedestal_C_StopBeamLoop_Params Parms{};

	Parms.CallFunc_GetEncounterScopedAk_ScopedAk = CallFunc_GetEncounterScopedAk_ScopedAk;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams = K2Node_MakeStruct_S_EncounterAVFXParams;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.Initialize Pedestal VFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>             BeamAudioLocations                                               (Edit, BlueprintVisible)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams                          (ContainsInstancedReference, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Map_Find_Value_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Map_Find_Value_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children                          (ReferenceParm, ContainsInstancedReference)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams_1                        (ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children_1                        (ReferenceParm, ContainsInstancedReference)
// class USceneComponent*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Map_Find_Value_3                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_2                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams_2                        (ContainsInstancedReference, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_Pedestal_C::Initialize_Pedestal_VFX(const TArray<struct FVector>& BeamAudioLocations, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, class UNiagaraComponent* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UNiagaraComponent* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_1, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children_1, class USceneComponent* CallFunc_Array_Get_Item_1, class UNiagaraComponent* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_4, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "Initialize Pedestal VFX");

	Params::ABP_Structure_EncounterTrigger_Pedestal_C_Initialize_Pedestal_VFX_Params Parms{};

	Parms.BeamAudioLocations = BeamAudioLocations;
	Parms.CallFunc_GetEncounterScopedAk_ScopedAk = CallFunc_GetEncounterScopedAk_ScopedAk;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams = K2Node_MakeStruct_S_EncounterAVFXParams;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetChildrenComponents_Children = CallFunc_GetChildrenComponents_Children;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_3 = CallFunc_K2_GetComponentLocation_ReturnValue_3;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams_1 = K2Node_MakeStruct_S_EncounterAVFXParams_1;
	Parms.CallFunc_GetChildrenComponents_Children_1 = CallFunc_GetChildrenComponents_Children_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_2 = CallFunc_K2_GetComponentToWorld_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_4 = CallFunc_K2_GetComponentLocation_ReturnValue_4;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams_2 = K2Node_MakeStruct_S_EncounterAVFXParams_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_5 = CallFunc_K2_GetComponentLocation_ReturnValue_5;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.Initialize Trapped Fae Reward Idle AVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Pedestal_C::Initialize_Trapped_Fae_Reward_Idle_AVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "Initialize Trapped Fae Reward Idle AVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.Initialize Idle Fae Cage AVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Pedestal_C::Initialize_Idle_Fae_Cage_AVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "Initialize Idle Fae Cage AVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.Trigger Trapped Fae Cage AVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Pedestal_C::Trigger_Trapped_Fae_Cage_AVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "Trigger Trapped Fae Cage AVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.Trigger Open Fae Cage AVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Pedestal_C::Trigger_Open_Fae_Cage_AVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "Trigger Open Fae Cage AVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.Trigger Idle Fae Cage AVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Pedestal_C::Trigger_Idle_Fae_Cage_AVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "Trigger Idle Fae Cage AVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.Trigger Agitated Fae Cage AVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Pedestal_C::Trigger_Agitated_Fae_Cage_AVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "Trigger Agitated Fae Cage AVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.HopeEchoParametersSetUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_Pedestal_C::HopeEchoParametersSetUp(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "HopeEchoParametersSetUp");

	Params::ABP_Structure_EncounterTrigger_Pedestal_C_HopeEchoParametersSetUp_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.On Idle Pedestal FX Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              Encounter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_Pedestal_C::On_Idle_Pedestal_FX_Update(class AEncounterBase* Encounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "On Idle Pedestal FX Update");

	Params::ABP_Structure_EncounterTrigger_Pedestal_C_On_Idle_Pedestal_FX_Update_Params Parms{};

	Parms.Encounter = Encounter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.On Combat End Pedestal FX Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              Encounter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_Pedestal_C::On_Combat_End_Pedestal_FX_Update(class AEncounterBase* Encounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "On Combat End Pedestal FX Update");

	Params::ABP_Structure_EncounterTrigger_Pedestal_C_On_Combat_End_Pedestal_FX_Update_Params Parms{};

	Parms.Encounter = Encounter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.On Combat Start Pedestal FX Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              Encounter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          EncounterScopedAk                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_Pedestal_C::On_Combat_Start_Pedestal_FX_Update(class AEncounterBase* Encounter, class UScopedAkComponent* EncounterScopedAk, bool CallFunc_IsValid_ReturnValue, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "On Combat Start Pedestal FX Update");

	Params::ABP_Structure_EncounterTrigger_Pedestal_C_On_Combat_Start_Pedestal_FX_Update_Params Parms{};

	Parms.Encounter = Encounter;
	Parms.EncounterScopedAk = EncounterScopedAk;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetEncounterScopedAk_ScopedAk = CallFunc_GetEncounterScopedAk_ScopedAk;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.ClearPedestalVFXs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Map_Find_Value_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Map_Find_Value_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_Pedestal_C::ClearPedestalVFXs(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UNiagaraComponent* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, class UNiagaraComponent* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "ClearPedestalVFXs");

	Params::ABP_Structure_EncounterTrigger_Pedestal_C_ClearPedestalVFXs_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Pedestal_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Pedestal_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.Advertise_Enum
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Pedestal_C::Advertise_Enum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "Advertise_Enum");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.Activated_Enum
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Pedestal_C::Activated_Enum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "Activated_Enum");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.Reset_Enum
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Pedestal_C::Reset_Enum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "Reset_Enum");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.Layer VFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Pedestal_C::Layer_VFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "Layer VFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.RemoveShieldLayerVFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Pedestal_C::RemoveShieldLayerVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "RemoveShieldLayerVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.Completed_Enum
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Pedestal_C::Completed_Enum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "Completed_Enum");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.PedastalVFXTransitionOverTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Pedestal_C::PedastalVFXTransitionOverTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "PedastalVFXTransitionOverTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Pedestal_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_Pedestal_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "ReceiveEndPlay");

	Params::ABP_Structure_EncounterTrigger_Pedestal_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.Initialize Hope Echo Container
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              Owning_Encounter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Essence_Bundle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Combat_Encounter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_Pedestal_C::Initialize_Hope_Echo_Container(class AEncounterBase* Owning_Encounter, bool Is_Essence_Bundle, bool Is_Combat_Encounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "Initialize Hope Echo Container");

	Params::ABP_Structure_EncounterTrigger_Pedestal_C_Initialize_Hope_Echo_Container_Params Parms{};

	Parms.Owning_Encounter = Owning_Encounter;
	Parms.Is_Essence_Bundle = Is_Essence_Bundle;
	Parms.Is_Combat_Encounter = Is_Combat_Encounter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.Set Fae Cage On Encounter Complete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              Encounter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_Pedestal_C::Set_Fae_Cage_On_Encounter_Complete(class AEncounterBase* Encounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "Set Fae Cage On Encounter Complete");

	Params::ABP_Structure_EncounterTrigger_Pedestal_C_Set_Fae_Cage_On_Encounter_Complete_Params Parms{};

	Parms.Encounter = Encounter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.PedestalAudioSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_Pedestal_C::PedestalAudioSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "PedestalAudioSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_Pedestal.BP_Structure_EncounterTrigger_Pedestal_C.ExecuteUbergraph_BP_Structure_EncounterTrigger_Pedestal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterBase*              K2Node_Event_Owning_Encounter                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Is_Essence_Bundle                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Is_Combat_Encounter                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEncounterBase*              K2Node_Event_Encounter                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams                          (ContainsInstancedReference, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_Pedestal_C::ExecuteUbergraph_BP_Structure_EncounterTrigger_Pedestal(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AEncounterBase* K2Node_Event_Owning_Encounter, bool K2Node_Event_Is_Essence_Bundle, bool K2Node_Event_Is_Combat_Encounter, class AEncounterBase* K2Node_Event_Encounter, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_Pedestal_C", "ExecuteUbergraph_BP_Structure_EncounterTrigger_Pedestal");

	Params::ABP_Structure_EncounterTrigger_Pedestal_C_ExecuteUbergraph_BP_Structure_EncounterTrigger_Pedestal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_Event_Owning_Encounter = K2Node_Event_Owning_Encounter;
	Parms.K2Node_Event_Is_Essence_Bundle = K2Node_Event_Is_Essence_Bundle;
	Parms.K2Node_Event_Is_Combat_Encounter = K2Node_Event_Is_Combat_Encounter;
	Parms.K2Node_Event_Encounter = K2Node_Event_Encounter;
	Parms.CallFunc_GetEncounterScopedAk_ScopedAk = CallFunc_GetEncounterScopedAk_ScopedAk;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams = K2Node_MakeStruct_S_EncounterAVFXParams;

	UObject::ProcessEvent(Func, &Parms);

}

}


