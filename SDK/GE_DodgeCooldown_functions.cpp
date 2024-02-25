#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DodgeCooldown.GE_DodgeCooldown_C
// (None)

class UClass* UGE_DodgeCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DodgeCooldown_C");

	return Clss;
}


// GE_DodgeCooldown_C GE_DodgeCooldown.Default__GE_DodgeCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DodgeCooldown_C* UGE_DodgeCooldown_C::GetDefaultObj()
{
	static class UGE_DodgeCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DodgeCooldown_C*>(UGE_DodgeCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


