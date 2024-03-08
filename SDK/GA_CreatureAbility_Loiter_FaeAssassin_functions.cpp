#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_Loiter_FaeAssassin.GA_CreatureAbility_Loiter_FaeAssassin_C
// (None)

class UClass* UGA_CreatureAbility_Loiter_FaeAssassin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_Loiter_FaeAssassin_C");

	return Clss;
}


// GA_CreatureAbility_Loiter_FaeAssassin_C GA_CreatureAbility_Loiter_FaeAssassin.Default__GA_CreatureAbility_Loiter_FaeAssassin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_Loiter_FaeAssassin_C* UGA_CreatureAbility_Loiter_FaeAssassin_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_Loiter_FaeAssassin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_Loiter_FaeAssassin_C*>(UGA_CreatureAbility_Loiter_FaeAssassin_C::StaticClass()->DefaultObject);

	return Default;
}

}


