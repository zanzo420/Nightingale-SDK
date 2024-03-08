#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_MeleeBlockPassiveStamina.GE_MeleeBlockPassiveStamina_C
// (None)

class UClass* UGE_MeleeBlockPassiveStamina_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_MeleeBlockPassiveStamina_C");

	return Clss;
}


// GE_MeleeBlockPassiveStamina_C GE_MeleeBlockPassiveStamina.Default__GE_MeleeBlockPassiveStamina_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_MeleeBlockPassiveStamina_C* UGE_MeleeBlockPassiveStamina_C::GetDefaultObj()
{
	static class UGE_MeleeBlockPassiveStamina_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_MeleeBlockPassiveStamina_C*>(UGE_MeleeBlockPassiveStamina_C::StaticClass()->DefaultObject);

	return Default;
}

}


