#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CaveCliffside_AVFXPlane.BP_CaveCliffside_AVFXPlane_C
// (Actor)

class UClass* ABP_CaveCliffside_AVFXPlane_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CaveCliffside_AVFXPlane_C");

	return Clss;
}


// BP_CaveCliffside_AVFXPlane_C BP_CaveCliffside_AVFXPlane.Default__BP_CaveCliffside_AVFXPlane_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CaveCliffside_AVFXPlane_C* ABP_CaveCliffside_AVFXPlane_C::GetDefaultObj()
{
	static class ABP_CaveCliffside_AVFXPlane_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CaveCliffside_AVFXPlane_C*>(ABP_CaveCliffside_AVFXPlane_C::StaticClass()->DefaultObject);

	return Default;
}

}


