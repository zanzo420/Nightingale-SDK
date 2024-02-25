#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPTA_GameplayEventReceived.BPTA_GameplayEventReceived_C
// (Actor)

class UClass* ABPTA_GameplayEventReceived_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPTA_GameplayEventReceived_C");

	return Clss;
}


// BPTA_GameplayEventReceived_C BPTA_GameplayEventReceived.Default__BPTA_GameplayEventReceived_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPTA_GameplayEventReceived_C* ABPTA_GameplayEventReceived_C::GetDefaultObj()
{
	static class ABPTA_GameplayEventReceived_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPTA_GameplayEventReceived_C*>(ABPTA_GameplayEventReceived_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPTA_GameplayEventReceived.BPTA_GameplayEventReceived_C.GetTagToSend
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                TagToSend                                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// class UGameplayAbility*            CallFunc_GetOwningAbility_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGA_SwingMeleeWeapon_C*      K2Node_DynamicCast_AsGA_Swing_Melee_Weapon                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPTA_GameplayEventReceived_C::GetTagToSend(bool* Success, struct FGameplayTag* TagToSend, class UGameplayAbility* CallFunc_GetOwningAbility_ReturnValue, class UGA_SwingMeleeWeapon_C* K2Node_DynamicCast_AsGA_Swing_Melee_Weapon, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_GameplayEventReceived_C", "GetTagToSend");

	Params::ABPTA_GameplayEventReceived_C_GetTagToSend_Params Parms{};

	Parms.CallFunc_GetOwningAbility_ReturnValue = CallFunc_GetOwningAbility_ReturnValue;
	Parms.K2Node_DynamicCast_AsGA_Swing_Melee_Weapon = K2Node_DynamicCast_AsGA_Swing_Melee_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (TagToSend != nullptr)
		*TagToSend = std::move(Parms.TagToSend);

}


// Function BPTA_GameplayEventReceived.BPTA_GameplayEventReceived_C.ConfirmAndSendTargetData
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, OutParm)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromGameplayTag_ReturnValue            (None)

void ABPTA_GameplayEventReceived_C::ConfirmAndSendTargetData(struct FGameplayAbilityTargetDataHandle* TargetData, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromGameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_GameplayEventReceived_C", "ConfirmAndSendTargetData");

	Params::ABPTA_GameplayEventReceived_C_ConfirmAndSendTargetData_Params Parms{};

	Parms.CallFunc_AbilityTargetDataFromGameplayTag_ReturnValue = CallFunc_AbilityTargetDataFromGameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetData != nullptr)
		*TargetData = std::move(Parms.TargetData);

}


// Function BPTA_GameplayEventReceived.BPTA_GameplayEventReceived_C.ReceiveStartTargeting
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UGameplayAbility*            Ability                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABPTA_GameplayEventReceived_C::ReceiveStartTargeting(class UGameplayAbility* Ability)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_GameplayEventReceived_C", "ReceiveStartTargeting");

	Params::ABPTA_GameplayEventReceived_C_ReceiveStartTargeting_Params Parms{};

	Parms.Ability = Ability;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPTA_GameplayEventReceived.BPTA_GameplayEventReceived_C.ExecuteUbergraph_BPTA_GameplayEventReceived
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayAbility*            K2Node_Event_Ability                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTagToSend_Success                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetTagToSend_TagToSend                                  (NoDestructor, HasGetValueTypeHash)

void ABPTA_GameplayEventReceived_C::ExecuteUbergraph_BPTA_GameplayEventReceived(int32 EntryPoint, class UGameplayAbility* K2Node_Event_Ability, bool CallFunc_GetTagToSend_Success, const struct FGameplayTag& CallFunc_GetTagToSend_TagToSend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPTA_GameplayEventReceived_C", "ExecuteUbergraph_BPTA_GameplayEventReceived");

	Params::ABPTA_GameplayEventReceived_C_ExecuteUbergraph_BPTA_GameplayEventReceived_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Ability = K2Node_Event_Ability;
	Parms.CallFunc_GetTagToSend_Success = CallFunc_GetTagToSend_Success;
	Parms.CallFunc_GetTagToSend_TagToSend = CallFunc_GetTagToSend_TagToSend;

	UObject::ProcessEvent(Func, &Parms);

}

}


