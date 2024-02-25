#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Light_Buoy.BP_Light_Buoy_C
// (Actor)

class UClass* ABP_Light_Buoy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Light_Buoy_C");

	return Clss;
}


// BP_Light_Buoy_C BP_Light_Buoy.Default__BP_Light_Buoy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Light_Buoy_C* ABP_Light_Buoy_C::GetDefaultObj()
{
	static class ABP_Light_Buoy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Light_Buoy_C*>(ABP_Light_Buoy_C::StaticClass()->DefaultObject);

	return Default;
}

}


