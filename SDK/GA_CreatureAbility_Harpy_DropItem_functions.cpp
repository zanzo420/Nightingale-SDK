#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_Harpy_DropItem.GA_CreatureAbility_Harpy_DropItem_C
// (None)

class UClass* UGA_CreatureAbility_Harpy_DropItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_Harpy_DropItem_C");

	return Clss;
}


// GA_CreatureAbility_Harpy_DropItem_C GA_CreatureAbility_Harpy_DropItem.Default__GA_CreatureAbility_Harpy_DropItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_Harpy_DropItem_C* UGA_CreatureAbility_Harpy_DropItem_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_Harpy_DropItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_Harpy_DropItem_C*>(UGA_CreatureAbility_Harpy_DropItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_Harpy_DropItem.GA_CreatureAbility_Harpy_DropItem_C.HandleEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTags                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class ABP_Creature_Wildlife_Harpy_C*K2Node_DynamicCast_AsBP_Creature_Wildlife_Harpy                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Harpy_DropItem_C::HandleEvent(const struct FGameplayTag& EventTags, const struct FGameplayEventData& EventData, class ABP_Creature_Wildlife_Harpy_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Harpy, bool K2Node_DynamicCast_bSuccess, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Harpy_DropItem_C", "HandleEvent");

	Params::UGA_CreatureAbility_Harpy_DropItem_C_HandleEvent_Params Parms{};

	Parms.EventTags = EventTags;
	Parms.EventData = EventData;
	Parms.K2Node_DynamicCast_AsBP_Creature_Wildlife_Harpy = K2Node_DynamicCast_AsBP_Creature_Wildlife_Harpy;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


