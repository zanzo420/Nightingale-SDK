#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CreatureSpawner_Harpy.BP_CreatureSpawner_Harpy_C
// (Actor, Pawn)

class UClass* ABP_CreatureSpawner_Harpy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CreatureSpawner_Harpy_C");

	return Clss;
}


// BP_CreatureSpawner_Harpy_C BP_CreatureSpawner_Harpy.Default__BP_CreatureSpawner_Harpy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CreatureSpawner_Harpy_C* ABP_CreatureSpawner_Harpy_C::GetDefaultObj()
{
	static class ABP_CreatureSpawner_Harpy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CreatureSpawner_Harpy_C*>(ABP_CreatureSpawner_Harpy_C::StaticClass()->DefaultObject);

	return Default;
}

}


