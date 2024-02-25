#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FantasticMetalPillar03.BP_FantasticMetalPillar03_C
// (Actor)

class UClass* ABP_FantasticMetalPillar03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FantasticMetalPillar03_C");

	return Clss;
}


// BP_FantasticMetalPillar03_C BP_FantasticMetalPillar03.Default__BP_FantasticMetalPillar03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FantasticMetalPillar03_C* ABP_FantasticMetalPillar03_C::GetDefaultObj()
{
	static class ABP_FantasticMetalPillar03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FantasticMetalPillar03_C*>(ABP_FantasticMetalPillar03_C::StaticClass()->DefaultObject);

	return Default;
}

}


