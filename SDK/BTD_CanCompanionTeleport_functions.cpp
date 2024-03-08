#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTD_CanCompanionTeleport.BTD_CanCompanionTeleport_C
// (None)

class UClass* UBTD_CanCompanionTeleport_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTD_CanCompanionTeleport_C");

	return Clss;
}


// BTD_CanCompanionTeleport_C BTD_CanCompanionTeleport.Default__BTD_CanCompanionTeleport_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTD_CanCompanionTeleport_C* UBTD_CanCompanionTeleport_C::GetDefaultObj()
{
	static class UBTD_CanCompanionTeleport_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTD_CanCompanionTeleport_C*>(UBTD_CanCompanionTeleport_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTD_CanCompanionTeleport.BTD_CanCompanionTeleport_C.PerformConditionCheckAI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAICompanionComponent*       LCompanionComponent                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanCompanionTeleport_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAICompanionComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBTD_CanCompanionTeleport_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class UAICompanionComponent* LCompanionComponent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanCompanionTeleport_ReturnValue, class UAICompanionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTD_CanCompanionTeleport_C", "PerformConditionCheckAI");

	Params::UBTD_CanCompanionTeleport_C_PerformConditionCheckAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.LCompanionComponent = LCompanionComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CanCompanionTeleport_ReturnValue = CallFunc_CanCompanionTeleport_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


