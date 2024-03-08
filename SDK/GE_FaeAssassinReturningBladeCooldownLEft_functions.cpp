#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FaeAssassinReturningBladeCooldownLEft.GE_FaeAssassinReturningBladeCooldownLeft_C
// (None)

class UClass* UGE_FaeAssassinReturningBladeCooldownLeft_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FaeAssassinReturningBladeCooldownLeft_C");

	return Clss;
}


// GE_FaeAssassinReturningBladeCooldownLeft_C GE_FaeAssassinReturningBladeCooldownLEft.Default__GE_FaeAssassinReturningBladeCooldownLeft_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FaeAssassinReturningBladeCooldownLeft_C* UGE_FaeAssassinReturningBladeCooldownLeft_C::GetDefaultObj()
{
	static class UGE_FaeAssassinReturningBladeCooldownLeft_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FaeAssassinReturningBladeCooldownLeft_C*>(UGE_FaeAssassinReturningBladeCooldownLeft_C::StaticClass()->DefaultObject);

	return Default;
}

}


