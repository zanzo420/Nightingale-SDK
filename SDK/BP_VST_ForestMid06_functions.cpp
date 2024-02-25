#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VST_ForestMid06.BP_VST_ForestMid06_C
// (Actor)

class UClass* ABP_VST_ForestMid06_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VST_ForestMid06_C");

	return Clss;
}


// BP_VST_ForestMid06_C BP_VST_ForestMid06.Default__BP_VST_ForestMid06_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_VST_ForestMid06_C* ABP_VST_ForestMid06_C::GetDefaultObj()
{
	static class ABP_VST_ForestMid06_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_VST_ForestMid06_C*>(ABP_VST_ForestMid06_C::StaticClass()->DefaultObject);

	return Default;
}

}


