#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FAE_LightHanging01.BP_FAE_LightHanging01_C
// (Actor)

class UClass* ABP_FAE_LightHanging01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FAE_LightHanging01_C");

	return Clss;
}


// BP_FAE_LightHanging01_C BP_FAE_LightHanging01.Default__BP_FAE_LightHanging01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FAE_LightHanging01_C* ABP_FAE_LightHanging01_C::GetDefaultObj()
{
	static class ABP_FAE_LightHanging01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FAE_LightHanging01_C*>(ABP_FAE_LightHanging01_C::StaticClass()->DefaultObject);

	return Default;
}

}


