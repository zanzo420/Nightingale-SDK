#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FAE_LightHanging01b.BP_FAE_LightHanging01b_C
// (Actor)

class UClass* ABP_FAE_LightHanging01b_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FAE_LightHanging01b_C");

	return Clss;
}


// BP_FAE_LightHanging01b_C BP_FAE_LightHanging01b.Default__BP_FAE_LightHanging01b_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FAE_LightHanging01b_C* ABP_FAE_LightHanging01b_C::GetDefaultObj()
{
	static class ABP_FAE_LightHanging01b_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FAE_LightHanging01b_C*>(ABP_FAE_LightHanging01b_C::StaticClass()->DefaultObject);

	return Default;
}

}


