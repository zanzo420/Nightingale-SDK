#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_Combat_NPCMelee.AIA_Creature_Combat_NPCMelee_C
// (None)

class UClass* UAIA_Creature_Combat_NPCMelee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_Combat_NPCMelee_C");

	return Clss;
}


// AIA_Creature_Combat_NPCMelee_C AIA_Creature_Combat_NPCMelee.Default__AIA_Creature_Combat_NPCMelee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_Combat_NPCMelee_C* UAIA_Creature_Combat_NPCMelee_C::GetDefaultObj()
{
	static class UAIA_Creature_Combat_NPCMelee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_Combat_NPCMelee_C*>(UAIA_Creature_Combat_NPCMelee_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIA_Creature_Combat_NPCMelee.AIA_Creature_Combat_NPCMelee_C.CheckOwnerRequirements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckOwnerRequirements_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_Combat_NPCMelee_C::CheckOwnerRequirements(const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_CheckOwnerRequirements_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_NPCMelee_C", "CheckOwnerRequirements");

	Params::UAIA_Creature_Combat_NPCMelee_C_CheckOwnerRequirements_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_CheckOwnerRequirements_ReturnValue = CallFunc_CheckOwnerRequirements_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_Combat_NPCMelee.AIA_Creature_Combat_NPCMelee_C.Stop
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAIA_Creature_Combat_NPCMelee_C::Stop(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_NPCMelee_C", "Stop");

	Params::UAIA_Creature_Combat_NPCMelee_C_Stop_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIA_Creature_Combat_NPCMelee.AIA_Creature_Combat_NPCMelee_C.ExecuteUbergraph_AIA_Creature_Combat_NPCMelee
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Target                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAIA_Creature_Combat_NPCMelee_C::ExecuteUbergraph_AIA_Creature_Combat_NPCMelee(int32 EntryPoint, class AActor* K2Node_Event_Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_NPCMelee_C", "ExecuteUbergraph_AIA_Creature_Combat_NPCMelee");

	Params::UAIA_Creature_Combat_NPCMelee_C_ExecuteUbergraph_AIA_Creature_Combat_NPCMelee_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Target = K2Node_Event_Target;

	UObject::ProcessEvent(Func, &Parms);

}

}


