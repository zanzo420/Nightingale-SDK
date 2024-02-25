#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_NPC_HarvestOre.AIA_Creature_NPC_HarvestOre_C
// (None)

class UClass* UAIA_Creature_NPC_HarvestOre_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_NPC_HarvestOre_C");

	return Clss;
}


// AIA_Creature_NPC_HarvestOre_C AIA_Creature_NPC_HarvestOre.Default__AIA_Creature_NPC_HarvestOre_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_NPC_HarvestOre_C* UAIA_Creature_NPC_HarvestOre_C::GetDefaultObj()
{
	static class UAIA_Creature_NPC_HarvestOre_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_NPC_HarvestOre_C*>(UAIA_Creature_NPC_HarvestOre_C::StaticClass()->DefaultObject);

	return Default;
}

}


