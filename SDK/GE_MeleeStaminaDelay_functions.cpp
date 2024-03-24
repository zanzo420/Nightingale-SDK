#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_MeleeStaminaDelay.GE_MeleeStaminaDelay_C
// (None)

class UClass* UGE_MeleeStaminaDelay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_MeleeStaminaDelay_C");

	return Clss;
}


// GE_MeleeStaminaDelay_C GE_MeleeStaminaDelay.Default__GE_MeleeStaminaDelay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_MeleeStaminaDelay_C* UGE_MeleeStaminaDelay_C::GetDefaultObj()
{
	static class UGE_MeleeStaminaDelay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_MeleeStaminaDelay_C*>(UGE_MeleeStaminaDelay_C::StaticClass()->DefaultObject);

	return Default;
}

}


