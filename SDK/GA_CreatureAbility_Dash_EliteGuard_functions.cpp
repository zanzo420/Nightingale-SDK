#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_Dash_EliteGuard.GA_CreatureAbility_Dash_EliteGuard_C
// (None)

class UClass* UGA_CreatureAbility_Dash_EliteGuard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_Dash_EliteGuard_C");

	return Clss;
}


// GA_CreatureAbility_Dash_EliteGuard_C GA_CreatureAbility_Dash_EliteGuard.Default__GA_CreatureAbility_Dash_EliteGuard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_Dash_EliteGuard_C* UGA_CreatureAbility_Dash_EliteGuard_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_Dash_EliteGuard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_Dash_EliteGuard_C*>(UGA_CreatureAbility_Dash_EliteGuard_C::StaticClass()->DefaultObject);

	return Default;
}

}


