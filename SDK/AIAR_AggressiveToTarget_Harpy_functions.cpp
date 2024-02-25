#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAR_AggressiveToTarget_Harpy.AIAR_AggressiveToTarget_Harpy_C
// (None)

class UClass* UAIAR_AggressiveToTarget_Harpy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAR_AggressiveToTarget_Harpy_C");

	return Clss;
}


// AIAR_AggressiveToTarget_Harpy_C AIAR_AggressiveToTarget_Harpy.Default__AIAR_AggressiveToTarget_Harpy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAR_AggressiveToTarget_Harpy_C* UAIAR_AggressiveToTarget_Harpy_C::GetDefaultObj()
{
	static class UAIAR_AggressiveToTarget_Harpy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAR_AggressiveToTarget_Harpy_C*>(UAIAR_AggressiveToTarget_Harpy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAR_AggressiveToTarget_Harpy.AIAR_AggressiveToTarget_Harpy_C.IsHostileTowardsTarget
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      TargetActor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      InCreature                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHostileTowardsTarget_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXAICharacter*             CallFunc_GetCreature_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_DynamicCast_AsBP_Creature_Base                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIAR_AggressiveToTarget_Harpy_C::IsHostileTowardsTarget(class AActor* TargetActor, class AActor* InCreature, const struct FGameplayTag& Temp_struct_Variable, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_IsHostileTowardsTarget_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ANWXAICharacter* CallFunc_GetCreature_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAR_AggressiveToTarget_Harpy_C", "IsHostileTowardsTarget");

	Params::UAIAR_AggressiveToTarget_Harpy_C_IsHostileTowardsTarget_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.InCreature = InCreature;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_IsHostileTowardsTarget_ReturnValue = CallFunc_IsHostileTowardsTarget_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCreature_ReturnValue = CallFunc_GetCreature_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_Base = K2Node_DynamicCast_AsBP_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


