#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HealInjuries.GE_HealInjuries_C
// (None)

class UClass* UGE_HealInjuries_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HealInjuries_C");

	return Clss;
}


// GE_HealInjuries_C GE_HealInjuries.Default__GE_HealInjuries_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HealInjuries_C* UGE_HealInjuries_C::GetDefaultObj()
{
	static class UGE_HealInjuries_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HealInjuries_C*>(UGE_HealInjuries_C::StaticClass()->DefaultObject);

	return Default;
}

}


