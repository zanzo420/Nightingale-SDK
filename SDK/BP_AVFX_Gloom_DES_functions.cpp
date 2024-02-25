#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AVFX_Gloom_DES.BP_AVFX_Gloom_DES_C
// (Actor)

class UClass* ABP_AVFX_Gloom_DES_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AVFX_Gloom_DES_C");

	return Clss;
}


// BP_AVFX_Gloom_DES_C BP_AVFX_Gloom_DES.Default__BP_AVFX_Gloom_DES_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AVFX_Gloom_DES_C* ABP_AVFX_Gloom_DES_C::GetDefaultObj()
{
	static class ABP_AVFX_Gloom_DES_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AVFX_Gloom_DES_C*>(ABP_AVFX_Gloom_DES_C::StaticClass()->DefaultObject);

	return Default;
}

}


