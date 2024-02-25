#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Encounter_Reachpoint_AVFX_Actor.BP_Encounter_Reachpoint_AVFX_Actor_C
// (Actor)

class UClass* ABP_Encounter_Reachpoint_AVFX_Actor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Encounter_Reachpoint_AVFX_Actor_C");

	return Clss;
}


// BP_Encounter_Reachpoint_AVFX_Actor_C BP_Encounter_Reachpoint_AVFX_Actor.Default__BP_Encounter_Reachpoint_AVFX_Actor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Encounter_Reachpoint_AVFX_Actor_C* ABP_Encounter_Reachpoint_AVFX_Actor_C::GetDefaultObj()
{
	static class ABP_Encounter_Reachpoint_AVFX_Actor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Encounter_Reachpoint_AVFX_Actor_C*>(ABP_Encounter_Reachpoint_AVFX_Actor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Encounter_Reachpoint_AVFX_Actor.BP_Encounter_Reachpoint_AVFX_Actor_C.CheckBoundsForVFX
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             VfxScale                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Origin                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FLinearColor                Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBox                        CallFunc_GetNiagaraComponentLocalBounds_OutBounds                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetNiagaraComponentLocalBounds_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_NWXLineTraceSingle_OutHit                               (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_NWXLineTraceSingle_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetNiagaraVariableFloat_InValue_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_Reachpoint_AVFX_Actor_C::CheckBoundsForVFX(double VfxScale, const struct FVector& Origin, TArray<class UObject*>& Temp_object_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FBox& CallFunc_GetNiagaraComponentLocalBounds_OutBounds, bool CallFunc_GetNiagaraComponentLocalBounds_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_NWXLineTraceSingle_OutHit, bool CallFunc_NWXLineTraceSingle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_SetNiagaraVariableFloat_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_Reachpoint_AVFX_Actor_C", "CheckBoundsForVFX");

	Params::ABP_Encounter_Reachpoint_AVFX_Actor_C_CheckBoundsForVFX_Params Parms{};

	Parms.VfxScale = VfxScale;
	Parms.Origin = Origin;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetNiagaraComponentLocalBounds_OutBounds = CallFunc_GetNiagaraComponentLocalBounds_OutBounds;
	Parms.CallFunc_GetNiagaraComponentLocalBounds_ReturnValue = CallFunc_GetNiagaraComponentLocalBounds_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_NWXLineTraceSingle_OutHit = CallFunc_NWXLineTraceSingle_OutHit;
	Parms.CallFunc_NWXLineTraceSingle_ReturnValue = CallFunc_NWXLineTraceSingle_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SetNiagaraVariableFloat_InValue_ImplicitCast = CallFunc_SetNiagaraVariableFloat_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Encounter_Reachpoint_AVFX_Actor.BP_Encounter_Reachpoint_AVFX_Actor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Encounter_Reachpoint_AVFX_Actor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_Reachpoint_AVFX_Actor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Encounter_Reachpoint_AVFX_Actor.BP_Encounter_Reachpoint_AVFX_Actor_C.ExecuteUbergraph_BP_Encounter_Reachpoint_AVFX_Actor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void ABP_Encounter_Reachpoint_AVFX_Actor_C::ExecuteUbergraph_BP_Encounter_Reachpoint_AVFX_Actor(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Encounter_Reachpoint_AVFX_Actor_C", "ExecuteUbergraph_BP_Encounter_Reachpoint_AVFX_Actor");

	Params::ABP_Encounter_Reachpoint_AVFX_Actor_C_ExecuteUbergraph_BP_Encounter_Reachpoint_AVFX_Actor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


