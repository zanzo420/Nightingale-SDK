#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_NPCVillager_HammerRepair.AIA_NPCVillager_HammerRepair_C
// (None)

class UClass* UAIA_NPCVillager_HammerRepair_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_NPCVillager_HammerRepair_C");

	return Clss;
}


// AIA_NPCVillager_HammerRepair_C AIA_NPCVillager_HammerRepair.Default__AIA_NPCVillager_HammerRepair_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_NPCVillager_HammerRepair_C* UAIA_NPCVillager_HammerRepair_C::GetDefaultObj()
{
	static class UAIA_NPCVillager_HammerRepair_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_NPCVillager_HammerRepair_C*>(UAIA_NPCVillager_HammerRepair_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIA_NPCVillager_HammerRepair.AIA_NPCVillager_HammerRepair_C.GetNormalizedScore
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetNormalizedDistanceScore_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetNormalizedDistanceScore_MaxDistance_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAIA_NPCVillager_HammerRepair_C::GetNormalizedScore(class AActor* Target, double CallFunc_GetNormalizedDistanceScore_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_GetNormalizedDistanceScore_MaxDistance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_NPCVillager_HammerRepair_C", "GetNormalizedScore");

	Params::UAIA_NPCVillager_HammerRepair_C_GetNormalizedScore_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_GetNormalizedDistanceScore_ReturnValue = CallFunc_GetNormalizedDistanceScore_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;
	Parms.CallFunc_GetNormalizedDistanceScore_MaxDistance_ImplicitCast = CallFunc_GetNormalizedDistanceScore_MaxDistance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_NPCVillager_HammerRepair.AIA_NPCVillager_HammerRepair_C.CheckTargetRequirements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               LStructure                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckTargetRequirements_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAIStructureTargetProvider>CallFunc_GetClosestDamagedTargetData_self_CastInput              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIStructureTargetData      CallFunc_GetClosestDamagedTargetData_OutTargetData               (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_GetClosestDamagedTargetData_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureHealthInterface>CallFunc_GetMaxHealth_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureHealthInterface>CallFunc_GetCurrentHealth_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentHealth_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>CallFunc_GetSchematicState_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               K2Node_DynamicCast_AsNWXStructure                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCompanionSearchParameters_SearchLocation             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCompanionSearchParameters_SearchRadius               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_NPCVillager_HammerRepair_C::CheckTargetRequirements(class AActor* Target, class ANWXStructure* LStructure, bool CallFunc_CheckTargetRequirements_ReturnValue, TScriptInterface<class IAIStructureTargetProvider> CallFunc_GetClosestDamagedTargetData_self_CastInput, const struct FAIStructureTargetData& CallFunc_GetClosestDamagedTargetData_OutTargetData, bool CallFunc_GetClosestDamagedTargetData_ReturnValue, TScriptInterface<class IStructureHealthInterface> CallFunc_GetMaxHealth_self_CastInput, float CallFunc_GetMaxHealth_ReturnValue, TScriptInterface<class IStructureHealthInterface> CallFunc_GetCurrentHealth_self_CastInput, float CallFunc_GetCurrentHealth_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, TScriptInterface<class IStructureStateInterface> CallFunc_GetSchematicState_self_CastInput, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ANWXStructure* K2Node_DynamicCast_AsNWXStructure, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetCompanionSearchParameters_SearchLocation, float CallFunc_GetCompanionSearchParameters_SearchRadius, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_NPCVillager_HammerRepair_C", "CheckTargetRequirements");

	Params::UAIA_NPCVillager_HammerRepair_C_CheckTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.LStructure = LStructure;
	Parms.CallFunc_CheckTargetRequirements_ReturnValue = CallFunc_CheckTargetRequirements_ReturnValue;
	Parms.CallFunc_GetClosestDamagedTargetData_self_CastInput = CallFunc_GetClosestDamagedTargetData_self_CastInput;
	Parms.CallFunc_GetClosestDamagedTargetData_OutTargetData = CallFunc_GetClosestDamagedTargetData_OutTargetData;
	Parms.CallFunc_GetClosestDamagedTargetData_ReturnValue = CallFunc_GetClosestDamagedTargetData_ReturnValue;
	Parms.CallFunc_GetMaxHealth_self_CastInput = CallFunc_GetMaxHealth_self_CastInput;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_GetCurrentHealth_self_CastInput = CallFunc_GetCurrentHealth_self_CastInput;
	Parms.CallFunc_GetCurrentHealth_ReturnValue = CallFunc_GetCurrentHealth_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetSchematicState_self_CastInput = CallFunc_GetSchematicState_self_CastInput;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXStructure = K2Node_DynamicCast_AsNWXStructure;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCompanionSearchParameters_SearchLocation = CallFunc_GetCompanionSearchParameters_SearchLocation;
	Parms.CallFunc_GetCompanionSearchParameters_SearchRadius = CallFunc_GetCompanionSearchParameters_SearchRadius;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_B_ImplicitCast = CallFunc_Less_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_B_ImplicitCast_1 = CallFunc_Less_DoubleDouble_B_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_NPCVillager_HammerRepair.AIA_NPCVillager_HammerRepair_C.CheckStaticTargetRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckStaticTargetRequirements_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnyKindOfStructureObject_IsValidStructure             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_NPCVillager_HammerRepair_C::CheckStaticTargetRequirements(class AActor* Target, bool CallFunc_CheckStaticTargetRequirements_ReturnValue, bool CallFunc_IsAnyKindOfStructureObject_IsValidStructure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_NPCVillager_HammerRepair_C", "CheckStaticTargetRequirements");

	Params::UAIA_NPCVillager_HammerRepair_C_CheckStaticTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_CheckStaticTargetRequirements_ReturnValue = CallFunc_CheckStaticTargetRequirements_ReturnValue;
	Parms.CallFunc_IsAnyKindOfStructureObject_IsValidStructure = CallFunc_IsAnyKindOfStructureObject_IsValidStructure;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


