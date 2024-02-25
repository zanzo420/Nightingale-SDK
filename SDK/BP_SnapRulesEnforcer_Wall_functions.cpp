#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SnapRulesEnforcer_Wall.BP_SnapRulesEnforcer_Wall_C
// (None)

class UClass* UBP_SnapRulesEnforcer_Wall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SnapRulesEnforcer_Wall_C");

	return Clss;
}


// BP_SnapRulesEnforcer_Wall_C BP_SnapRulesEnforcer_Wall.Default__BP_SnapRulesEnforcer_Wall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SnapRulesEnforcer_Wall_C* UBP_SnapRulesEnforcer_Wall_C::GetDefaultObj()
{
	static class UBP_SnapRulesEnforcer_Wall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SnapRulesEnforcer_Wall_C*>(UBP_SnapRulesEnforcer_Wall_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SnapRulesEnforcer_Wall.BP_SnapRulesEnforcer_Wall_C.GetAcceptableQuadrants
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGridPoint                  TargetPoint                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// TSet<enum class ESnapPointQuadrant>AcceptableQuadrants                                              (Parm, OutParm)
// TSet<enum class ESnapPointQuadrant>K2Node_MakeSet_Set                                               (None)
// bool                               CallFunc_IsRoofFillerSnapType_IsRoofFiller                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRoofConvexSnapType_IsRoofConvex                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRoofFlatSnapType_IsRoofFlat                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRoofAngleSnapType_IsRoofAngle                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWallSnapType_IsWall                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFoundationSnapType_IsFoundation                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESnapPointQuadrant      CallFunc_GetMirrorQuadrant_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<enum class ESnapPointQuadrant>K2Node_MakeSet_Set_1                                             (None)
// TSet<enum class ESnapPointQuadrant>K2Node_MakeSet_Set_2                                             (None)
// TSet<enum class ESnapPointQuadrant>K2Node_MakeSet_Set_3                                             (None)
// TSet<enum class ESnapPointQuadrant>CallFunc_GetAcceptableQuadrants_AcceptableQuadrants              (None)
// enum class ESnapPointQuadrant      CallFunc_GetMirrorQuadrant_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<enum class ESnapPointQuadrant>K2Node_MakeSet_Set_4                                             (None)

void UBP_SnapRulesEnforcer_Wall_C::GetAcceptableQuadrants(const struct FGridPoint& TargetPoint, TSet<enum class ESnapPointQuadrant>* AcceptableQuadrants, TSet<enum class ESnapPointQuadrant> K2Node_MakeSet_Set, bool CallFunc_IsRoofFillerSnapType_IsRoofFiller, bool CallFunc_IsRoofConvexSnapType_IsRoofConvex, bool CallFunc_IsRoofFlatSnapType_IsRoofFlat, bool CallFunc_IsRoofAngleSnapType_IsRoofAngle, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsWallSnapType_IsWall, bool CallFunc_IsFoundationSnapType_IsFoundation, enum class ESnapPointQuadrant CallFunc_GetMirrorQuadrant_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TSet<enum class ESnapPointQuadrant> K2Node_MakeSet_Set_1, TSet<enum class ESnapPointQuadrant> K2Node_MakeSet_Set_2, TSet<enum class ESnapPointQuadrant> K2Node_MakeSet_Set_3, TSet<enum class ESnapPointQuadrant> CallFunc_GetAcceptableQuadrants_AcceptableQuadrants, enum class ESnapPointQuadrant CallFunc_GetMirrorQuadrant_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, TSet<enum class ESnapPointQuadrant> K2Node_MakeSet_Set_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnapRulesEnforcer_Wall_C", "GetAcceptableQuadrants");

	Params::UBP_SnapRulesEnforcer_Wall_C_GetAcceptableQuadrants_Params Parms{};

	Parms.TargetPoint = TargetPoint;
	Parms.K2Node_MakeSet_Set = K2Node_MakeSet_Set;
	Parms.CallFunc_IsRoofFillerSnapType_IsRoofFiller = CallFunc_IsRoofFillerSnapType_IsRoofFiller;
	Parms.CallFunc_IsRoofConvexSnapType_IsRoofConvex = CallFunc_IsRoofConvexSnapType_IsRoofConvex;
	Parms.CallFunc_IsRoofFlatSnapType_IsRoofFlat = CallFunc_IsRoofFlatSnapType_IsRoofFlat;
	Parms.CallFunc_IsRoofAngleSnapType_IsRoofAngle = CallFunc_IsRoofAngleSnapType_IsRoofAngle;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsWallSnapType_IsWall = CallFunc_IsWallSnapType_IsWall;
	Parms.CallFunc_IsFoundationSnapType_IsFoundation = CallFunc_IsFoundationSnapType_IsFoundation;
	Parms.CallFunc_GetMirrorQuadrant_ReturnValue = CallFunc_GetMirrorQuadrant_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeSet_Set_1 = K2Node_MakeSet_Set_1;
	Parms.K2Node_MakeSet_Set_2 = K2Node_MakeSet_Set_2;
	Parms.K2Node_MakeSet_Set_3 = K2Node_MakeSet_Set_3;
	Parms.CallFunc_GetAcceptableQuadrants_AcceptableQuadrants = CallFunc_GetAcceptableQuadrants_AcceptableQuadrants;
	Parms.CallFunc_GetMirrorQuadrant_ReturnValue_1 = CallFunc_GetMirrorQuadrant_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_MakeSet_Set_4 = K2Node_MakeSet_Set_4;

	UObject::ProcessEvent(Func, &Parms);

	if (AcceptableQuadrants != nullptr)
		*AcceptableQuadrants = Parms.AcceptableQuadrants;

}

}


