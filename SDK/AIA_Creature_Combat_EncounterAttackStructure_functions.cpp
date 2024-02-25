#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_Combat_EncounterAttackStructure.AIA_Creature_Combat_EncounterAttackStructure_C
// (None)

class UClass* UAIA_Creature_Combat_EncounterAttackStructure_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_Combat_EncounterAttackStructure_C");

	return Clss;
}


// AIA_Creature_Combat_EncounterAttackStructure_C AIA_Creature_Combat_EncounterAttackStructure.Default__AIA_Creature_Combat_EncounterAttackStructure_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_Combat_EncounterAttackStructure_C* UAIA_Creature_Combat_EncounterAttackStructure_C::GetDefaultObj()
{
	static class UAIA_Creature_Combat_EncounterAttackStructure_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_Combat_EncounterAttackStructure_C*>(UAIA_Creature_Combat_EncounterAttackStructure_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIA_Creature_Combat_EncounterAttackStructure.AIA_Creature_Combat_EncounterAttackStructure_C.GetTicketPriority
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTicketPriority_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UAIA_Creature_Combat_EncounterAttackStructure_C::GetTicketPriority(class AActor* Target, int32 CallFunc_GetTicketPriority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_EncounterAttackStructure_C", "GetTicketPriority");

	Params::UAIA_Creature_Combat_EncounterAttackStructure_C_GetTicketPriority_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_GetTicketPriority_ReturnValue = CallFunc_GetTicketPriority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_Combat_EncounterAttackStructure.AIA_Creature_Combat_EncounterAttackStructure_C.CheckTargetRequirements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LTarget                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StructureAIInterfaces_C>K2Node_DynamicCast_AsBPI_Structure_AIInterfaces                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>K2Node_DynamicCast_AsStructure_State_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStructureComplete_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetReachableNavTransform_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetReachableNavTransform_ReachableNavTransform          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetReachableNavTransform_Structure                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_Combat_EncounterAttackStructure_C::CheckTargetRequirements(class AActor* Target, class AActor* LTarget, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, TScriptInterface<class IBPI_StructureAIInterfaces_C> K2Node_DynamicCast_AsBPI_Structure_AIInterfaces, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetIsStructureComplete_ReturnValue, bool CallFunc_GetReachableNavTransform_Success, const struct FTransform& CallFunc_GetReachableNavTransform_ReachableNavTransform, class UObject* CallFunc_GetReachableNavTransform_Structure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_EncounterAttackStructure_C", "CheckTargetRequirements");

	Params::UAIA_Creature_Combat_EncounterAttackStructure_C_CheckTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.LTarget = LTarget;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_DynamicCast_AsBPI_Structure_AIInterfaces = K2Node_DynamicCast_AsBPI_Structure_AIInterfaces;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_State_Interface = K2Node_DynamicCast_AsStructure_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetIsStructureComplete_ReturnValue = CallFunc_GetIsStructureComplete_ReturnValue;
	Parms.CallFunc_GetReachableNavTransform_Success = CallFunc_GetReachableNavTransform_Success;
	Parms.CallFunc_GetReachableNavTransform_ReachableNavTransform = CallFunc_GetReachableNavTransform_ReachableNavTransform;
	Parms.CallFunc_GetReachableNavTransform_Structure = CallFunc_GetReachableNavTransform_Structure;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_Combat_EncounterAttackStructure.AIA_Creature_Combat_EncounterAttackStructure_C.GetNormalizedScore
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNormalizedScore_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APawn*>               CallFunc_GetPlayersInRange_Players                               (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_Value_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAIA_Creature_Combat_EncounterAttackStructure_C::GetNormalizedScore(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, float CallFunc_GetNormalizedScore_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class APawn*>& CallFunc_GetPlayersInRange_Players, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_FClamp_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_EncounterAttackStructure_C", "GetNormalizedScore");

	Params::UAIA_Creature_Combat_EncounterAttackStructure_C_GetNormalizedScore_Params Parms{};

	Parms.Target = Target;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetNormalizedScore_ReturnValue = CallFunc_GetNormalizedScore_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetPlayersInRange_Players = CallFunc_GetPlayersInRange_Players;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;
	Parms.CallFunc_FClamp_Value_ImplicitCast = CallFunc_FClamp_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_Combat_EncounterAttackStructure.AIA_Creature_Combat_EncounterAttackStructure_C.CheckStaticTargetRequirements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsValidEnemyStructure_IsValidEnemyStructure          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckStaticTargetRequirements_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_3                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_Combat_EncounterAttackStructure_C::CheckStaticTargetRequirements(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_GetIsValidEnemyStructure_IsValidEnemyStructure, bool CallFunc_CheckStaticTargetRequirements_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue_2, const struct FGameplayTag& Temp_struct_Variable_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_EncounterAttackStructure_C", "CheckStaticTargetRequirements");

	Params::UAIA_Creature_Combat_EncounterAttackStructure_C_CheckStaticTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetIsValidEnemyStructure_IsValidEnemyStructure = CallFunc_GetIsValidEnemyStructure_IsValidEnemyStructure;
	Parms.CallFunc_CheckStaticTargetRequirements_ReturnValue = CallFunc_CheckStaticTargetRequirements_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.CallFunc_ActorHasTag_ReturnValue_2 = CallFunc_ActorHasTag_ReturnValue_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_3 = CallFunc_ActorHasTag_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


