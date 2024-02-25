#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureTraitAuraEffect_EstateTelemetry.BP_StructureTraitAuraEffect_EstateTelemetry_C
// (None)

class UClass* UBP_StructureTraitAuraEffect_EstateTelemetry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureTraitAuraEffect_EstateTelemetry_C");

	return Clss;
}


// BP_StructureTraitAuraEffect_EstateTelemetry_C BP_StructureTraitAuraEffect_EstateTelemetry.Default__BP_StructureTraitAuraEffect_EstateTelemetry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructureTraitAuraEffect_EstateTelemetry_C* UBP_StructureTraitAuraEffect_EstateTelemetry_C::GetDefaultObj()
{
	static class UBP_StructureTraitAuraEffect_EstateTelemetry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructureTraitAuraEffect_EstateTelemetry_C*>(UBP_StructureTraitAuraEffect_EstateTelemetry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StructureTraitAuraEffect_EstateTelemetry.BP_StructureTraitAuraEffect_EstateTelemetry_C.OnObjectLeaveAura
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureTraitAuraComponent*LastAuraComponentEncountered                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitAuraEffect_EstateTelemetry_C::OnObjectLeaveAura(class UObject* Object, class UStructureTraitAuraComponent* LastAuraComponentEncountered, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitAuraEffect_EstateTelemetry_C", "OnObjectLeaveAura");

	Params::UBP_StructureTraitAuraEffect_EstateTelemetry_C_OnObjectLeaveAura_Params Parms{};

	Parms.Object = Object;
	Parms.LastAuraComponentEncountered = LastAuraComponentEncountered;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitAuraEffect_EstateTelemetry.BP_StructureTraitAuraEffect_EstateTelemetry_C.OnObjectEnterAura
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureTraitAuraComponent*AuraComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitAuraEffect_EstateTelemetry_C::OnObjectEnterAura(class UObject* Object, class UStructureTraitAuraComponent* AuraComponent, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitAuraEffect_EstateTelemetry_C", "OnObjectEnterAura");

	Params::UBP_StructureTraitAuraEffect_EstateTelemetry_C_OnObjectEnterAura_Params Parms{};

	Parms.Object = Object;
	Parms.AuraComponent = AuraComponent;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


