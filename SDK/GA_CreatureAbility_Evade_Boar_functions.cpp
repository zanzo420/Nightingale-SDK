#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_Evade_Boar.GA_CreatureAbility_Evade_Boar_C
// (None)

class UClass* UGA_CreatureAbility_Evade_Boar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_Evade_Boar_C");

	return Clss;
}


// GA_CreatureAbility_Evade_Boar_C GA_CreatureAbility_Evade_Boar.Default__GA_CreatureAbility_Evade_Boar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_Evade_Boar_C* UGA_CreatureAbility_Evade_Boar_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_Evade_Boar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_Evade_Boar_C*>(UGA_CreatureAbility_Evade_Boar_C::StaticClass()->DefaultObject);

	return Default;
}

}

