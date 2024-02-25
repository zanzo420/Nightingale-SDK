#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CreatureSpawner_EncounterWildlife.BP_CreatureSpawner_EncounterWildlife_C
// (Actor, Pawn)

class UClass* ABP_CreatureSpawner_EncounterWildlife_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CreatureSpawner_EncounterWildlife_C");

	return Clss;
}


// BP_CreatureSpawner_EncounterWildlife_C BP_CreatureSpawner_EncounterWildlife.Default__BP_CreatureSpawner_EncounterWildlife_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CreatureSpawner_EncounterWildlife_C* ABP_CreatureSpawner_EncounterWildlife_C::GetDefaultObj()
{
	static class ABP_CreatureSpawner_EncounterWildlife_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CreatureSpawner_EncounterWildlife_C*>(ABP_CreatureSpawner_EncounterWildlife_C::StaticClass()->DefaultObject);

	return Default;
}

}


