#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_SleepExit_Boar_Adult.GA_CreatureAbility_SleepExit_Boar_Adult_C
// (None)

class UClass* UGA_CreatureAbility_SleepExit_Boar_Adult_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_SleepExit_Boar_Adult_C");

	return Clss;
}


// GA_CreatureAbility_SleepExit_Boar_Adult_C GA_CreatureAbility_SleepExit_Boar_Adult.Default__GA_CreatureAbility_SleepExit_Boar_Adult_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_SleepExit_Boar_Adult_C* UGA_CreatureAbility_SleepExit_Boar_Adult_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_SleepExit_Boar_Adult_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_SleepExit_Boar_Adult_C*>(UGA_CreatureAbility_SleepExit_Boar_Adult_C::StaticClass()->DefaultObject);

	return Default;
}

}


