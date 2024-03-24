#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SnapRulesEnforcer_Awning.BP_SnapRulesEnforcer_Awning_C
// (None)

class UClass* UBP_SnapRulesEnforcer_Awning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SnapRulesEnforcer_Awning_C");

	return Clss;
}


// BP_SnapRulesEnforcer_Awning_C BP_SnapRulesEnforcer_Awning.Default__BP_SnapRulesEnforcer_Awning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SnapRulesEnforcer_Awning_C* UBP_SnapRulesEnforcer_Awning_C::GetDefaultObj()
{
	static class UBP_SnapRulesEnforcer_Awning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SnapRulesEnforcer_Awning_C*>(UBP_SnapRulesEnforcer_Awning_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SnapRulesEnforcer_Awning.BP_SnapRulesEnforcer_Awning_C.GetAcceptableQuadrants
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGridPoint                  TargetPoint                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// TSet<enum class ESnapPointQuadrant>AcceptableQuadrants                                              (Parm, OutParm)
// bool                               CallFunc_IsAwningSnapType_IsAwning                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<enum class ESnapPointQuadrant>CallFunc_GetAcceptableQuadrants_AcceptableQuadrants              (None)
// TSet<enum class ESnapPointQuadrant>K2Node_MakeSet_Set                                               (None)
// enum class ESnapPointQuadrant      CallFunc_GetMirrorQuadrant_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<enum class ESnapPointQuadrant>K2Node_MakeSet_Set_1                                             (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SnapRulesEnforcer_Awning_C::GetAcceptableQuadrants(const struct FGridPoint& TargetPoint, TSet<enum class ESnapPointQuadrant>* AcceptableQuadrants, bool CallFunc_IsAwningSnapType_IsAwning, TSet<enum class ESnapPointQuadrant> CallFunc_GetAcceptableQuadrants_AcceptableQuadrants, TSet<enum class ESnapPointQuadrant> K2Node_MakeSet_Set, enum class ESnapPointQuadrant CallFunc_GetMirrorQuadrant_ReturnValue, TSet<enum class ESnapPointQuadrant> K2Node_MakeSet_Set_1, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_Awning_C", "GetAcceptableQuadrants");

	Params::UBP_SnapRulesEnforcer_Awning_C_GetAcceptableQuadrants_Params Parms{};

	Parms.TargetPoint = TargetPoint;
	Parms.CallFunc_IsAwningSnapType_IsAwning = CallFunc_IsAwningSnapType_IsAwning;
	Parms.CallFunc_GetAcceptableQuadrants_AcceptableQuadrants = CallFunc_GetAcceptableQuadrants_AcceptableQuadrants;
	Parms.K2Node_MakeSet_Set = K2Node_MakeSet_Set;
	Parms.CallFunc_GetMirrorQuadrant_ReturnValue = CallFunc_GetMirrorQuadrant_ReturnValue;
	Parms.K2Node_MakeSet_Set_1 = K2Node_MakeSet_Set_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AcceptableQuadrants != nullptr)
		*AcceptableQuadrants = Parms.AcceptableQuadrants;

}

}


