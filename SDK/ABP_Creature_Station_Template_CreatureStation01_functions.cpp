#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Creature_Station_Template_CreatureStation01.ABP_Creature_Station_Template_CreatureStation01_C
// (None)

class UClass* UABP_Creature_Station_Template_CreatureStation01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Creature_Station_Template_CreatureStation01_C");

	return Clss;
}


// ABP_Creature_Station_Template_CreatureStation01_C ABP_Creature_Station_Template_CreatureStation01.Default__ABP_Creature_Station_Template_CreatureStation01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Creature_Station_Template_CreatureStation01_C* UABP_Creature_Station_Template_CreatureStation01_C::GetDefaultObj()
{
	static class UABP_Creature_Station_Template_CreatureStation01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Creature_Station_Template_CreatureStation01_C*>(UABP_Creature_Station_Template_CreatureStation01_C::StaticClass()->DefaultObject);

	return Default;
}

}


