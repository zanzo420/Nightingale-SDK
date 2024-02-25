#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureTraitAuraEffect_CalculateEstateScore.BP_StructureTraitAuraEffect_CalculateEstateScore_C
// (None)

class UClass* UBP_StructureTraitAuraEffect_CalculateEstateScore_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureTraitAuraEffect_CalculateEstateScore_C");

	return Clss;
}


// BP_StructureTraitAuraEffect_CalculateEstateScore_C BP_StructureTraitAuraEffect_CalculateEstateScore.Default__BP_StructureTraitAuraEffect_CalculateEstateScore_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructureTraitAuraEffect_CalculateEstateScore_C* UBP_StructureTraitAuraEffect_CalculateEstateScore_C::GetDefaultObj()
{
	static class UBP_StructureTraitAuraEffect_CalculateEstateScore_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructureTraitAuraEffect_CalculateEstateScore_C*>(UBP_StructureTraitAuraEffect_CalculateEstateScore_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StructureTraitAuraEffect_CalculateEstateScore.BP_StructureTraitAuraEffect_CalculateEstateScore_C.OnObjectLeaveAura
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureTraitAuraComponent*LastAuraComponentEncountered                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureEstateInterface>K2Node_DynamicCast_AsStructure_Estate_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureEstateComponent*   CallFunc_GetStructureEstateComponentForModify_ReturnValue        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitAuraEffect_CalculateEstateScore_C::OnObjectLeaveAura(class UObject* Object, class UStructureTraitAuraComponent* LastAuraComponentEncountered, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, TScriptInterface<class IStructureEstateInterface> K2Node_DynamicCast_AsStructure_Estate_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureEstateComponent* CallFunc_GetStructureEstateComponentForModify_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitAuraEffect_CalculateEstateScore_C", "OnObjectLeaveAura");

	Params::UBP_StructureTraitAuraEffect_CalculateEstateScore_C_OnObjectLeaveAura_Params Parms{};

	Parms.Object = Object;
	Parms.LastAuraComponentEncountered = LastAuraComponentEncountered;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Estate_Interface = K2Node_DynamicCast_AsStructure_Estate_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStructureEstateComponentForModify_ReturnValue = CallFunc_GetStructureEstateComponentForModify_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureTraitAuraEffect_CalculateEstateScore.BP_StructureTraitAuraEffect_CalculateEstateScore_C.OnObjectEnterAura
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureTraitAuraComponent*AuraComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureEstateInterface>K2Node_DynamicCast_AsStructure_Estate_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureEstateComponent*   CallFunc_GetStructureEstateComponentForModify_ReturnValue        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureTraitAuraEffect_CalculateEstateScore_C::OnObjectEnterAura(class UObject* Object, class UStructureTraitAuraComponent* AuraComponent, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, TScriptInterface<class IStructureEstateInterface> K2Node_DynamicCast_AsStructure_Estate_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureEstateComponent* CallFunc_GetStructureEstateComponentForModify_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureTraitAuraEffect_CalculateEstateScore_C", "OnObjectEnterAura");

	Params::UBP_StructureTraitAuraEffect_CalculateEstateScore_C_OnObjectEnterAura_Params Parms{};

	Parms.Object = Object;
	Parms.AuraComponent = AuraComponent;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Estate_Interface = K2Node_DynamicCast_AsStructure_Estate_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStructureEstateComponentForModify_ReturnValue = CallFunc_GetStructureEstateComponentForModify_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


