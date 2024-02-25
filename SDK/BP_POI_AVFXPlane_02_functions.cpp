#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_POI_AVFXPlane_02.BP_POI_AVFXPlane_02_C
// (Actor)

class UClass* ABP_POI_AVFXPlane_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_POI_AVFXPlane_02_C");

	return Clss;
}


// BP_POI_AVFXPlane_02_C BP_POI_AVFXPlane_02.Default__BP_POI_AVFXPlane_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_POI_AVFXPlane_02_C* ABP_POI_AVFXPlane_02_C::GetDefaultObj()
{
	static class ABP_POI_AVFXPlane_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_POI_AVFXPlane_02_C*>(ABP_POI_AVFXPlane_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


