#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_Contract_SleepExit.AIA_Creature_Contract_SleepExit_C
// (None)

class UClass* UAIA_Creature_Contract_SleepExit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_Contract_SleepExit_C");

	return Clss;
}


// AIA_Creature_Contract_SleepExit_C AIA_Creature_Contract_SleepExit.Default__AIA_Creature_Contract_SleepExit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_Contract_SleepExit_C* UAIA_Creature_Contract_SleepExit_C::GetDefaultObj()
{
	static class UAIA_Creature_Contract_SleepExit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_Contract_SleepExit_C*>(UAIA_Creature_Contract_SleepExit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIA_Creature_Contract_SleepExit.AIA_Creature_Contract_SleepExit_C.GetNormalizedScore
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAIA_Creature_Contract_SleepExit_C::GetNormalizedScore(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Contract_SleepExit_C", "GetNormalizedScore");

	Params::UAIA_Creature_Contract_SleepExit_C_GetNormalizedScore_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_Contract_SleepExit.AIA_Creature_Contract_SleepExit_C.CheckOwnerRequirements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LNocturnal                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LIsNight                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_SimulationMonitorComponent_C*LMonitor                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              LGameState                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAutomatedTestsRunning_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_Contract_SleepExit_C::CheckOwnerRequirements(bool LNocturnal, bool LIsNight, class UBP_SimulationMonitorComponent_C* LMonitor, class AGameStateBase* LGameState, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Contract_SleepExit_C", "CheckOwnerRequirements");

	Params::UAIA_Creature_Contract_SleepExit_C_CheckOwnerRequirements_Params Parms{};

	Parms.LNocturnal = LNocturnal;
	Parms.LIsNight = LIsNight;
	Parms.LMonitor = LMonitor;
	Parms.LGameState = LGameState;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_AreAutomatedTestsRunning_ReturnValue = CallFunc_AreAutomatedTestsRunning_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_Contract_SleepExit.AIA_Creature_Contract_SleepExit_C.CheckStaticTargetRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwnerPawn_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_Contract_SleepExit_C::CheckStaticTargetRequirements(class AActor* Target, class APawn* CallFunc_GetOwnerPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Contract_SleepExit_C", "CheckStaticTargetRequirements");

	Params::UAIA_Creature_Contract_SleepExit_C_CheckStaticTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_GetOwnerPawn_ReturnValue = CallFunc_GetOwnerPawn_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


