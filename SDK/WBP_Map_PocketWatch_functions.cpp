#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Map_PocketWatch.WBP_Map_PocketWatch_C
// (None)

class UClass* UWBP_Map_PocketWatch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Map_PocketWatch_C");

	return Clss;
}


// WBP_Map_PocketWatch_C WBP_Map_PocketWatch.Default__WBP_Map_PocketWatch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Map_PocketWatch_C* UWBP_Map_PocketWatch_C::GetDefaultObj()
{
	static class UWBP_Map_PocketWatch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Map_PocketWatch_C*>(UWBP_Map_PocketWatch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Map_PocketWatch.WBP_Map_PocketWatch_C.InitializeWatchSimulation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Map_PocketWatch_C::InitializeWatchSimulation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Map_PocketWatch_C", "InitializeWatchSimulation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Map_PocketWatch.WBP_Map_PocketWatch_C.Time_InitializeTimers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URealmTimerComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_SetRealmTimerByFunctionName_ReturnValue                 (NoDestructor, HasGetValueTypeHash)

void UWBP_Map_PocketWatch_C::Time_InitializeTimers(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class URealmTimerComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FTimerHandle& CallFunc_SetRealmTimerByFunctionName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Map_PocketWatch_C", "Time_InitializeTimers");

	Params::UWBP_Map_PocketWatch_C_Time_InitializeTimers_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_SetRealmTimerByFunctionName_ReturnValue = CallFunc_SetRealmTimerByFunctionName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Map_PocketWatch.WBP_Map_PocketWatch_C.GetTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Minutes                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Hours                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Float24h                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsAfternoon                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetClockFaceTime_PM                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_TryGetClockFaceTime_Hours                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_TryGetClockFaceTime_Minutes                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_TryGetClockFaceTime_Seconds                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetClockFaceTime_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderTransformAngle_Angle_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderTransformAngle_Angle_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_PocketWatch_C::GetTime(int32 Minutes, int32 Hours, double Float24h, bool IsAfternoon, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TryGetClockFaceTime_PM, int32 CallFunc_TryGetClockFaceTime_Hours, int32 CallFunc_TryGetClockFaceTime_Minutes, int32 CallFunc_TryGetClockFaceTime_Seconds, bool CallFunc_TryGetClockFaceTime_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Map_PocketWatch_C", "GetTime");

	Params::UWBP_Map_PocketWatch_C_GetTime_Params Parms{};

	Parms.Minutes = Minutes;
	Parms.Hours = Hours;
	Parms.Float24h = Float24h;
	Parms.IsAfternoon = IsAfternoon;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetClockFaceTime_PM = CallFunc_TryGetClockFaceTime_PM;
	Parms.CallFunc_TryGetClockFaceTime_Hours = CallFunc_TryGetClockFaceTime_Hours;
	Parms.CallFunc_TryGetClockFaceTime_Minutes = CallFunc_TryGetClockFaceTime_Minutes;
	Parms.CallFunc_TryGetClockFaceTime_Seconds = CallFunc_TryGetClockFaceTime_Seconds;
	Parms.CallFunc_TryGetClockFaceTime_ReturnValue = CallFunc_TryGetClockFaceTime_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetRenderTransformAngle_Angle_ImplicitCast = CallFunc_SetRenderTransformAngle_Angle_ImplicitCast;
	Parms.CallFunc_SetRenderTransformAngle_Angle_ImplicitCast_1 = CallFunc_SetRenderTransformAngle_Angle_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Map_PocketWatch.WBP_Map_PocketWatch_C.GetToolTipWidgetPocketWatch
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Tooltip_PocketWatch_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Map_PocketWatch_C::GetToolTipWidgetPocketWatch(class UWBP_Tooltip_PocketWatch_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Map_PocketWatch_C", "GetToolTipWidgetPocketWatch");

	Params::UWBP_Map_PocketWatch_C_GetToolTipWidgetPocketWatch_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Map_PocketWatch.WBP_Map_PocketWatch_C.DMI Setup Watch Hand Materials
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_PocketWatch_C::DMI_Setup_Watch_Hand_Materials(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Map_PocketWatch_C", "DMI Setup Watch Hand Materials");

	Params::UWBP_Map_PocketWatch_C_DMI_Setup_Watch_Hand_Materials_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Map_PocketWatch.WBP_Map_PocketWatch_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Map_PocketWatch_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Map_PocketWatch_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Map_PocketWatch.WBP_Map_PocketWatch_C.ExecuteUbergraph_WBP_Map_PocketWatch
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TimeOfDayManager_C*      CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Map_PocketWatch_C::ExecuteUbergraph_WBP_Map_PocketWatch(int32 EntryPoint, class ABP_TimeOfDayManager_C* CallFunc_GetActorOfClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Map_PocketWatch_C", "ExecuteUbergraph_WBP_Map_PocketWatch");

	Params::UWBP_Map_PocketWatch_C_ExecuteUbergraph_WBP_Map_PocketWatch_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


