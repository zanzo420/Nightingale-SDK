#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_RepairTargetStructure.BTT_RepairTargetStructure_C
// (None)

class UClass* UBTT_RepairTargetStructure_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_RepairTargetStructure_C");

	return Clss;
}


// BTT_RepairTargetStructure_C BTT_RepairTargetStructure.Default__BTT_RepairTargetStructure_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_RepairTargetStructure_C* UBTT_RepairTargetStructure_C::GetDefaultObj()
{
	static class UBTT_RepairTargetStructure_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_RepairTargetStructure_C*>(UBTT_RepairTargetStructure_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_RepairTargetStructure.BTT_RepairTargetStructure_C.OnAbilityEnded
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameplayAbility*            Ability                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameplayAbility*         K2Node_DynamicCast_AsNWXGameplay_Ability                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAbilityTag_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_RepairTargetStructure_C::OnAbilityEnded(class UGameplayAbility* Ability, class UNWXGameplayAbility* K2Node_DynamicCast_AsNWXGameplay_Ability, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAbilityTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_RepairTargetStructure_C", "OnAbilityEnded");

	Params::UBTT_RepairTargetStructure_C_OnAbilityEnded_Params Parms{};

	Parms.Ability = Ability;
	Parms.K2Node_DynamicCast_AsNWXGameplay_Ability = K2Node_DynamicCast_AsNWXGameplay_Ability;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAbilityTag_ReturnValue = CallFunc_HasAbilityTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_RepairTargetStructure.BTT_RepairTargetStructure_C.TimeoutAction
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBTT_RepairTargetStructure_C::TimeoutAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_RepairTargetStructure_C", "TimeoutAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BTT_RepairTargetStructure.BTT_RepairTargetStructure_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_RepairTargetStructure_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_RepairTargetStructure_C", "ReceiveExecuteAI");

	Params::UBTT_RepairTargetStructure_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_RepairTargetStructure.BTT_RepairTargetStructure_C.ExecuteUbergraph_BTT_RepairTargetStructure
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UNWXAbilitySystemComponent*  K2Node_DynamicCast_AsNWXAbility_System_Component                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue             (None)
// bool                               CallFunc_TryActivateAbilitiesByTag_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_RepairTargetStructure_C::ExecuteUbergraph_BTT_RepairTargetStructure(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UNWXAbilitySystemComponent* K2Node_DynamicCast_AsNWXAbility_System_Component, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool CallFunc_TryActivateAbilitiesByTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_RepairTargetStructure_C", "ExecuteUbergraph_BTT_RepairTargetStructure");

	Params::UBTT_RepairTargetStructure_C_ExecuteUbergraph_BTT_RepairTargetStructure_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXAbility_System_Component = K2Node_DynamicCast_AsNWXAbility_System_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	Parms.CallFunc_TryActivateAbilitiesByTag_ReturnValue = CallFunc_TryActivateAbilitiesByTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


