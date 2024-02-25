#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SnapRulesEnforcer_Decoration.BP_SnapRulesEnforcer_Decoration_C
// (None)

class UClass* UBP_SnapRulesEnforcer_Decoration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SnapRulesEnforcer_Decoration_C");

	return Clss;
}


// BP_SnapRulesEnforcer_Decoration_C BP_SnapRulesEnforcer_Decoration.Default__BP_SnapRulesEnforcer_Decoration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SnapRulesEnforcer_Decoration_C* UBP_SnapRulesEnforcer_Decoration_C::GetDefaultObj()
{
	static class UBP_SnapRulesEnforcer_Decoration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SnapRulesEnforcer_Decoration_C*>(UBP_SnapRulesEnforcer_Decoration_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SnapRulesEnforcer_Decoration.BP_SnapRulesEnforcer_Decoration_C.GetAcceptableQuadrants
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGridPoint                  TargetPoint                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// TSet<enum class ESnapPointQuadrant>AcceptableQuadrants                                              (Parm, OutParm)
// TSet<enum class ESnapPointQuadrant>CallFunc_GetAcceptableQuadrants_AcceptableQuadrants              (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<enum class ESnapPointQuadrant>K2Node_MakeSet_Set                                               (None)

void UBP_SnapRulesEnforcer_Decoration_C::GetAcceptableQuadrants(const struct FGridPoint& TargetPoint, TSet<enum class ESnapPointQuadrant>* AcceptableQuadrants, TSet<enum class ESnapPointQuadrant> CallFunc_GetAcceptableQuadrants_AcceptableQuadrants, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TSet<enum class ESnapPointQuadrant> K2Node_MakeSet_Set)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_Decoration_C", "GetAcceptableQuadrants");

	Params::UBP_SnapRulesEnforcer_Decoration_C_GetAcceptableQuadrants_Params Parms{};

	Parms.TargetPoint = TargetPoint;
	Parms.CallFunc_GetAcceptableQuadrants_AcceptableQuadrants = CallFunc_GetAcceptableQuadrants_AcceptableQuadrants;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_MakeSet_Set = K2Node_MakeSet_Set;

	UObject::ProcessEvent(Func, &Parms);

	if (AcceptableQuadrants != nullptr)
		*AcceptableQuadrants = Parms.AcceptableQuadrants;

}

}


