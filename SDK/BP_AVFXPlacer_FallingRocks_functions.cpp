#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AVFXPlacer_FallingRocks.BP_AVFXPlacer_FallingRocks_C
// (Actor)

class UClass* ABP_AVFXPlacer_FallingRocks_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AVFXPlacer_FallingRocks_C");

	return Clss;
}


// BP_AVFXPlacer_FallingRocks_C BP_AVFXPlacer_FallingRocks.Default__BP_AVFXPlacer_FallingRocks_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AVFXPlacer_FallingRocks_C* ABP_AVFXPlacer_FallingRocks_C::GetDefaultObj()
{
	static class ABP_AVFXPlacer_FallingRocks_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AVFXPlacer_FallingRocks_C*>(ABP_AVFXPlacer_FallingRocks_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AVFXPlacer_FallingRocks.BP_AVFXPlacer_FallingRocks_C.ReceiveParticleData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBasicParticleData>  Data                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UNiagaraSystem*              NiagaraSystem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SimulationPositionOffset                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AVFXPlacer_FallingRocks_C::ReceiveParticleData(TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, struct FVector& SimulationPositionOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_FallingRocks_C", "ReceiveParticleData");

	Params::ABP_AVFXPlacer_FallingRocks_C_ReceiveParticleData_Params Parms{};

	Parms.Data = Data;
	Parms.NiagaraSystem = NiagaraSystem;
	Parms.SimulationPositionOffset = SimulationPositionOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AVFXPlacer_FallingRocks.BP_AVFXPlacer_FallingRocks_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_AVFXPlacer_FallingRocks_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_FallingRocks_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AVFXPlacer_FallingRocks.BP_AVFXPlacer_FallingRocks_C.StopImportFXDust
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AVFXPlacer_FallingRocks_C::StopImportFXDust()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_FallingRocks_C", "StopImportFXDust");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AVFXPlacer_FallingRocks.BP_AVFXPlacer_FallingRocks_C.StartImportFXDust
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AVFXPlacer_FallingRocks_C::StartImportFXDust()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_FallingRocks_C", "StartImportFXDust");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AVFXPlacer_FallingRocks.BP_AVFXPlacer_FallingRocks_C.StopAllAVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AVFXPlacer_FallingRocks_C::StopAllAVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_FallingRocks_C", "StopAllAVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AVFXPlacer_FallingRocks.BP_AVFXPlacer_FallingRocks_C.StartAllAVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AVFXPlacer_FallingRocks_C::StartAllAVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_FallingRocks_C", "StartAllAVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AVFXPlacer_FallingRocks.BP_AVFXPlacer_FallingRocks_C.OnNiagaraAsyncLoadCompleteEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystem*              Asset                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AVFXPlacer_FallingRocks_C::OnNiagaraAsyncLoadCompleteEvent(class UNiagaraSystem* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_FallingRocks_C", "OnNiagaraAsyncLoadCompleteEvent");

	Params::ABP_AVFXPlacer_FallingRocks_C_OnNiagaraAsyncLoadCompleteEvent_Params Parms{};

	Parms.Asset = Asset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AVFXPlacer_FallingRocks.BP_AVFXPlacer_FallingRocks_C.ExecuteUbergraph_BP_AVFXPlacer_FallingRocks
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBasicParticleData>  K2Node_Event_Data                                                (ConstParm, ReferenceParm)
// class UNiagaraSystem*              K2Node_Event_NiagaraSystem                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_SimulationPositionOffset                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              K2Node_Event_Asset                                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UNiagaraSystem>CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_R_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_G_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_B_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AVFXPlacer_FallingRocks_C::ExecuteUbergraph_BP_AVFXPlacer_FallingRocks(int32 EntryPoint, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, TArray<struct FBasicParticleData>& K2Node_Event_Data, class UNiagaraSystem* K2Node_Event_NiagaraSystem, const struct FVector& K2Node_Event_SimulationPositionOffset, bool CallFunc_IsDedicatedServer_ReturnValue, class UNiagaraSystem* K2Node_Event_Asset, double CallFunc_MakeLiteralDouble_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, int32 Temp_int_Variable, TSoftObjectPtr<class UNiagaraSystem> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1, float CallFunc_SetVariableFloat_InValue_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_FallingRocks_C", "ExecuteUbergraph_BP_AVFXPlacer_FallingRocks");

	Params::ABP_AVFXPlacer_FallingRocks_C_ExecuteUbergraph_BP_AVFXPlacer_FallingRocks_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.K2Node_Event_Data = K2Node_Event_Data;
	Parms.K2Node_Event_NiagaraSystem = K2Node_Event_NiagaraSystem;
	Parms.K2Node_Event_SimulationPositionOffset = K2Node_Event_SimulationPositionOffset;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Event_Asset = K2Node_Event_Asset;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue = CallFunc_MakeLiteralDouble_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_R_ImplicitCast = K2Node_MakeStruct_R_ImplicitCast;
	Parms.K2Node_MakeStruct_G_ImplicitCast = K2Node_MakeStruct_G_ImplicitCast;
	Parms.K2Node_MakeStruct_B_ImplicitCast = K2Node_MakeStruct_B_ImplicitCast;
	Parms.K2Node_MakeStruct_A_ImplicitCast = K2Node_MakeStruct_A_ImplicitCast;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast = CallFunc_SetVariableFloat_InValue_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast = CallFunc_SetFloatParameter_Param_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_1 = CallFunc_SetFloatParameter_Param_ImplicitCast_1;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_1 = CallFunc_SetVariableFloat_InValue_ImplicitCast_1;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_2 = CallFunc_SetVariableFloat_InValue_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


