#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DodgeStaminaDelay.GE_DodgeStaminaDelay_C
// (None)

class UClass* UGE_DodgeStaminaDelay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DodgeStaminaDelay_C");

	return Clss;
}


// GE_DodgeStaminaDelay_C GE_DodgeStaminaDelay.Default__GE_DodgeStaminaDelay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DodgeStaminaDelay_C* UGE_DodgeStaminaDelay_C::GetDefaultObj()
{
	static class UGE_DodgeStaminaDelay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DodgeStaminaDelay_C*>(UGE_DodgeStaminaDelay_C::StaticClass()->DefaultObject);

	return Default;
}

}


