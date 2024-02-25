#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_NPC_HarvestChaosStones.AIA_Creature_NPC_HarvestChaosStones_C
// (None)

class UClass* UAIA_Creature_NPC_HarvestChaosStones_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_NPC_HarvestChaosStones_C");

	return Clss;
}


// AIA_Creature_NPC_HarvestChaosStones_C AIA_Creature_NPC_HarvestChaosStones.Default__AIA_Creature_NPC_HarvestChaosStones_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_NPC_HarvestChaosStones_C* UAIA_Creature_NPC_HarvestChaosStones_C::GetDefaultObj()
{
	static class UAIA_Creature_NPC_HarvestChaosStones_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_NPC_HarvestChaosStones_C*>(UAIA_Creature_NPC_HarvestChaosStones_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIA_Creature_NPC_HarvestChaosStones.AIA_Creature_NPC_HarvestChaosStones_C.GetNormalizedRunPriority
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNormalizedScore_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAIA_Creature_NPC_HarvestChaosStones_C::GetNormalizedRunPriority(class AActor* Target, float CallFunc_GetNormalizedScore_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_NPC_HarvestChaosStones_C", "GetNormalizedRunPriority");

	Params::UAIA_Creature_NPC_HarvestChaosStones_C_GetNormalizedRunPriority_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_GetNormalizedScore_ReturnValue = CallFunc_GetNormalizedScore_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_NPC_HarvestChaosStones.AIA_Creature_NPC_HarvestChaosStones_C.CheckTargetRequirements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXHarvestableGeometryCollection*LHarvestableGeom                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckTargetRequirements_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IDamageVulnerabilityInterface>CallFunc_IsVulnerableToPowerLevel_self_CastInput                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPowerLevel                 CallFunc_IsVulnerableToPowerLevel_OutPowerLevelDifference        (NoDestructor)
// bool                               CallFunc_IsVulnerableToPowerLevel_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXHarvestableGeometryCollection*K2Node_DynamicCast_AsNWXHarvestable_Geometry_Collection          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCompanionSearchParameters_SearchLocation             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCompanionSearchParameters_SearchRadius               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_B_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_NPC_HarvestChaosStones_C::CheckTargetRequirements(class AActor* Target, class ANWXHarvestableGeometryCollection* LHarvestableGeom, bool CallFunc_CheckTargetRequirements_ReturnValue, TScriptInterface<class IDamageVulnerabilityInterface> CallFunc_IsVulnerableToPowerLevel_self_CastInput, const struct FPowerLevel& CallFunc_IsVulnerableToPowerLevel_OutPowerLevelDifference, bool CallFunc_IsVulnerableToPowerLevel_ReturnValue, class ANWXHarvestableGeometryCollection* K2Node_DynamicCast_AsNWXHarvestable_Geometry_Collection, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetCompanionSearchParameters_SearchLocation, float CallFunc_GetCompanionSearchParameters_SearchRadius, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_NPC_HarvestChaosStones_C", "CheckTargetRequirements");

	Params::UAIA_Creature_NPC_HarvestChaosStones_C_CheckTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.LHarvestableGeom = LHarvestableGeom;
	Parms.CallFunc_CheckTargetRequirements_ReturnValue = CallFunc_CheckTargetRequirements_ReturnValue;
	Parms.CallFunc_IsVulnerableToPowerLevel_self_CastInput = CallFunc_IsVulnerableToPowerLevel_self_CastInput;
	Parms.CallFunc_IsVulnerableToPowerLevel_OutPowerLevelDifference = CallFunc_IsVulnerableToPowerLevel_OutPowerLevelDifference;
	Parms.CallFunc_IsVulnerableToPowerLevel_ReturnValue = CallFunc_IsVulnerableToPowerLevel_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXHarvestable_Geometry_Collection = K2Node_DynamicCast_AsNWXHarvestable_Geometry_Collection;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetCompanionSearchParameters_SearchLocation = CallFunc_GetCompanionSearchParameters_SearchLocation;
	Parms.CallFunc_GetCompanionSearchParameters_SearchRadius = CallFunc_GetCompanionSearchParameters_SearchRadius;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_B_ImplicitCast = CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_NPC_HarvestChaosStones.AIA_Creature_NPC_HarvestChaosStones_C.GetNormalizedScore
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetNormalizedDistanceScore_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetNormalizedDistanceScore_MaxDistance_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAIA_Creature_NPC_HarvestChaosStones_C::GetNormalizedScore(class AActor* Target, double CallFunc_GetNormalizedDistanceScore_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_GetNormalizedDistanceScore_MaxDistance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_NPC_HarvestChaosStones_C", "GetNormalizedScore");

	Params::UAIA_Creature_NPC_HarvestChaosStones_C_GetNormalizedScore_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_GetNormalizedDistanceScore_ReturnValue = CallFunc_GetNormalizedDistanceScore_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;
	Parms.CallFunc_GetNormalizedDistanceScore_MaxDistance_ImplicitCast = CallFunc_GetNormalizedDistanceScore_MaxDistance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_NPC_HarvestChaosStones.AIA_Creature_NPC_HarvestChaosStones_C.CheckStaticTargetRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckStaticTargetRequirements_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXHarvestableGeometryCollection*K2Node_DynamicCast_AsNWXHarvestable_Geometry_Collection          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_NPC_HarvestChaosStones_C::CheckStaticTargetRequirements(class AActor* Target, bool CallFunc_CheckStaticTargetRequirements_ReturnValue, class ANWXHarvestableGeometryCollection* K2Node_DynamicCast_AsNWXHarvestable_Geometry_Collection, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_NPC_HarvestChaosStones_C", "CheckStaticTargetRequirements");

	Params::UAIA_Creature_NPC_HarvestChaosStones_C_CheckStaticTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_CheckStaticTargetRequirements_ReturnValue = CallFunc_CheckStaticTargetRequirements_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXHarvestable_Geometry_Collection = K2Node_DynamicCast_AsNWXHarvestable_Geometry_Collection;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


