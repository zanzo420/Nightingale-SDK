#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_Combat_CasterMiasma_POITargets.AIA_Creature_Combat_CasterMiasma_POITargets_C
// (None)

class UClass* UAIA_Creature_Combat_CasterMiasma_POITargets_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_Combat_CasterMiasma_POITargets_C");

	return Clss;
}


// AIA_Creature_Combat_CasterMiasma_POITargets_C AIA_Creature_Combat_CasterMiasma_POITargets.Default__AIA_Creature_Combat_CasterMiasma_POITargets_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_Combat_CasterMiasma_POITargets_C* UAIA_Creature_Combat_CasterMiasma_POITargets_C::GetDefaultObj()
{
	static class UAIA_Creature_Combat_CasterMiasma_POITargets_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_Combat_CasterMiasma_POITargets_C*>(UAIA_Creature_Combat_CasterMiasma_POITargets_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIA_Creature_Combat_CasterMiasma_POITargets.AIA_Creature_Combat_CasterMiasma_POITargets_C.CheckOwnerRequirements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MinPlayerRange                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// class ANWXAISpawner*               CallFunc_GetSpawner_Spawner                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetClosestActorInArray_ClosestEnemyActor                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetClosestActorInArray_Distance                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_Combat_CasterMiasma_POITargets_C::CheckOwnerRequirements(double MinPlayerRange, const struct FGameplayTag& Temp_struct_Variable, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetClosestActorInArray_ClosestEnemyActor, double CallFunc_GetClosestActorInArray_Distance, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_CasterMiasma_POITargets_C", "CheckOwnerRequirements");

	Params::UAIA_Creature_Combat_CasterMiasma_POITargets_C_CheckOwnerRequirements_Params Parms{};

	Parms.MinPlayerRange = MinPlayerRange;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetSpawner_Spawner = CallFunc_GetSpawner_Spawner;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetClosestActorInArray_ClosestEnemyActor = CallFunc_GetClosestActorInArray_ClosestEnemyActor;
	Parms.CallFunc_GetClosestActorInArray_Distance = CallFunc_GetClosestActorInArray_Distance;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_Combat_CasterMiasma_POITargets.AIA_Creature_Combat_CasterMiasma_POITargets_C.CheckStaticTargetRequirements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_Combat_CasterMiasma_POITargets_C::CheckStaticTargetRequirements(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_CasterMiasma_POITargets_C", "CheckStaticTargetRequirements");

	Params::UAIA_Creature_Combat_CasterMiasma_POITargets_C_CheckStaticTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


