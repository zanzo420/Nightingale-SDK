#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Rockscree_FRT_04.BP_Rockscree_FRT_04_C
// (Actor)

class UClass* ABP_Rockscree_FRT_04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Rockscree_FRT_04_C");

	return Clss;
}


// BP_Rockscree_FRT_04_C BP_Rockscree_FRT_04.Default__BP_Rockscree_FRT_04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Rockscree_FRT_04_C* ABP_Rockscree_FRT_04_C::GetDefaultObj()
{
	static class ABP_Rockscree_FRT_04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Rockscree_FRT_04_C*>(ABP_Rockscree_FRT_04_C::StaticClass()->DefaultObject);

	return Default;
}

}


