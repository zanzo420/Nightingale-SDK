#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CreatureEvadeCooldown.GE_CreatureEvadeCooldown_C
// (None)

class UClass* UGE_CreatureEvadeCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CreatureEvadeCooldown_C");

	return Clss;
}


// GE_CreatureEvadeCooldown_C GE_CreatureEvadeCooldown.Default__GE_CreatureEvadeCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CreatureEvadeCooldown_C* UGE_CreatureEvadeCooldown_C::GetDefaultObj()
{
	static class UGE_CreatureEvadeCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CreatureEvadeCooldown_C*>(UGE_CreatureEvadeCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


