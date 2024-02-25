#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_AddTimedState.BTT_AddTimedState_C
// (None)

class UClass* UBTT_AddTimedState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_AddTimedState_C");

	return Clss;
}


// BTT_AddTimedState_C BTT_AddTimedState.Default__BTT_AddTimedState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_AddTimedState_C* UBTT_AddTimedState_C::GetDefaultObj()
{
	static class UBTT_AddTimedState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_AddTimedState_C*>(UBTT_AddTimedState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_AddTimedState.BTT_AddTimedState_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_AddTimedState_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_AddTimedState_C", "ReceiveExecuteAI");

	Params::UBTT_AddTimedState_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_AddTimedState.BTT_AddTimedState_C.ExecuteUbergraph_BTT_AddTimedState
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AddTimedState_TimePeriod_ImplicitCast                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_AddTimedState_C::ExecuteUbergraph_BTT_AddTimedState(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, bool CallFunc_IsValid_ReturnValue, float CallFunc_AddTimedState_TimePeriod_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_AddTimedState_C", "ExecuteUbergraph_BTT_AddTimedState");

	Params::UBTT_AddTimedState_C_ExecuteUbergraph_BTT_AddTimedState_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddTimedState_TimePeriod_ImplicitCast = CallFunc_AddTimedState_TimePeriod_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


