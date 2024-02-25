#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AVFXPlacer_RiverWaterSplash.BP_AVFXPlacer_RiverWaterSplash_C
// (Actor)

class UClass* ABP_AVFXPlacer_RiverWaterSplash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AVFXPlacer_RiverWaterSplash_C");

	return Clss;
}


// BP_AVFXPlacer_RiverWaterSplash_C BP_AVFXPlacer_RiverWaterSplash.Default__BP_AVFXPlacer_RiverWaterSplash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AVFXPlacer_RiverWaterSplash_C* ABP_AVFXPlacer_RiverWaterSplash_C::GetDefaultObj()
{
	static class ABP_AVFXPlacer_RiverWaterSplash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AVFXPlacer_RiverWaterSplash_C*>(ABP_AVFXPlacer_RiverWaterSplash_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AVFXPlacer_RiverWaterSplash.BP_AVFXPlacer_RiverWaterSplash_C.ReceiveParticleData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBasicParticleData>  Data                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UNiagaraSystem*              NiagaraSystem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SimulationPositionOffset                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AVFXPlacer_RiverWaterSplash_C::ReceiveParticleData(TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, struct FVector& SimulationPositionOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_RiverWaterSplash_C", "ReceiveParticleData");

	Params::ABP_AVFXPlacer_RiverWaterSplash_C_ReceiveParticleData_Params Parms{};

	Parms.Data = Data;
	Parms.NiagaraSystem = NiagaraSystem;
	Parms.SimulationPositionOffset = SimulationPositionOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AVFXPlacer_RiverWaterSplash.BP_AVFXPlacer_RiverWaterSplash_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_AVFXPlacer_RiverWaterSplash_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_RiverWaterSplash_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AVFXPlacer_RiverWaterSplash.BP_AVFXPlacer_RiverWaterSplash_C.StopImportFXWaterSplash
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AVFXPlacer_RiverWaterSplash_C::StopImportFXWaterSplash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_RiverWaterSplash_C", "StopImportFXWaterSplash");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AVFXPlacer_RiverWaterSplash.BP_AVFXPlacer_RiverWaterSplash_C.StartImportFXWaterSpash
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AVFXPlacer_RiverWaterSplash_C::StartImportFXWaterSpash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_RiverWaterSplash_C", "StartImportFXWaterSpash");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AVFXPlacer_RiverWaterSplash.BP_AVFXPlacer_RiverWaterSplash_C.StopAllAVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AVFXPlacer_RiverWaterSplash_C::StopAllAVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_RiverWaterSplash_C", "StopAllAVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AVFXPlacer_RiverWaterSplash.BP_AVFXPlacer_RiverWaterSplash_C.StartAllAVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AVFXPlacer_RiverWaterSplash_C::StartAllAVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_RiverWaterSplash_C", "StartAllAVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AVFXPlacer_RiverWaterSplash.BP_AVFXPlacer_RiverWaterSplash_C.OnNiagaraAsyncLoadCompleteEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystem*              Asset                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AVFXPlacer_RiverWaterSplash_C::OnNiagaraAsyncLoadCompleteEvent(class UNiagaraSystem* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_RiverWaterSplash_C", "OnNiagaraAsyncLoadCompleteEvent");

	Params::ABP_AVFXPlacer_RiverWaterSplash_C_OnNiagaraAsyncLoadCompleteEvent_Params Parms{};

	Parms.Asset = Asset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AVFXPlacer_RiverWaterSplash.BP_AVFXPlacer_RiverWaterSplash_C.ExecuteUbergraph_BP_AVFXPlacer_RiverWaterSplash
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBasicParticleData>  K2Node_Event_Data                                                (ConstParm, ReferenceParm)
// class UNiagaraSystem*              K2Node_Event_NiagaraSystem                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_SimulationPositionOffset                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              K2Node_Event_Asset                                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AVFXPlacer_RiverWaterSplash_C::ExecuteUbergraph_BP_AVFXPlacer_RiverWaterSplash(int32 EntryPoint, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_3, bool CallFunc_IsDedicatedServer_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, TArray<struct FBasicParticleData>& K2Node_Event_Data, class UNiagaraSystem* K2Node_Event_NiagaraSystem, const struct FVector& K2Node_Event_SimulationPositionOffset, class UNiagaraSystem* K2Node_Event_Asset, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_4, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast_2, float CallFunc_SetFloatParameter_Param_ImplicitCast_3, float CallFunc_SetFloatParameter_Param_ImplicitCast_4, float CallFunc_SetFloatParameter_Param_ImplicitCast_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_RiverWaterSplash_C", "ExecuteUbergraph_BP_AVFXPlacer_RiverWaterSplash");

	Params::ABP_AVFXPlacer_RiverWaterSplash_C_ExecuteUbergraph_BP_AVFXPlacer_RiverWaterSplash_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue_3 = CallFunc_MakeVector_ReturnValue_3;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Event_Data = K2Node_Event_Data;
	Parms.K2Node_Event_NiagaraSystem = K2Node_Event_NiagaraSystem;
	Parms.K2Node_Event_SimulationPositionOffset = K2Node_Event_SimulationPositionOffset;
	Parms.K2Node_Event_Asset = K2Node_Event_Asset;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_4 = CallFunc_MakeVector_ReturnValue_4;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast = CallFunc_SetFloatParameter_Param_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_1 = CallFunc_SetFloatParameter_Param_ImplicitCast_1;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_2 = CallFunc_SetFloatParameter_Param_ImplicitCast_2;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_3 = CallFunc_SetFloatParameter_Param_ImplicitCast_3;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_4 = CallFunc_SetFloatParameter_Param_ImplicitCast_4;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_5 = CallFunc_SetFloatParameter_Param_ImplicitCast_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


