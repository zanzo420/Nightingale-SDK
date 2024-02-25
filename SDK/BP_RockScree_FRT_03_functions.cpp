#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RockScree_FRT_03.BP_RockScree_FRT_03_C
// (Actor)

class UClass* ABP_RockScree_FRT_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RockScree_FRT_03_C");

	return Clss;
}


// BP_RockScree_FRT_03_C BP_RockScree_FRT_03.Default__BP_RockScree_FRT_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RockScree_FRT_03_C* ABP_RockScree_FRT_03_C::GetDefaultObj()
{
	static class ABP_RockScree_FRT_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RockScree_FRT_03_C*>(ABP_RockScree_FRT_03_C::StaticClass()->DefaultObject);

	return Default;
}

}


