#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SpellFlameWeapon.GE_SpellFlameWeapon_C
// (None)

class UClass* UGE_SpellFlameWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SpellFlameWeapon_C");

	return Clss;
}


// GE_SpellFlameWeapon_C GE_SpellFlameWeapon.Default__GE_SpellFlameWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SpellFlameWeapon_C* UGE_SpellFlameWeapon_C::GetDefaultObj()
{
	static class UGE_SpellFlameWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SpellFlameWeapon_C*>(UGE_SpellFlameWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


