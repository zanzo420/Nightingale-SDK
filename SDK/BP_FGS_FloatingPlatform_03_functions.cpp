#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FGS_FloatingPlatform_03.BP_FGS_FloatingPlatform_03_C
// (Actor)

class UClass* ABP_FGS_FloatingPlatform_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FGS_FloatingPlatform_03_C");

	return Clss;
}


// BP_FGS_FloatingPlatform_03_C BP_FGS_FloatingPlatform_03.Default__BP_FGS_FloatingPlatform_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FGS_FloatingPlatform_03_C* ABP_FGS_FloatingPlatform_03_C::GetDefaultObj()
{
	static class ABP_FGS_FloatingPlatform_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FGS_FloatingPlatform_03_C*>(ABP_FGS_FloatingPlatform_03_C::StaticClass()->DefaultObject);

	return Default;
}

}


