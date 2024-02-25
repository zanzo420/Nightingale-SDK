#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AVFXPlacer_Dust.BP_AVFXPlacer_Dust_C
// (Actor)

class UClass* ABP_AVFXPlacer_Dust_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AVFXPlacer_Dust_C");

	return Clss;
}


// BP_AVFXPlacer_Dust_C BP_AVFXPlacer_Dust.Default__BP_AVFXPlacer_Dust_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AVFXPlacer_Dust_C* ABP_AVFXPlacer_Dust_C::GetDefaultObj()
{
	static class ABP_AVFXPlacer_Dust_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AVFXPlacer_Dust_C*>(ABP_AVFXPlacer_Dust_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AVFXPlacer_Dust.BP_AVFXPlacer_Dust_C.ReceiveParticleData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBasicParticleData>  Data                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UNiagaraSystem*              NiagaraSystem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SimulationPositionOffset                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AVFXPlacer_Dust_C::ReceiveParticleData(TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, struct FVector& SimulationPositionOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_Dust_C", "ReceiveParticleData");

	Params::ABP_AVFXPlacer_Dust_C_ReceiveParticleData_Params Parms{};

	Parms.Data = Data;
	Parms.NiagaraSystem = NiagaraSystem;
	Parms.SimulationPositionOffset = SimulationPositionOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AVFXPlacer_Dust.BP_AVFXPlacer_Dust_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_AVFXPlacer_Dust_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_Dust_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AVFXPlacer_Dust.BP_AVFXPlacer_Dust_C.StopImportFXDust
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AVFXPlacer_Dust_C::StopImportFXDust()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_Dust_C", "StopImportFXDust");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AVFXPlacer_Dust.BP_AVFXPlacer_Dust_C.StartImportFXDust
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AVFXPlacer_Dust_C::StartImportFXDust()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_Dust_C", "StartImportFXDust");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AVFXPlacer_Dust.BP_AVFXPlacer_Dust_C.StopAllAVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AVFXPlacer_Dust_C::StopAllAVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_Dust_C", "StopAllAVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AVFXPlacer_Dust.BP_AVFXPlacer_Dust_C.StartAllAVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AVFXPlacer_Dust_C::StartAllAVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_Dust_C", "StartAllAVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AVFXPlacer_Dust.BP_AVFXPlacer_Dust_C.OnNiagaraAsyncLoadCompleteEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystem*              Asset                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AVFXPlacer_Dust_C::OnNiagaraAsyncLoadCompleteEvent(class UNiagaraSystem* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_Dust_C", "OnNiagaraAsyncLoadCompleteEvent");

	Params::ABP_AVFXPlacer_Dust_C_OnNiagaraAsyncLoadCompleteEvent_Params Parms{};

	Parms.Asset = Asset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AVFXPlacer_Dust.BP_AVFXPlacer_Dust_C.ExecuteUbergraph_BP_AVFXPlacer_Dust
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBasicParticleData>  K2Node_Event_Data                                                (ConstParm, ReferenceParm)
// class UNiagaraSystem*              K2Node_Event_NiagaraSystem                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_SimulationPositionOffset                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UNiagaraSystem>CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              K2Node_Event_Asset                                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UNiagaraSystem>CallFunc_Map_Find_Value_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_R_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_G_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_B_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_R_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_G_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_B_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AVFXPlacer_Dust_C::ExecuteUbergraph_BP_AVFXPlacer_Dust(int32 EntryPoint, int32 Temp_int_Variable, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<struct FBasicParticleData>& K2Node_Event_Data, class UNiagaraSystem* K2Node_Event_NiagaraSystem, const struct FVector& K2Node_Event_SimulationPositionOffset, bool K2Node_SwitchInteger_CmpSuccess, double CallFunc_MakeLiteralDouble_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, double CallFunc_MakeLiteralDouble_ReturnValue_1, TSoftObjectPtr<class UNiagaraSystem> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_1, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue_1, class UNiagaraSystem* K2Node_Event_Asset, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, int32 Temp_int_Variable_1, TSoftObjectPtr<class UNiagaraSystem> CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast_1, float K2Node_MakeStruct_G_ImplicitCast_1, float K2Node_MakeStruct_B_ImplicitCast_1, float K2Node_MakeStruct_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_Dust_C", "ExecuteUbergraph_BP_AVFXPlacer_Dust");

	Params::ABP_AVFXPlacer_Dust_C_ExecuteUbergraph_BP_AVFXPlacer_Dust_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Event_Data = K2Node_Event_Data;
	Parms.K2Node_Event_NiagaraSystem = K2Node_Event_NiagaraSystem;
	Parms.K2Node_Event_SimulationPositionOffset = K2Node_Event_SimulationPositionOffset;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue = CallFunc_MakeLiteralDouble_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue_1 = CallFunc_MakeLiteralDouble_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue_1 = CallFunc_K2_GetComponentScale_ReturnValue_1;
	Parms.K2Node_Event_Asset = K2Node_Event_Asset;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_R_ImplicitCast = K2Node_MakeStruct_R_ImplicitCast;
	Parms.K2Node_MakeStruct_G_ImplicitCast = K2Node_MakeStruct_G_ImplicitCast;
	Parms.K2Node_MakeStruct_B_ImplicitCast = K2Node_MakeStruct_B_ImplicitCast;
	Parms.K2Node_MakeStruct_A_ImplicitCast = K2Node_MakeStruct_A_ImplicitCast;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast = CallFunc_SetVariableFloat_InValue_ImplicitCast;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_1 = CallFunc_SetVariableFloat_InValue_ImplicitCast_1;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast = CallFunc_SetFloatParameter_Param_ImplicitCast;
	Parms.K2Node_MakeStruct_R_ImplicitCast_1 = K2Node_MakeStruct_R_ImplicitCast_1;
	Parms.K2Node_MakeStruct_G_ImplicitCast_1 = K2Node_MakeStruct_G_ImplicitCast_1;
	Parms.K2Node_MakeStruct_B_ImplicitCast_1 = K2Node_MakeStruct_B_ImplicitCast_1;
	Parms.K2Node_MakeStruct_A_ImplicitCast_1 = K2Node_MakeStruct_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


