#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_SleepEnter.GA_CreatureAbility_SleepEnter_C
// (None)

class UClass* UGA_CreatureAbility_SleepEnter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_SleepEnter_C");

	return Clss;
}


// GA_CreatureAbility_SleepEnter_C GA_CreatureAbility_SleepEnter.Default__GA_CreatureAbility_SleepEnter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_SleepEnter_C* UGA_CreatureAbility_SleepEnter_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_SleepEnter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_SleepEnter_C*>(UGA_CreatureAbility_SleepEnter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_SleepEnter.GA_CreatureAbility_SleepEnter_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_CreatureAbility_SleepEnter_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_SleepEnter_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_CreatureAbility_SleepEnter.GA_CreatureAbility_SleepEnter_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_SleepEnter_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_SleepEnter_C", "K2_OnEndAbility");

	Params::UGA_CreatureAbility_SleepEnter_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAbility_SleepEnter.GA_CreatureAbility_SleepEnter_C.ExecuteUbergraph_GA_CreatureAbility_SleepEnter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_3                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_4                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_5                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_6                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AddTimedState_TimePeriod_ImplicitCast                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AddTimedState_TimePeriod_ImplicitCast_1                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AddTimedState_TimePeriod_ImplicitCast_2                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_SleepEnter_C::ExecuteUbergraph_GA_CreatureAbility_SleepEnter(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, const struct FGameplayTag& Temp_struct_Variable_4, const struct FGameplayTag& Temp_struct_Variable_5, const struct FGameplayTag& Temp_struct_Variable_6, bool K2Node_Event_bWasCancelled, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_AddTimedState_TimePeriod_ImplicitCast, float CallFunc_AddTimedState_TimePeriod_ImplicitCast_1, float CallFunc_AddTimedState_TimePeriod_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_SleepEnter_C", "ExecuteUbergraph_GA_CreatureAbility_SleepEnter");

	Params::UGA_CreatureAbility_SleepEnter_C_ExecuteUbergraph_GA_CreatureAbility_SleepEnter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_AddTimedState_TimePeriod_ImplicitCast = CallFunc_AddTimedState_TimePeriod_ImplicitCast;
	Parms.CallFunc_AddTimedState_TimePeriod_ImplicitCast_1 = CallFunc_AddTimedState_TimePeriod_ImplicitCast_1;
	Parms.CallFunc_AddTimedState_TimePeriod_ImplicitCast_2 = CallFunc_AddTimedState_TimePeriod_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


