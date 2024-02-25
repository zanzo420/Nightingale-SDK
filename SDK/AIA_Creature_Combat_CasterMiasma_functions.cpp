#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_Combat_CasterMiasma.AIA_Creature_Combat_CasterMiasma_C
// (None)

class UClass* UAIA_Creature_Combat_CasterMiasma_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_Combat_CasterMiasma_C");

	return Clss;
}


// AIA_Creature_Combat_CasterMiasma_C AIA_Creature_Combat_CasterMiasma.Default__AIA_Creature_Combat_CasterMiasma_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_Combat_CasterMiasma_C* UAIA_Creature_Combat_CasterMiasma_C::GetDefaultObj()
{
	static class UAIA_Creature_Combat_CasterMiasma_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_Combat_CasterMiasma_C*>(UAIA_Creature_Combat_CasterMiasma_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIA_Creature_Combat_CasterMiasma.AIA_Creature_Combat_CasterMiasma_C.GetTicketPriority
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTicketPriority_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UAIA_Creature_Combat_CasterMiasma_C::GetTicketPriority(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, int32 CallFunc_GetTicketPriority_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_CasterMiasma_C", "GetTicketPriority");

	Params::UAIA_Creature_Combat_CasterMiasma_C_GetTicketPriority_Params Parms{};

	Parms.Target = Target;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetTicketPriority_ReturnValue = CallFunc_GetTicketPriority_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_Combat_CasterMiasma.AIA_Creature_Combat_CasterMiasma_C.GetNormalizedScore
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAIA_Creature_Combat_CasterMiasma_C::GetNormalizedScore(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_CasterMiasma_C", "GetNormalizedScore");

	Params::UAIA_Creature_Combat_CasterMiasma_C_GetNormalizedScore_Params Parms{};

	Parms.Target = Target;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_Combat_CasterMiasma.AIA_Creature_Combat_CasterMiasma_C.CheckOwnerRequirements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPlayerInRange_PlayerInRange                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetPlayerInRange_PlayerActor                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetPlayerInRange_Distance                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckOwnerRequirements_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_Combat_CasterMiasma_C::CheckOwnerRequirements(const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_GetPlayerInRange_PlayerInRange, class AActor* CallFunc_GetPlayerInRange_PlayerActor, double CallFunc_GetPlayerInRange_Distance, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CheckOwnerRequirements_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_CasterMiasma_C", "CheckOwnerRequirements");

	Params::UAIA_Creature_Combat_CasterMiasma_C_CheckOwnerRequirements_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_GetPlayerInRange_PlayerInRange = CallFunc_GetPlayerInRange_PlayerInRange;
	Parms.CallFunc_GetPlayerInRange_PlayerActor = CallFunc_GetPlayerInRange_PlayerActor;
	Parms.CallFunc_GetPlayerInRange_Distance = CallFunc_GetPlayerInRange_Distance;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_CheckOwnerRequirements_ReturnValue = CallFunc_CheckOwnerRequirements_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_Combat_CasterMiasma.AIA_Creature_Combat_CasterMiasma_C.CheckTargetRequirements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckTargetRequirements_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>K2Node_DynamicCast_AsStructure_State_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStructureComplete_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_Combat_CasterMiasma_C::CheckTargetRequirements(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_CheckTargetRequirements_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsStructureComplete_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_CasterMiasma_C", "CheckTargetRequirements");

	Params::UAIA_Creature_Combat_CasterMiasma_C_CheckTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_CheckTargetRequirements_ReturnValue = CallFunc_CheckTargetRequirements_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_State_Interface = K2Node_DynamicCast_AsStructure_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIsStructureComplete_ReturnValue = CallFunc_GetIsStructureComplete_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_Combat_CasterMiasma.AIA_Creature_Combat_CasterMiasma_C.CheckStaticTargetRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckStaticTargetRequirements_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_Combat_CasterMiasma_C::CheckStaticTargetRequirements(class AActor* Target, bool CallFunc_CheckStaticTargetRequirements_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_CasterMiasma_C", "CheckStaticTargetRequirements");

	Params::UAIA_Creature_Combat_CasterMiasma_C_CheckStaticTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_CheckStaticTargetRequirements_ReturnValue = CallFunc_CheckStaticTargetRequirements_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_Combat_CasterMiasma.AIA_Creature_Combat_CasterMiasma_C.Stop
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAIA_Creature_Combat_CasterMiasma_C::Stop(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_CasterMiasma_C", "Stop");

	Params::UAIA_Creature_Combat_CasterMiasma_C_Stop_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIA_Creature_Combat_CasterMiasma.AIA_Creature_Combat_CasterMiasma_C.ExecuteUbergraph_AIA_Creature_Combat_CasterMiasma
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Target                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAIA_Creature_Combat_CasterMiasma_C::ExecuteUbergraph_AIA_Creature_Combat_CasterMiasma(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, class AActor* K2Node_Event_Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_CasterMiasma_C", "ExecuteUbergraph_AIA_Creature_Combat_CasterMiasma");

	Params::UAIA_Creature_Combat_CasterMiasma_C_ExecuteUbergraph_AIA_Creature_Combat_CasterMiasma_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Event_Target = K2Node_Event_Target;

	UObject::ProcessEvent(Func, &Parms);

}

}


