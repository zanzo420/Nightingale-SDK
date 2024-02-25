#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SwingMeleeWeapon_Multi.GA_SwingMeleeWeapon_Multi_C
// (None)

class UClass* UGA_SwingMeleeWeapon_Multi_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SwingMeleeWeapon_Multi_C");

	return Clss;
}


// GA_SwingMeleeWeapon_Multi_C GA_SwingMeleeWeapon_Multi.Default__GA_SwingMeleeWeapon_Multi_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SwingMeleeWeapon_Multi_C* UGA_SwingMeleeWeapon_Multi_C::GetDefaultObj()
{
	static class UGA_SwingMeleeWeapon_Multi_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SwingMeleeWeapon_Multi_C*>(UGA_SwingMeleeWeapon_Multi_C::StaticClass()->DefaultObject);

	return Default;
}

}


