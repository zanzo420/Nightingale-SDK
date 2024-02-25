#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FantasticMetalPillar02.BP_FantasticMetalPillar02_C
// (Actor)

class UClass* ABP_FantasticMetalPillar02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FantasticMetalPillar02_C");

	return Clss;
}


// BP_FantasticMetalPillar02_C BP_FantasticMetalPillar02.Default__BP_FantasticMetalPillar02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FantasticMetalPillar02_C* ABP_FantasticMetalPillar02_C::GetDefaultObj()
{
	static class ABP_FantasticMetalPillar02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FantasticMetalPillar02_C*>(ABP_FantasticMetalPillar02_C::StaticClass()->DefaultObject);

	return Default;
}

}


