#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_NPCEmployed_FollowPlayer_Light.AIA_Creature_NPCEmployed_FollowPlayer_Light_C
// (None)

class UClass* UAIA_Creature_NPCEmployed_FollowPlayer_Light_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_NPCEmployed_FollowPlayer_Light_C");

	return Clss;
}


// AIA_Creature_NPCEmployed_FollowPlayer_Light_C AIA_Creature_NPCEmployed_FollowPlayer_Light.Default__AIA_Creature_NPCEmployed_FollowPlayer_Light_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_NPCEmployed_FollowPlayer_Light_C* UAIA_Creature_NPCEmployed_FollowPlayer_Light_C::GetDefaultObj()
{
	static class UAIA_Creature_NPCEmployed_FollowPlayer_Light_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_NPCEmployed_FollowPlayer_Light_C*>(UAIA_Creature_NPCEmployed_FollowPlayer_Light_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIA_Creature_NPCEmployed_FollowPlayer_Light.AIA_Creature_NPCEmployed_FollowPlayer_Light_C.CheckOwnerRequirements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckOwnerRequirements_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_NPCEmployed_FollowPlayer_Light_C::CheckOwnerRequirements(const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_CheckOwnerRequirements_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_NPCEmployed_FollowPlayer_Light_C", "CheckOwnerRequirements");

	Params::UAIA_Creature_NPCEmployed_FollowPlayer_Light_C_CheckOwnerRequirements_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_CheckOwnerRequirements_ReturnValue = CallFunc_CheckOwnerRequirements_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_NPCEmployed_FollowPlayer_Light.AIA_Creature_NPCEmployed_FollowPlayer_Light_C.CheckTargetRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckTargetRequirements_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTargetReachableOnNavMesh_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_NPCEmployed_FollowPlayer_Light_C::CheckTargetRequirements(class AActor* Target, bool CallFunc_CheckTargetRequirements_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsTargetReachableOnNavMesh_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_NPCEmployed_FollowPlayer_Light_C", "CheckTargetRequirements");

	Params::UAIA_Creature_NPCEmployed_FollowPlayer_Light_C_CheckTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_CheckTargetRequirements_ReturnValue = CallFunc_CheckTargetRequirements_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsTargetReachableOnNavMesh_ReturnValue = CallFunc_IsTargetReachableOnNavMesh_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_B_ImplicitCast = CallFunc_Less_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_NPCEmployed_FollowPlayer_Light.AIA_Creature_NPCEmployed_FollowPlayer_Light_C.GetNormalizedScore
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAIA_Creature_NPCEmployed_FollowPlayer_Light_C::GetNormalizedScore(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_NPCEmployed_FollowPlayer_Light_C", "GetNormalizedScore");

	Params::UAIA_Creature_NPCEmployed_FollowPlayer_Light_C_GetNormalizedScore_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_NPCEmployed_FollowPlayer_Light.AIA_Creature_NPCEmployed_FollowPlayer_Light_C.CheckStaticTargetRequirements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_NPCEmployed_FollowPlayer_Light_C::CheckStaticTargetRequirements(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_NPCEmployed_FollowPlayer_Light_C", "CheckStaticTargetRequirements");

	Params::UAIA_Creature_NPCEmployed_FollowPlayer_Light_C_CheckStaticTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


