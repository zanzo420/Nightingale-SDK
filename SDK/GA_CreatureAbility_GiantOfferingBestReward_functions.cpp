#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_GiantOfferingBestReward.GA_CreatureAbility_GiantOfferingBestReward_C
// (None)

class UClass* UGA_CreatureAbility_GiantOfferingBestReward_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_GiantOfferingBestReward_C");

	return Clss;
}


// GA_CreatureAbility_GiantOfferingBestReward_C GA_CreatureAbility_GiantOfferingBestReward.Default__GA_CreatureAbility_GiantOfferingBestReward_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_GiantOfferingBestReward_C* UGA_CreatureAbility_GiantOfferingBestReward_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_GiantOfferingBestReward_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_GiantOfferingBestReward_C*>(UGA_CreatureAbility_GiantOfferingBestReward_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_GiantOfferingBestReward.GA_CreatureAbility_GiantOfferingBestReward_C.HandleEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTags                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_GiantOfferingBestReward_C::HandleEvent(const struct FGameplayTag& EventTags, const struct FGameplayEventData& EventData, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_GiantOfferingBestReward_C", "HandleEvent");

	Params::UGA_CreatureAbility_GiantOfferingBestReward_C_HandleEvent_Params Parms{};

	Parms.EventTags = EventTags;
	Parms.EventData = EventData;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAbility_GiantOfferingBestReward.GA_CreatureAbility_GiantOfferingBestReward_C.SpawnReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerState*             PlayerState                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             LItem                                                            (Edit, BlueprintVisible)
// int32                              LIndex                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_GiantOfferingBestReward_C::SpawnReward(class ANWXPlayerState* PlayerState, const struct FInventoryEntry& LItem, int32 LIndex, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_GiantOfferingBestReward_C", "SpawnReward");

	Params::UGA_CreatureAbility_GiantOfferingBestReward_C_SpawnReward_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.LItem = LItem;
	Parms.LIndex = LIndex;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAbility_GiantOfferingBestReward.GA_CreatureAbility_GiantOfferingBestReward_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_CreatureAbility_GiantOfferingBestReward_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_GiantOfferingBestReward_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_CreatureAbility_GiantOfferingBestReward.GA_CreatureAbility_GiantOfferingBestReward_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_GiantOfferingBestReward_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_GiantOfferingBestReward_C", "K2_OnEndAbility");

	Params::UGA_CreatureAbility_GiantOfferingBestReward_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAbility_GiantOfferingBestReward.GA_CreatureAbility_GiantOfferingBestReward_C.ExecuteUbergraph_GA_CreatureAbility_GiantOfferingBestReward
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_3                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_4                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_Wildlife_SunGiant_C*K2Node_DynamicCast_AsBP_Creature_Wildlife_Sun_Giant              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_GiantOfferingBestReward_C::ExecuteUbergraph_GA_CreatureAbility_GiantOfferingBestReward(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, const struct FGameplayTag& Temp_struct_Variable_4, bool K2Node_Event_bWasCancelled, class ABP_Creature_Wildlife_SunGiant_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Sun_Giant, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_GiantOfferingBestReward_C", "ExecuteUbergraph_GA_CreatureAbility_GiantOfferingBestReward");

	Params::UGA_CreatureAbility_GiantOfferingBestReward_C_ExecuteUbergraph_GA_CreatureAbility_GiantOfferingBestReward_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_DynamicCast_AsBP_Creature_Wildlife_Sun_Giant = K2Node_DynamicCast_AsBP_Creature_Wildlife_Sun_Giant;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


