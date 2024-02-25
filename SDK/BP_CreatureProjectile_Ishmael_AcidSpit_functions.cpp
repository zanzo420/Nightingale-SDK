#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CreatureProjectile_Ishmael_AcidSpit.BP_CreatureProjectile_Ishmael_AcidSpit_C
// (Actor)

class UClass* ABP_CreatureProjectile_Ishmael_AcidSpit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CreatureProjectile_Ishmael_AcidSpit_C");

	return Clss;
}


// BP_CreatureProjectile_Ishmael_AcidSpit_C BP_CreatureProjectile_Ishmael_AcidSpit.Default__BP_CreatureProjectile_Ishmael_AcidSpit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CreatureProjectile_Ishmael_AcidSpit_C* ABP_CreatureProjectile_Ishmael_AcidSpit_C::GetDefaultObj()
{
	static class ABP_CreatureProjectile_Ishmael_AcidSpit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CreatureProjectile_Ishmael_AcidSpit_C*>(ABP_CreatureProjectile_Ishmael_AcidSpit_C::StaticClass()->DefaultObject);

	return Default;
}

}


