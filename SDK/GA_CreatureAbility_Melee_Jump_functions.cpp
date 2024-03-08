#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_Melee_Jump.GA_CreatureAbility_Melee_Jump_C
// (None)

class UClass* UGA_CreatureAbility_Melee_Jump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_Melee_Jump_C");

	return Clss;
}


// GA_CreatureAbility_Melee_Jump_C GA_CreatureAbility_Melee_Jump.Default__GA_CreatureAbility_Melee_Jump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_Melee_Jump_C* UGA_CreatureAbility_Melee_Jump_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_Melee_Jump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_Melee_Jump_C*>(UGA_CreatureAbility_Melee_Jump_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_Melee_Jump.GA_CreatureAbility_Melee_Jump_C.Jump Query Finished
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryStatus         QueryStatus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             CallFunc_GetQueryResultsAsLocations_ResultLocations              (ReferenceParm)
// bool                               CallFunc_GetQueryResultsAsLocations_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Targeter_C>CallFunc_GetTarget_self_CastInput                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTarget_Target                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Melee_Jump_C::Jump_Query_Finished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TScriptInterface<class IBPI_Targeter_C> CallFunc_GetTarget_self_CastInput, class AActor* CallFunc_GetTarget_Target, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Melee_Jump_C", "Jump Query Finished");

	Params::UGA_CreatureAbility_Melee_Jump_C_Jump_Query_Finished_Params Parms{};

	Parms.QueryInstance = QueryInstance;
	Parms.QueryStatus = QueryStatus;
	Parms.CallFunc_GetQueryResultsAsLocations_ResultLocations = CallFunc_GetQueryResultsAsLocations_ResultLocations;
	Parms.CallFunc_GetQueryResultsAsLocations_ReturnValue = CallFunc_GetQueryResultsAsLocations_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetTarget_self_CastInput = CallFunc_GetTarget_self_CastInput;
	Parms.CallFunc_GetTarget_Target = CallFunc_GetTarget_Target;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAbility_Melee_Jump.GA_CreatureAbility_Melee_Jump_C.SelectMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  TargetTransform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                SelectedMontage                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_SelectMontage_SelectedMontage                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_SelectMontageNearTarget_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Melee_Jump_C::SelectMontage(const struct FTransform& TargetTransform, class UAnimMontage** SelectedMontage, class UAnimMontage* CallFunc_SelectMontage_SelectedMontage, class UAnimMontage* CallFunc_SelectMontageNearTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Melee_Jump_C", "SelectMontage");

	Params::UGA_CreatureAbility_Melee_Jump_C_SelectMontage_Params Parms{};

	Parms.TargetTransform = TargetTransform;
	Parms.CallFunc_SelectMontage_SelectedMontage = CallFunc_SelectMontage_SelectedMontage;
	Parms.CallFunc_SelectMontageNearTarget_ReturnValue = CallFunc_SelectMontageNearTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedMontage != nullptr)
		*SelectedMontage = Parms.SelectedMontage;

}


// Function GA_CreatureAbility_Melee_Jump.GA_CreatureAbility_Melee_Jump_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_CreatureAbility_Melee_Jump_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Melee_Jump_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_CreatureAbility_Melee_Jump.GA_CreatureAbility_Melee_Jump_C.ExecuteUbergraph_GA_CreatureAbility_Melee_Jump
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEnvQueryInstanceBlueprintWrapper*CallFunc_RunEQSQuery_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Melee_Jump_C::ExecuteUbergraph_GA_CreatureAbility_Melee_Jump(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Melee_Jump_C", "ExecuteUbergraph_GA_CreatureAbility_Melee_Jump");

	Params::UGA_CreatureAbility_Melee_Jump_C_ExecuteUbergraph_GA_CreatureAbility_Melee_Jump_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_RunEQSQuery_ReturnValue = CallFunc_RunEQSQuery_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


