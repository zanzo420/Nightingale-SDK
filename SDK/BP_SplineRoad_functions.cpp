#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SplineRoad.BP_SplineRoad_C
// (Actor)

class UClass* ABP_SplineRoad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SplineRoad_C");

	return Clss;
}


// BP_SplineRoad_C BP_SplineRoad.Default__BP_SplineRoad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SplineRoad_C* ABP_SplineRoad_C::GetDefaultObj()
{
	static class ABP_SplineRoad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SplineRoad_C*>(ABP_SplineRoad_C::StaticClass()->DefaultObject);

	return Default;
}

}


