#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Consumable_Heal_Instant.GE_Consumable_Heal_Instant_C
// (None)

class UClass* UGE_Consumable_Heal_Instant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Consumable_Heal_Instant_C");

	return Clss;
}


// GE_Consumable_Heal_Instant_C GE_Consumable_Heal_Instant.Default__GE_Consumable_Heal_Instant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Consumable_Heal_Instant_C* UGE_Consumable_Heal_Instant_C::GetDefaultObj()
{
	static class UGE_Consumable_Heal_Instant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Consumable_Heal_Instant_C*>(UGE_Consumable_Heal_Instant_C::StaticClass()->DefaultObject);

	return Default;
}

}


