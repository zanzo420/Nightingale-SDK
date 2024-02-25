#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AVFXPlacer_CAM_ENV.BP_AVFXPlacer_CAM_ENV_C
// (Actor)

class UClass* ABP_AVFXPlacer_CAM_ENV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AVFXPlacer_CAM_ENV_C");

	return Clss;
}


// BP_AVFXPlacer_CAM_ENV_C BP_AVFXPlacer_CAM_ENV.Default__BP_AVFXPlacer_CAM_ENV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AVFXPlacer_CAM_ENV_C* ABP_AVFXPlacer_CAM_ENV_C::GetDefaultObj()
{
	static class ABP_AVFXPlacer_CAM_ENV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AVFXPlacer_CAM_ENV_C*>(ABP_AVFXPlacer_CAM_ENV_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AVFXPlacer_CAM_ENV.BP_AVFXPlacer_CAM_ENV_C.ReceiveParticleData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBasicParticleData>  Data                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UNiagaraSystem*              NiagaraSystem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SimulationPositionOffset                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AVFXPlacer_CAM_ENV_C::ReceiveParticleData(TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, struct FVector& SimulationPositionOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_CAM_ENV_C", "ReceiveParticleData");

	Params::ABP_AVFXPlacer_CAM_ENV_C_ReceiveParticleData_Params Parms{};

	Parms.Data = Data;
	Parms.NiagaraSystem = NiagaraSystem;
	Parms.SimulationPositionOffset = SimulationPositionOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AVFXPlacer_CAM_ENV.BP_AVFXPlacer_CAM_ENV_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_AVFXPlacer_CAM_ENV_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_CAM_ENV_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AVFXPlacer_CAM_ENV.BP_AVFXPlacer_CAM_ENV_C.StopImportFXInsects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AVFXPlacer_CAM_ENV_C::StopImportFXInsects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_CAM_ENV_C", "StopImportFXInsects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AVFXPlacer_CAM_ENV.BP_AVFXPlacer_CAM_ENV_C.StartImportFXInsects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AVFXPlacer_CAM_ENV_C::StartImportFXInsects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_CAM_ENV_C", "StartImportFXInsects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AVFXPlacer_CAM_ENV.BP_AVFXPlacer_CAM_ENV_C.StopAllAVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AVFXPlacer_CAM_ENV_C::StopAllAVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_CAM_ENV_C", "StopAllAVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AVFXPlacer_CAM_ENV.BP_AVFXPlacer_CAM_ENV_C.StartAllAVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AVFXPlacer_CAM_ENV_C::StartAllAVFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_CAM_ENV_C", "StartAllAVFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AVFXPlacer_CAM_ENV.BP_AVFXPlacer_CAM_ENV_C.Spawn Ambient Floater Rural VFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystem*              Asset                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AVFXPlacer_CAM_ENV_C::Spawn_Ambient_Floater_Rural_VFX(class UNiagaraSystem* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_CAM_ENV_C", "Spawn Ambient Floater Rural VFX");

	Params::ABP_AVFXPlacer_CAM_ENV_C_Spawn_Ambient_Floater_Rural_VFX_Params Parms{};

	Parms.Asset = Asset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AVFXPlacer_CAM_ENV.BP_AVFXPlacer_CAM_ENV_C.Spawn Flying Insects VFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystem*              Asset                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AVFXPlacer_CAM_ENV_C::Spawn_Flying_Insects_VFX(class UNiagaraSystem* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_CAM_ENV_C", "Spawn Flying Insects VFX");

	Params::ABP_AVFXPlacer_CAM_ENV_C_Spawn_Flying_Insects_VFX_Params Parms{};

	Parms.Asset = Asset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AVFXPlacer_CAM_ENV.BP_AVFXPlacer_CAM_ENV_C.ExecuteUbergraph_BP_AVFXPlacer_CAM_ENV
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBiomeID                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBiomeID                Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBasicParticleData>  K2Node_Event_Data                                                (ConstParm, ReferenceParm)
// class UNiagaraSystem*              K2Node_Event_NiagaraSystem                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_SimulationPositionOffset                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXWorldSettings*           CallFunc_GetWorldSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              K2Node_CustomEvent_Asset_1                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              K2Node_CustomEvent_Asset                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_20                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_21                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_22                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_23                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_R_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_G_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_B_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Any_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Any_ImplicitCast_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_FloatersBiomeRateScale_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_8                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_InsectsBiomeRateScale_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AVFXPlacer_CAM_ENV_C::ExecuteUbergraph_BP_AVFXPlacer_CAM_ENV(int32 EntryPoint, enum class EBiomeID Temp_byte_Variable, enum class EBiomeID Temp_byte_Variable_1, float Temp_real_Variable, float Temp_real_Variable_1, float Temp_real_Variable_2, float Temp_real_Variable_3, float Temp_real_Variable_4, float Temp_real_Variable_5, float Temp_real_Variable_6, float Temp_real_Variable_7, float Temp_real_Variable_8, float Temp_real_Variable_9, float Temp_real_Variable_10, float Temp_real_Variable_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, TArray<struct FBasicParticleData>& K2Node_Event_Data, class UNiagaraSystem* K2Node_Event_NiagaraSystem, const struct FVector& K2Node_Event_SimulationPositionOffset, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_IsValid_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue_1, double CallFunc_MakeLiteralDouble_ReturnValue_2, int32 Temp_int_Variable, double K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue_3, float K2Node_Select_Default_1, float Temp_real_Variable_12, float Temp_real_Variable_13, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, float Temp_real_Variable_14, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, class UNiagaraSystem* K2Node_CustomEvent_Asset_1, bool CallFunc_IsValid_ReturnValue_2, class UNiagaraSystem* K2Node_CustomEvent_Asset, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, float Temp_real_Variable_15, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, float Temp_real_Variable_16, float Temp_real_Variable_17, float Temp_real_Variable_18, float Temp_real_Variable_19, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, float Temp_real_Variable_20, float Temp_real_Variable_21, float Temp_real_Variable_22, float Temp_real_Variable_23, float K2Node_Select_Default_2, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float K2Node_Select_Any_ImplicitCast, float K2Node_Select_Any_ImplicitCast_1, double K2Node_VariableSet_FloatersBiomeRateScale_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast_2, float CallFunc_SetFloatParameter_Param_ImplicitCast_3, float CallFunc_SetFloatParameter_Param_ImplicitCast_4, float CallFunc_SetFloatParameter_Param_ImplicitCast_5, float CallFunc_SetFloatParameter_Param_ImplicitCast_6, float CallFunc_SetFloatParameter_Param_ImplicitCast_7, float CallFunc_SetFloatParameter_Param_ImplicitCast_8, double K2Node_VariableSet_InsectsBiomeRateScale_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AVFXPlacer_CAM_ENV_C", "ExecuteUbergraph_BP_AVFXPlacer_CAM_ENV");

	Params::ABP_AVFXPlacer_CAM_ENV_C_ExecuteUbergraph_BP_AVFXPlacer_CAM_ENV_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.Temp_real_Variable_5 = Temp_real_Variable_5;
	Parms.Temp_real_Variable_6 = Temp_real_Variable_6;
	Parms.Temp_real_Variable_7 = Temp_real_Variable_7;
	Parms.Temp_real_Variable_8 = Temp_real_Variable_8;
	Parms.Temp_real_Variable_9 = Temp_real_Variable_9;
	Parms.Temp_real_Variable_10 = Temp_real_Variable_10;
	Parms.Temp_real_Variable_11 = Temp_real_Variable_11;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.K2Node_Event_Data = K2Node_Event_Data;
	Parms.K2Node_Event_NiagaraSystem = K2Node_Event_NiagaraSystem;
	Parms.K2Node_Event_SimulationPositionOffset = K2Node_Event_SimulationPositionOffset;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue = CallFunc_MakeLiteralDouble_ReturnValue;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue_1 = CallFunc_MakeLiteralDouble_ReturnValue_1;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue_2 = CallFunc_MakeLiteralDouble_ReturnValue_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetWorldSettings_ReturnValue = CallFunc_GetWorldSettings_ReturnValue;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue_3 = CallFunc_MakeLiteralDouble_ReturnValue_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_real_Variable_12 = Temp_real_Variable_12;
	Parms.Temp_real_Variable_13 = Temp_real_Variable_13;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.Temp_real_Variable_14 = Temp_real_Variable_14;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.K2Node_CustomEvent_Asset_1 = K2Node_CustomEvent_Asset_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_Asset = K2Node_CustomEvent_Asset;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.Temp_real_Variable_15 = Temp_real_Variable_15;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_1 = CallFunc_SpawnSystemAtLocation_ReturnValue_1;
	Parms.Temp_real_Variable_16 = Temp_real_Variable_16;
	Parms.Temp_real_Variable_17 = Temp_real_Variable_17;
	Parms.Temp_real_Variable_18 = Temp_real_Variable_18;
	Parms.Temp_real_Variable_19 = Temp_real_Variable_19;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.Temp_real_Variable_20 = Temp_real_Variable_20;
	Parms.Temp_real_Variable_21 = Temp_real_Variable_21;
	Parms.Temp_real_Variable_22 = Temp_real_Variable_22;
	Parms.Temp_real_Variable_23 = Temp_real_Variable_23;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_MakeStruct_R_ImplicitCast = K2Node_MakeStruct_R_ImplicitCast;
	Parms.K2Node_MakeStruct_G_ImplicitCast = K2Node_MakeStruct_G_ImplicitCast;
	Parms.K2Node_MakeStruct_B_ImplicitCast = K2Node_MakeStruct_B_ImplicitCast;
	Parms.K2Node_MakeStruct_A_ImplicitCast = K2Node_MakeStruct_A_ImplicitCast;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast = CallFunc_SetVariableFloat_InValue_ImplicitCast;
	Parms.K2Node_Select_Any_ImplicitCast = K2Node_Select_Any_ImplicitCast;
	Parms.K2Node_Select_Any_ImplicitCast_1 = K2Node_Select_Any_ImplicitCast_1;
	Parms.K2Node_VariableSet_FloatersBiomeRateScale_ImplicitCast = K2Node_VariableSet_FloatersBiomeRateScale_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast = CallFunc_SetFloatParameter_Param_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_1 = CallFunc_SetFloatParameter_Param_ImplicitCast_1;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_2 = CallFunc_SetFloatParameter_Param_ImplicitCast_2;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_3 = CallFunc_SetFloatParameter_Param_ImplicitCast_3;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_4 = CallFunc_SetFloatParameter_Param_ImplicitCast_4;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_5 = CallFunc_SetFloatParameter_Param_ImplicitCast_5;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_6 = CallFunc_SetFloatParameter_Param_ImplicitCast_6;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_7 = CallFunc_SetFloatParameter_Param_ImplicitCast_7;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_8 = CallFunc_SetFloatParameter_Param_ImplicitCast_8;
	Parms.K2Node_VariableSet_InsectsBiomeRateScale_ImplicitCast = K2Node_VariableSet_InsectsBiomeRateScale_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


