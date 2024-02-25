#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AVFX_Square01.BP_AVFX_Square01_C
// (Actor)

class UClass* ABP_AVFX_Square01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AVFX_Square01_C");

	return Clss;
}


// BP_AVFX_Square01_C BP_AVFX_Square01.Default__BP_AVFX_Square01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AVFX_Square01_C* ABP_AVFX_Square01_C::GetDefaultObj()
{
	static class ABP_AVFX_Square01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AVFX_Square01_C*>(ABP_AVFX_Square01_C::StaticClass()->DefaultObject);

	return Default;
}

}


