#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_Combat_NPCAttackObstacle.AIA_Creature_Combat_NPCAttackObstacle_C
// (None)

class UClass* UAIA_Creature_Combat_NPCAttackObstacle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_Combat_NPCAttackObstacle_C");

	return Clss;
}


// AIA_Creature_Combat_NPCAttackObstacle_C AIA_Creature_Combat_NPCAttackObstacle.Default__AIA_Creature_Combat_NPCAttackObstacle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_Combat_NPCAttackObstacle_C* UAIA_Creature_Combat_NPCAttackObstacle_C::GetDefaultObj()
{
	static class UAIA_Creature_Combat_NPCAttackObstacle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_Combat_NPCAttackObstacle_C*>(UAIA_Creature_Combat_NPCAttackObstacle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIA_Creature_Combat_NPCAttackObstacle.AIA_Creature_Combat_NPCAttackObstacle_C.CheckStaticTargetRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetParentClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_Combat_NPCAttackObstacle_C::CheckStaticTargetRequirements(class AActor* Target, class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* CallFunc_GetParentClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_NPCAttackObstacle_C", "CheckStaticTargetRequirements");

	Params::UAIA_Creature_Combat_NPCAttackObstacle_C_CheckStaticTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetParentClass_ReturnValue = CallFunc_GetParentClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_Combat_NPCAttackObstacle.AIA_Creature_Combat_NPCAttackObstacle_C.GetNormalizedScore
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAIA_Creature_Combat_NPCAttackObstacle_C::GetNormalizedScore(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_NPCAttackObstacle_C", "GetNormalizedScore");

	Params::UAIA_Creature_Combat_NPCAttackObstacle_C_GetNormalizedScore_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_Combat_NPCAttackObstacle.AIA_Creature_Combat_NPCAttackObstacle_C.CheckOwnerRequirements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckOwnerRequirements_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_Combat_NPCAttackObstacle_C::CheckOwnerRequirements(const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_CheckOwnerRequirements_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_NPCAttackObstacle_C", "CheckOwnerRequirements");

	Params::UAIA_Creature_Combat_NPCAttackObstacle_C_CheckOwnerRequirements_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_CheckOwnerRequirements_ReturnValue = CallFunc_CheckOwnerRequirements_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


