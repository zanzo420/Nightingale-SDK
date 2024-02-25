#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EQC_DeploymentPortal.EQC_DeploymentPortal_C
// (None)

class UClass* UEQC_DeploymentPortal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EQC_DeploymentPortal_C");

	return Clss;
}


// EQC_DeploymentPortal_C EQC_DeploymentPortal.Default__EQC_DeploymentPortal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEQC_DeploymentPortal_C* UEQC_DeploymentPortal_C::GetDefaultObj()
{
	static class UEQC_DeploymentPortal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEQC_DeploymentPortal_C*>(UEQC_DeploymentPortal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EQC_DeploymentPortal.EQC_DeploymentPortal_C.ProvideSingleActor
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      QuerierActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ResultingActor                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_DeploymentPortal_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FindNearestActor_Distance                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FindNearestActor_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UEQC_DeploymentPortal_C::ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor, TArray<class ABP_DeploymentPortal_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_FindNearestActor_Distance, class AActor* CallFunc_FindNearestActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EQC_DeploymentPortal_C", "ProvideSingleActor");

	Params::UEQC_DeploymentPortal_C_ProvideSingleActor_Params Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_FindNearestActor_Distance = CallFunc_FindNearestActor_Distance;
	Parms.CallFunc_FindNearestActor_ReturnValue = CallFunc_FindNearestActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingActor != nullptr)
		*ResultingActor = Parms.ResultingActor;

}

}


