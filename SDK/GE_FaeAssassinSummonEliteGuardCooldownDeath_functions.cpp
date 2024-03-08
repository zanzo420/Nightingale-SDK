#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FaeAssassinSummonEliteGuardCooldownDeath.GE_FaeAssassinSummonEliteGuardCooldownDeath_C
// (None)

class UClass* UGE_FaeAssassinSummonEliteGuardCooldownDeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FaeAssassinSummonEliteGuardCooldownDeath_C");

	return Clss;
}


// GE_FaeAssassinSummonEliteGuardCooldownDeath_C GE_FaeAssassinSummonEliteGuardCooldownDeath.Default__GE_FaeAssassinSummonEliteGuardCooldownDeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FaeAssassinSummonEliteGuardCooldownDeath_C* UGE_FaeAssassinSummonEliteGuardCooldownDeath_C::GetDefaultObj()
{
	static class UGE_FaeAssassinSummonEliteGuardCooldownDeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FaeAssassinSummonEliteGuardCooldownDeath_C*>(UGE_FaeAssassinSummonEliteGuardCooldownDeath_C::StaticClass()->DefaultObject);

	return Default;
}

}


