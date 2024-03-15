#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_datetime.WBP_datetime_C
// (None)

class UClass* UWBP_datetime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_datetime_C");

	return Clss;
}


// WBP_datetime_C WBP_datetime.Default__WBP_datetime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_datetime_C* UWBP_datetime_C::GetDefaultObj()
{
	static class UWBP_datetime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_datetime_C*>(UWBP_datetime_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_datetime.WBP_datetime_C.GetLocalizedMeridiemString
// (Exec, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               bIsPM                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        OutMeridiem                                                      (Parm, OutParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)

void UWBP_datetime_C::GetLocalizedMeridiemString(bool bIsPM, class FText* OutMeridiem, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_datetime_C", "GetLocalizedMeridiemString");

	Params::UWBP_datetime_C_GetLocalizedMeridiemString_Params Parms{};

	Parms.bIsPM = bIsPM;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutMeridiem != nullptr)
		*OutMeridiem = Parms.OutMeridiem;

}


// Function WBP_datetime.WBP_datetime_C.Unbindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_datetime_C::Unbindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_datetime_C", "Unbindings");

	Params::UWBP_datetime_C_Unbindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_datetime.WBP_datetime_C.UpdateClockFace
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_TryGetClockFaceTime_PM                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_TryGetClockFaceTime_Hours                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_TryGetClockFaceTime_Minutes                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_TryGetClockFaceTime_Seconds                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetClockFaceTime_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_MakeDateTime_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_FormatDateTime_ReturnValue                              (None)

void UWBP_datetime_C::UpdateClockFace(bool CallFunc_TryGetClockFaceTime_PM, int32 CallFunc_TryGetClockFaceTime_Hours, int32 CallFunc_TryGetClockFaceTime_Minutes, int32 CallFunc_TryGetClockFaceTime_Seconds, bool CallFunc_TryGetClockFaceTime_ReturnValue, const struct FDateTime& CallFunc_MakeDateTime_ReturnValue, class FText CallFunc_FormatDateTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_datetime_C", "UpdateClockFace");

	Params::UWBP_datetime_C_UpdateClockFace_Params Parms{};

	Parms.CallFunc_TryGetClockFaceTime_PM = CallFunc_TryGetClockFaceTime_PM;
	Parms.CallFunc_TryGetClockFaceTime_Hours = CallFunc_TryGetClockFaceTime_Hours;
	Parms.CallFunc_TryGetClockFaceTime_Minutes = CallFunc_TryGetClockFaceTime_Minutes;
	Parms.CallFunc_TryGetClockFaceTime_Seconds = CallFunc_TryGetClockFaceTime_Seconds;
	Parms.CallFunc_TryGetClockFaceTime_ReturnValue = CallFunc_TryGetClockFaceTime_ReturnValue;
	Parms.CallFunc_MakeDateTime_ReturnValue = CallFunc_MakeDateTime_ReturnValue;
	Parms.CallFunc_FormatDateTime_ReturnValue = CallFunc_FormatDateTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_datetime.WBP_datetime_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_datetime_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_datetime_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_datetime.WBP_datetime_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_datetime_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_datetime_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_datetime.WBP_datetime_C.ExecuteUbergraph_WBP_datetime
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TimeOfDayManager_C*      CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URealmTimerComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_SetRealmTimerByFunctionName_ReturnValue                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_datetime_C::ExecuteUbergraph_WBP_datetime(int32 EntryPoint, class ABP_TimeOfDayManager_C* CallFunc_GetActorOfClass_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URealmTimerComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FTimerHandle& CallFunc_SetRealmTimerByFunctionName_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_datetime_C", "ExecuteUbergraph_WBP_datetime");

	Params::UWBP_datetime_C_ExecuteUbergraph_WBP_datetime_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_SetRealmTimerByFunctionName_ReturnValue = CallFunc_SetRealmTimerByFunctionName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


