#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Consumable_Stealth.GE_Consumable_Stealth_C
// (None)

class UClass* UGE_Consumable_Stealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Consumable_Stealth_C");

	return Clss;
}


// GE_Consumable_Stealth_C GE_Consumable_Stealth.Default__GE_Consumable_Stealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Consumable_Stealth_C* UGE_Consumable_Stealth_C::GetDefaultObj()
{
	static class UGE_Consumable_Stealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Consumable_Stealth_C*>(UGE_Consumable_Stealth_C::StaticClass()->DefaultObject);

	return Default;
}

}


