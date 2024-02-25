#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C
// (Actor)

class UClass* ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C");

	return Clss;
}


// BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C BP_Structure_EncounterTrigger_PuzzleMemoryCentre.Default__BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C* ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C::GetDefaultObj()
{
	static class ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C*>(ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.Get Hope Echo Target
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C::Get_Hope_Echo_Target(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C", "Get Hope Echo Target");

	Params::ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C_Get_Hope_Echo_Target_Params Parms{};

	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.SetAudioState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkSwitchValue*              SwitchValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C::SetAudioState(class UAkSwitchValue* SwitchValue, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C", "SetAudioState");

	Params::ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C_SetAudioState_Params Parms{};

	Parms.SwitchValue = SwitchValue;
	Parms.CallFunc_GetEncounterScopedAk_ScopedAk = CallFunc_GetEncounterScopedAk_ScopedAk;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.Assign Puzzle Beam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Piece_Vector                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Piece_Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C::Assign_Puzzle_Beam(const struct FVector& Piece_Vector, int32 Piece_Index, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C", "Assign Puzzle Beam");

	Params::ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C_Assign_Puzzle_Beam_Params Parms{};

	Parms.Piece_Vector = Piece_Vector;
	Parms.Piece_Index = Piece_Index;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.OnRep_PuzzleBeamVFXVectors
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C::OnRep_PuzzleBeamVFXVectors(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C", "OnRep_PuzzleBeamVFXVectors");

	Params::ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C_OnRep_PuzzleBeamVFXVectors_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.PuzzleLockdownVFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C::PuzzleLockdownVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C", "PuzzleLockdownVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.SpawnVFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C::SpawnVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C", "SpawnVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.Puzzle Piece Beam VFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Piece_Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C::Puzzle_Piece_Beam_VFX(class FName Piece_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C", "Puzzle Piece Beam VFX");

	Params::ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C_Puzzle_Piece_Beam_VFX_Params Parms{};

	Parms.Piece_Name = Piece_Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.Remove Puzzle Piece Beams VFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C::Remove_Puzzle_Piece_Beams_VFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C", "Remove Puzzle Piece Beams VFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.Advertise_Enum
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C::Advertise_Enum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C", "Advertise_Enum");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.Deactivated_Enum
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C::Deactivated_Enum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C", "Deactivated_Enum");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.PuzzleAdvertiseVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C::PuzzleAdvertiseVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C", "PuzzleAdvertiseVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.Puzzle Complete VFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C::Puzzle_Complete_VFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C", "Puzzle Complete VFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.Puzzle Flourish
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C::Puzzle_Flourish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C", "Puzzle Flourish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.PuzzleComplete
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C::PuzzleComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C", "PuzzleComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.PuzzleStart
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C::PuzzleStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C", "PuzzleStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.Add Puzzle Beam
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Piece_Vector                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Piece_Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C::Add_Puzzle_Beam(const struct FVector& Piece_Vector, int32 Piece_Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C", "Add Puzzle Beam");

	Params::ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C_Add_Puzzle_Beam_Params Parms{};

	Parms.Piece_Vector = Piece_Vector;
	Parms.Piece_Index = Piece_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.Remove Puzzle Beam
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Piece_Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C::Remove_Puzzle_Beam(int32 Piece_Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C", "Remove Puzzle Beam");

	Params::ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C_Remove_Puzzle_Beam_Params Parms{};

	Parms.Piece_Index = Piece_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_EncounterTrigger_PuzzleMemoryCentre.BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C.ExecuteUbergraph_BP_Structure_EncounterTrigger_PuzzleMemoryCentre
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Piece_Index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Piece_Name                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Map_Find_Value_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Map_Find_Value_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Map_Find_Value_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_2                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_3                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_4                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_5                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_6                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_7                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_8                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_9                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams                          (ContainsInstancedReference, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_9                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk_2                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams_1                        (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams_2                        (ContainsInstancedReference, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk_3                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk_4                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams_3                        (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams_4                        (ContainsInstancedReference, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk_5                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk_6                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams_5                        (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams_6                        (ContainsInstancedReference, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk_7                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk_8                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams_7                        (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams_8                        (ContainsInstancedReference, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_GetEncounterScopedAk_ScopedAk_9                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FS_EncounterAVFXParams      K2Node_MakeStruct_S_EncounterAVFXParams_9                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Piece_Vector                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Piece_Index_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C::ExecuteUbergraph_BP_Structure_EncounterTrigger_PuzzleMemoryCentre(int32 EntryPoint, int32 K2Node_CustomEvent_Piece_Index, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class FName K2Node_CustomEvent_Piece_Name, class UNiagaraComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FName Temp_name_Variable, bool CallFunc_HasAuthority_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UNiagaraComponent* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, class FName Temp_name_Variable_1, bool CallFunc_HasAuthority_ReturnValue_3, class UNiagaraComponent* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FVector& CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue_4, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_5, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_4, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_4, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_5, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_5, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_6, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_6, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_7, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_8, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_7, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_8, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_9, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_9, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_1, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_2, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_1, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_2, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_3, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_4, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_3, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_4, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_5, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_6, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_5, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_6, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_7, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_8, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_7, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_8, class UScopedAkComponent* CallFunc_GetEncounterScopedAk_ScopedAk_9, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams_9, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FVector& K2Node_CustomEvent_Piece_Vector, int32 K2Node_CustomEvent_Piece_Index_1, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_EncounterTrigger_PuzzleMemoryCentre_C", "ExecuteUbergraph_BP_Structure_EncounterTrigger_PuzzleMemoryCentre");

	Params::ABP_Structure_EncounterTrigger_PuzzleMemoryCentre_C_ExecuteUbergraph_BP_Structure_EncounterTrigger_PuzzleMemoryCentre_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Piece_Index = K2Node_CustomEvent_Piece_Index;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CustomEvent_Piece_Name = K2Node_CustomEvent_Piece_Name;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue_4 = CallFunc_HasAuthority_ReturnValue_4;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_5 = CallFunc_HasAuthority_ReturnValue_5;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_2 = CallFunc_K2_GetComponentToWorld_ReturnValue_2;
	Parms.CallFunc_HasAuthority_ReturnValue_6 = CallFunc_HasAuthority_ReturnValue_6;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_3 = CallFunc_K2_GetComponentLocation_ReturnValue_3;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_3 = CallFunc_K2_GetComponentToWorld_ReturnValue_3;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_4 = CallFunc_K2_GetComponentLocation_ReturnValue_4;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_4 = CallFunc_K2_GetComponentToWorld_ReturnValue_4;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_5 = CallFunc_K2_GetComponentLocation_ReturnValue_5;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_5 = CallFunc_K2_GetComponentToWorld_ReturnValue_5;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_6 = CallFunc_K2_GetComponentLocation_ReturnValue_6;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_6 = CallFunc_K2_GetComponentToWorld_ReturnValue_6;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_7 = CallFunc_K2_GetComponentLocation_ReturnValue_7;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_8 = CallFunc_K2_GetComponentLocation_ReturnValue_8;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_7 = CallFunc_K2_GetComponentToWorld_ReturnValue_7;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_8 = CallFunc_K2_GetComponentToWorld_ReturnValue_8;
	Parms.CallFunc_GetEncounterScopedAk_ScopedAk = CallFunc_GetEncounterScopedAk_ScopedAk;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_9 = CallFunc_K2_GetComponentLocation_ReturnValue_9;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams = K2Node_MakeStruct_S_EncounterAVFXParams;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_9 = CallFunc_K2_GetComponentToWorld_ReturnValue_9;
	Parms.CallFunc_GetEncounterScopedAk_ScopedAk_1 = CallFunc_GetEncounterScopedAk_ScopedAk_1;
	Parms.CallFunc_GetEncounterScopedAk_ScopedAk_2 = CallFunc_GetEncounterScopedAk_ScopedAk_2;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams_1 = K2Node_MakeStruct_S_EncounterAVFXParams_1;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams_2 = K2Node_MakeStruct_S_EncounterAVFXParams_2;
	Parms.CallFunc_GetEncounterScopedAk_ScopedAk_3 = CallFunc_GetEncounterScopedAk_ScopedAk_3;
	Parms.CallFunc_GetEncounterScopedAk_ScopedAk_4 = CallFunc_GetEncounterScopedAk_ScopedAk_4;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams_3 = K2Node_MakeStruct_S_EncounterAVFXParams_3;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams_4 = K2Node_MakeStruct_S_EncounterAVFXParams_4;
	Parms.CallFunc_GetEncounterScopedAk_ScopedAk_5 = CallFunc_GetEncounterScopedAk_ScopedAk_5;
	Parms.CallFunc_GetEncounterScopedAk_ScopedAk_6 = CallFunc_GetEncounterScopedAk_ScopedAk_6;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams_5 = K2Node_MakeStruct_S_EncounterAVFXParams_5;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams_6 = K2Node_MakeStruct_S_EncounterAVFXParams_6;
	Parms.CallFunc_GetEncounterScopedAk_ScopedAk_7 = CallFunc_GetEncounterScopedAk_ScopedAk_7;
	Parms.CallFunc_GetEncounterScopedAk_ScopedAk_8 = CallFunc_GetEncounterScopedAk_ScopedAk_8;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams_7 = K2Node_MakeStruct_S_EncounterAVFXParams_7;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams_8 = K2Node_MakeStruct_S_EncounterAVFXParams_8;
	Parms.CallFunc_GetEncounterScopedAk_ScopedAk_9 = CallFunc_GetEncounterScopedAk_ScopedAk_9;
	Parms.K2Node_MakeStruct_S_EncounterAVFXParams_9 = K2Node_MakeStruct_S_EncounterAVFXParams_9;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CustomEvent_Piece_Vector = K2Node_CustomEvent_Piece_Vector;
	Parms.K2Node_CustomEvent_Piece_Index_1 = K2Node_CustomEvent_Piece_Index_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


